
#include "HookAddr.h"
#include "Enums.h"
#include "GlobalVariable.h"

/**
 * @file LeaderData.cpp
 * @brief 简介
 * @details 细节
 * @author 作者
 * @version 版本号
 * @date 年-月-日
 * @copyright 版权
 */


/**
 * @brief 判断两个领导者是否在同一队伍中
 *
 * 此函数用于检查游戏中的两个领导者是否属于同一队伍，支持多种队伍模式
 * 和特殊规则。函数考虑了队伍样式、特殊标记、游戏帧数和严格模式等因素。
 *
 * @param leaderData 当前领导者对象
 * @param placeholder 占位符参数（可能是游戏索引或上下文标识）
 * @param whom 要比较的领导者索引
 * @param strict 严格模式标志：0-宽松模式，1-严格模式
 * @return BOOL 返回TRUE表示在同一队伍，FALSE表示不在同一队伍
 */
BOOL __fastcall LeaderData__is_team(LeaderData* leaderData, int placeholder, int whom, int strict)
{
    // 局部变量声明
    const Game* game;                 // 指向游戏全局数据的指针
    unsigned __int8 team_style;       // 队伍样式配置
    int player_index;                 // 玩家索引
    int target_player_index;          // 目标玩家索引
    unsigned char team;               // 队伍编号

    // 1. 检查是否是同一个领导者（自身判断）
    if (whom == leaderData->who) {
        return TRUE;  // 自身总是与自己在同一队伍
    }

    // 2. 获取游戏全局数据和队伍样式
    game = GameAccessConst__gamec;  // 全局游戏数据
    team_style = game->info.gameSettings.fields.team_style;  // 队伍样式配置

    // 3. 特殊队伍样式7的处理逻辑
    if (team_style == 7) {
        // 3.1 检查当前领导者是否有特殊标记且队伍为8
        player_index = LeaderData__get_player(leaderData, placeholder);
        if ((game->info.player[player_index].flags & 1) != 0 &&  // 特殊标志位1
            game->info.player[player_index].team == 8) {         // 队伍编号为8
            return FALSE;  // 特殊标记的玩家不在任何队伍
        }

        // 3.2 检查目标领导者是否有特殊标记且队伍为8
        target_player_index = LeaderData__get_player(
            &GameAccessConst__leadersc->list[whom],
            placeholder
        );
        if ((game->info.player[target_player_index].flags & 1) != 0 &&  // 特殊标志位1
            game->info.player[target_player_index].team == 8) {         // 队伍编号为8
            return FALSE;  // 特殊标记的玩家不在任何队伍
        }
    }

    // 4. 非严格模式下的盟友检查
    if (game->frame && !strict) {
        // 游戏帧数不为0且非严格模式时，检查是否为盟友
        return LeaderData__is_ally(leaderData, placeholder, whom);
    }

    // 5. 基础队伍编号比较
    // 5.1 获取当前领导者的队伍编号
    player_index = LeaderData__get_player(leaderData, placeholder);
    team = game->info.player[player_index].team;

    // 5.2 获取目标领导者的队伍编号
    target_player_index = LeaderData__get_player(
       &GameAccessConst__leadersc->list[whom],
        placeholder
    );
    unsigned char target_team = game->info.player[target_player_index].team;

    // 5.3 检查队伍编号
    if ((team > 3) ||              // 队伍编号必须有效（0-3）
        (team != target_team)) {   // 队伍编号必须相同
        return FALSE;  // 不在同一队伍
    }

    // 6. 严格模式下的额外检查
    if (game->frame && strict &&  // 游戏帧数不为0且严格模式
        (!team_style ||           // 队伍样式为0
            team_style == 11 ||      // 队伍样式为11
            team_style == 8)) {      // 队伍样式为8
        // 在这些特定队伍样式下，还需检查是否为盟友
        return LeaderData__is_ally(leaderData, placeholder, whom);
    }

    // 7. 所有检查通过，返回TRUE
    return TRUE;
}

 int __fastcall LeaderData__get_player(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_player(leaderData, placeholder);
 }
 BOOL __fastcall LeaderData__is_ally(LeaderData* leaderData, int placeholder, int whom) {
     return Old_LeaderData__is_ally(leaderData, placeholder,whom);
 }

 int __fastcall Leader__calc_pop_cap(Leader* leader, int placeholder) {

	 unsigned __int8* value; // ecx
	 int v3; // eax
	 int who; // edi
	 int v5; // edx
	 int v6; // eax
	 int v7; // ebx
	 int v8; // ecx
	 int v9; // eax
	 int i; // edi
	 CityData** v11; // ecx
	 Constants* v12; // edi
	 int pop_cap; // ecx
	 int v15; // [esp+4h] [ebp-4h]

	 value = (unsigned __int8*)GameAccess__game.value;
	 leader->misery = 0;
	 if ((value[2081] & 0x10) != 0 || (value[2082] & 2) != 0)
	 {
		 v3 = ScenarioData__pop_cap[leader->who][0];
		 if (v3 >= 0)
		 {
			 leader->pop_cap = v3;
			 goto LeaderData__has_rare_43;
		 }
	 }
	 who = leader->who;
	 if ((leaders.list[who].leader_flags & 0x100000) != 0)
	 {
		 leader->pop_cap = pop_limits.list.list[value[49]].data[0];
		 goto LeaderData__has_rare_43;
	 }
	 v5 = *(_DWORD*)(*((_DWORD*)&leaders.list[0].data_encrypted + 7099 * who) + 232) ^ 0x63187;
	 v6 = GameAccess__constants->pop_cap[v5];
	 leader->pop_cap = v6;
	 v15 = v6;
	 v7 = pop_limits.list.list[value[49]].data[0];
	 v8 = GameAccess__constants->pop_cap[7];
	 if (v7 > v8)
	 {
		 if (v5 == 7)
		 {
			 leader->pop_cap = v7;
			 goto LABEL_17;
		 }
		 if (v7 - v8 < 100)
		 {
			 if (v7 - v8 < 50 || v5 < 6)
				 goto LABEL_17;
			 v9 = v5 - 5;
		 }
		 else
		 {
			 if (v5 < 4)
				 goto LABEL_17;
			 v9 = v5 - 3;
		 }
		 leader->pop_cap = v15 + 25 * v9;
	 }
 LABEL_17:
	 if (*(_DWORD*)(GameAccess__objects.value + 4 * who + 428))
	 {
		 for (i = 0; i < leader->city_mark; ++i)
		 {
			 v11 = reinterpret_cast<CityData**>(&(&cities.lists[0].list)[7 * leader->who][i]);
			 if (((*v11)->city_flags & 1) != 0)
				 leader->pop_cap += CityData__pop_cap(*v11, placeholder);
		 }
	 }
	 if (LeaderData__has_tribe_bonus(leader, placeholder, BANTU))
	 {
		 v12 = GameAccess__constants;
		 leader->pop_cap = leader->pop_cap * (GameAccess__constants->bantu_pop_cap + 100) / 100;
		 v7 = v7 * (v12->bantu_final_pop_cap + 100) / 100;
	 }
	 pop_cap = v7;
	 if (leader->pop_cap < v7)
		 pop_cap = leader->pop_cap;
	 leader->pop_cap = pop_cap;
	 if (LeaderData__has_preq(leader, placeholder, VIRTUAL_REALITY_BONUS))
		 leader->pop_cap = v7;
 LeaderData__has_rare_43:
	 if ((leader->rare.ptr[2] & 8) != 0 || (leader->rare_conquest.ptr[2] & 8) != 0)
		 leader->pop_cap = leader->pop_cap * (GameAccess__constants->peacocks_pop + 100) / 100;
	 if (LeaderData__has_wonder(leader, placeholder, COLOSSUS))
		 leader->pop_cap += GameAccess__constants->colossus_pop_cap;
	 return leader->pop_cap;



 }

 void __fastcall Leader__DeleteLeader(Leader* leader, int placeholder) {
	 Old_Leader__DeleteLeader(leader, placeholder);
 }

 void __fastcall LeaderOut__DeleteLeaderOut(LeaderOut* leaderOut, int placeholder) {
	 Old_LeaderOut__DeleteLeaderOut(leaderOut, placeholder);
 }

 int __fastcall LeaderData__get_age(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_age(leaderData, placeholder);
 }

 void __fastcall LeaderData__bucket_set(LeaderData* leaderData, int placeholder, int good, int value) {
	 Old_LeaderData__bucket_set(leaderData, placeholder, good, value);
 }

 void __fastcall LeaderData__bucket_add(LeaderData* leaderData, int placeholder, int good, int value) {
	 Old_LeaderData__bucket_add(leaderData, placeholder, good, value);
 }

 int __fastcall LeaderData__income_get(LeaderData* leaderData, int placeholder, int good) {
	 return Old_LeaderData__income_get(leaderData, placeholder, good);
 }

 int __fastcall LeaderData__resource_cap_get(LeaderData* leaderData, int placeholder, int good) {
	 return Old_LeaderData__resource_cap_get(leaderData, placeholder, good);
 }

 int __fastcall LeaderData__get_epoch(LeaderData* leaderData, int placeholder, int tech_cat) {
	 return Old_LeaderData__get_epoch(leaderData, placeholder, tech_cat);
 }

 int __fastcall LeaderData__bucket_get(LeaderData* leaderData, int placeholder, int good) {
	 return Old_LeaderData__bucket_get(leaderData, placeholder, good);
 }

 int __fastcall LeaderData__epochs_get(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__epochs_get(leaderData, placeholder);
 }

 void __fastcall Leader__gain_tech(Leader* leader, int placeholder, int t, Coord x, Coord y, int tell, int do_unit_upgrade) {
	 Old_Leader__gain_tech(leader, placeholder, t, x, y, tell, do_unit_upgrade);
 }

 int __fastcall LeaderData__support_get(LeaderData* leaderData, int placeholder, int good) {
	 return Old_LeaderData__support_get(leaderData, placeholder, good);
 }

 int __fastcall LeaderData__resources_get(LeaderData* leaderData, int placeholder, int good) {
	 return Old_LeaderData__resources_get(leaderData, placeholder, good);
 }

 void __fastcall LeaderData__resource_cap_add(LeaderData* leaderData, int placeholder, int good, int value) {
	 Old_LeaderData__resource_cap_add(leaderData, placeholder, good, value);
 }

 void __fastcall Leader__close(Leader* leader, int placeholder) {
	 Old_Leader__close(leader, placeholder);
 }

 int __fastcall Leaders__best_human_age_stamp(Leaders* leaders, int placeholder) {
	 return Old_Leaders__best_human_age_stamp(leaders, placeholder);
 }

 int __fastcall Leaders__max_enemy_age(Leaders* leaders, int placeholder, int whom) {
	 return Old_Leaders__max_enemy_age(leaders, placeholder, whom);
 }

 int __fastcall Leaders__max_age(Leaders* leaders, int placeholder) {
	 return Old_Leaders__max_age(leaders, placeholder);
 }

 int __fastcall Leaders__max_human_age(Leaders* leaders, int placeholder) {
	 return Old_Leaders__max_human_age(leaders, placeholder);
 }

 int __fastcall Leaders__max_human_cities(Leaders* leaders, int placeholder) {
	 return Old_Leaders__max_human_cities(leaders, placeholder);
 }

 void __fastcall Leader__end_process(Leader* leader, int placeholder) {
	 Old_Leader__end_process(leader, placeholder);
 }

 void __fastcall Leader__process(Leader* leader, int placeholder) {
	 Old_Leader__process(leader, placeholder);
 }

 void __fastcall Leader__process_elimination(Leader* leader, int placeholder) {
	 Old_Leader__process_elimination(leader, placeholder);
 }

 void __fastcall Leader__receive_chat(Leader* leader, int placeholder, String* string, int from_play, int prepend_sender_name, int play_sound) {
	 Old_Leader__receive_chat(leader, placeholder, string, from_play, prepend_sender_name, play_sound);
 }

 void __fastcall Leader__process_taunts(Leader* leader, int placeholder) {
	 Old_Leader__process_taunts(leader, placeholder);
 }

 void __fastcall Leader__receive_taunt(Leader* leader, int placeholder, TauntRequest taunt, int play) {
	 Old_Leader__receive_taunt(leader, placeholder, taunt, play);
 }

 void __fastcall Leader__process_taunt(Leader* leader, int placeholder, int taunt, int whom) {
	 Old_Leader__process_taunt(leader, placeholder, taunt, whom);
 }

 void __fastcall Leader__receive_ping(Leader* leader, int placeholder, Coord x, Coord y, unsigned __int8 whom, unsigned __int8 timer) {
	 Old_Leader__receive_ping(leader, placeholder, x, y, whom, timer);
 }

 void __fastcall Leader__compute_pop_score(Leader* leader, int placeholder) {
	 Old_Leader__compute_pop_score(leader, placeholder);
 }

 void __fastcall Leader__compute_unit_upgrades_score(Leader* leader, int placeholder) {
	 Old_Leader__compute_unit_upgrades_score(leader, placeholder);
 }

 void __fastcall Leader__compute_economy_score(Leader* leader, int placeholder) {
	 Old_Leader__compute_economy_score(leader, placeholder);
 }

 void __fastcall Leader__compute_research_score(Leader* leader, int placeholder) {
	 Old_Leader__compute_research_score(leader, placeholder);
 }

 void __fastcall Leader__compute_build_score(Leader* leader, int placeholder) {
	 Old_Leader__compute_build_score(leader, placeholder);
 }

 void __fastcall Leader__compute_unit_score(Leader* leader, int placeholder) {
	 Old_Leader__compute_unit_score(leader, placeholder);
 }

 void __fastcall Leader__compute_explore_score(Leader* leader, int placeholder) {
	 Old_Leader__compute_explore_score(leader, placeholder);
 }

 void __fastcall Leader__check_transport(Leader* leader, int placeholder) {
	 Old_Leader__check_transport(leader, placeholder);
 }

 void __fastcall Leader__check_explore(Leader* leader, int placeholder) {
	 Old_Leader__check_explore(leader, placeholder);
 }

 void __fastcall Leader__diplomacy(Leader* leader, int placeholder) {
	 Old_Leader__diplomacy(leader, placeholder);
 }

 int __fastcall LeaderData__resource_value(LeaderData* leaderData, int placeholder, int good) {
	 return Old_LeaderData__resource_value(leaderData, placeholder, good);
 }

 void __fastcall Leader__create_buildings(Leader* leader, int placeholder) {
	 Old_Leader__create_buildings(leader, placeholder);
 }

 void __fastcall Leader__create_units(Leader* leader, int placeholder) {
	 Old_Leader__create_units(leader, placeholder);
 }

 void __fastcall Leader__upgrade_units(Leader* leader, int placeholder) {
	 Old_Leader__upgrade_units(leader, placeholder);
 }

 void __fastcall Leader__research_techs(Leader* leader, int placeholder) {
	 Old_Leader__research_techs(leader, placeholder);
 }

 void __fastcall Leader__found_cities(Leader* leader, int placeholder) {
	 Old_Leader__found_cities(leader, placeholder);
 }

 void __fastcall Leader__market_speculation(Leader* leader, int placeholder) {
	 Old_Leader__market_speculation(leader, placeholder);
 }

 void __fastcall Leader__production_ai_setup(Leader* leader, int placeholder) {
	 Old_Leader__production_ai_setup(leader, placeholder);
 }

 BOOL __fastcall Leader__make_stuff(Leader* leader, int placeholder) {
	 return Old_Leader__make_stuff(leader, placeholder);
 }

 void __fastcall Leader__use_market(Leader* leader, int placeholder) {
	 Old_Leader__use_market(leader, placeholder);
 }

 int __fastcall Leader__make_this(Leader* leader, int placeholder, int cat) {
	 return Old_Leader__make_this(leader, placeholder, cat);
 }

 String* __fastcall Leader__say_pay(Leader* leader, int placeholder, String* result, int cat, int can) {
	 return Old_Leader__say_pay(leader, placeholder, result, cat, can);
 }

 BOOL __fastcall Leader__can_pay(Leader* leader, int placeholder, int cat) {
	 return Old_Leader__can_pay(leader, placeholder, cat);
 }

 void __fastcall Leader__check_orphaned_buildings(Leader* leader, int placeholder) {
	 Old_Leader__check_orphaned_buildings(leader, placeholder);
 }

 int __fastcall Leader__produce_spell(Leader* leader, int placeholder, int t, int city2, Color* use_escrow) {
	 return Old_Leader__produce_spell(leader, placeholder, t, city2, use_escrow);
 }

 int __fastcall Leader__produce_tech(Leader* leader, int placeholder, int t, Color* use_escrow) {
	 return Old_Leader__produce_tech(leader, placeholder, t, use_escrow);
 }

 int __fastcall Leader__produce_city(Leader* leader, int placeholder, int t, WCoord wx, WCoord wy, int use_escrow) {
	 return Old_Leader__produce_city(leader, placeholder, t, wx, wy, use_escrow);
 }

 int __fastcall Leader__produce_upgrade(Leader* leader, int placeholder, int t, int city, Color* use_escrow) {
	 return Old_Leader__produce_upgrade(leader, placeholder, t, city, use_escrow);
 }

 int __fastcall Leader__produce_unit(Leader* leader, int placeholder, int t, int city, int num, Color* use_escrow) {
	 return Old_Leader__produce_unit(leader, placeholder, t, city, num, use_escrow);
 }

 int __fastcall Leader__unit_prod_value(Leader* leader, int placeholder, int t) {
	 return Old_Leader__unit_prod_value(leader, placeholder, t);
 }

 int __fastcall Leader__check_income(Leader* leader, int placeholder, int t, int factor, int o, int use_escrow, int city, int num, int* max) {
	 return Old_Leader__check_income(leader, placeholder, t, factor, o, use_escrow, city, num, max);
 }

 void __fastcall Leader__compute_sites(Leader* leader, int placeholder, int force) {
	 Old_Leader__compute_sites(leader, placeholder, force);
 }

 void __fastcall Leader__compute_site_stats(Leader* leader, int placeholder, WCoord wx, WCoord wy, int city, int* o, int reg, int* this_val, int* this_dist, int nearby, unsigned int new_x, WCoord* new_y) {
	 Old_Leader__compute_site_stats(leader, placeholder, wx, wy, city, o, reg, this_val, this_dist, nearby, new_x, new_y);
 }

 int __fastcall Leader__get_need(Leader* leader, int placeholder, int good, int lowest) {
	 return Old_Leader__get_need(leader, placeholder, good, lowest);
 }

 void __fastcall Leader__calc_anti_attrition(Leader* leader, int placeholder) {
	 Old_Leader__calc_anti_attrition(leader, placeholder);
 }

 void __fastcall Leader__calc_attrition(Leader* leader, int placeholder) {
	 Old_Leader__calc_attrition(leader, placeholder);
 }

 void __fastcall Leader__calc_misery(Leader* leader, int placeholder) {
	 Old_Leader__calc_misery(leader, placeholder);
 }

 int __fastcall Leader__queued_units(Leader* leader, int placeholder) {
	 return Old_Leader__queued_units(leader, placeholder);
 }

 void __fastcall Leader__verify_spell_flags(Leader* leader, int placeholder) {
	 Old_Leader__verify_spell_flags(leader, placeholder);
 }

 void __fastcall Leader__gather(Leader* leader, int placeholder) {
	 Old_Leader__gather(leader, placeholder);
 }

 void __fastcall Leader__do_gather(Leader* leader, int placeholder) {
	 Old_Leader__do_gather(leader, placeholder);
 }

 void __fastcall Leader__calc_resource_caps(Leader* leader, int placeholder) {
	 Old_Leader__calc_resource_caps(leader, placeholder);
 }

 void __fastcall Leader__calc_support(Leader* leader, int placeholder, int* support) {
	 Old_Leader__calc_support(leader, placeholder, support);
 }

 void __fastcall Leader__calc_gather(Leader* leader, int placeholder, int* resources) {
	 Old_Leader__calc_gather(leader, placeholder, resources);
 }

 void __fastcall Leader__calc_wall_stats(Leader* leader, int placeholder) {
	 Old_Leader__calc_wall_stats(leader, placeholder);
 }

 void __fastcall Leader__calc_unit_stats(Leader* leader, int placeholder) {
	 Old_Leader__calc_unit_stats(leader, placeholder);
 }

 void __fastcall Leader__action_buy(Leader* leader, int placeholder, int good, char flags) {
	 Old_Leader__action_buy(leader, placeholder, good, flags);
 }

 void __fastcall Leader__action_sell(Leader* leader, int placeholder, int good, char flags) {
	 Old_Leader__action_sell(leader, placeholder, good, flags);
 }

 void __fastcall Leader__tell_embargo(Leader* leader, int placeholder) {
	 Old_Leader__tell_embargo(leader, placeholder);
 }

 int __fastcall Leader__do_buy(Leader* leader, int placeholder, int good) {
	 return Old_Leader__do_buy(leader, placeholder, good);
 }

 int __fastcall Leader__do_sell(Leader* leader, int placeholder, int good) {
	 return Old_Leader__do_sell(leader, placeholder, good);
 }

 void __fastcall Leader__random_personality(Leader* leader, int placeholder) {
	 Old_Leader__random_personality(leader, placeholder);
 }

 void __fastcall Leader__ally_diplo(Leader* leader, int placeholder, int whom, Armies* treaty) {
	 Old_Leader__ally_diplo(leader, placeholder, whom, treaty);
 }

 void __fastcall Leader__eject_my_shit_from_his_ass(Leader* leader, int placeholder, int whom) {
	 Old_Leader__eject_my_shit_from_his_ass(leader, placeholder, whom);
 }

 int __fastcall Leader__has_agenda(Leader* leader, int placeholder, int whom, int agenda) {
	 return Old_Leader__has_agenda(leader, placeholder, whom, agenda);
 }

 void __fastcall Leader__agenda_off(Leader* leader, int placeholder, int whom, int agenda) {
	 Old_Leader__agenda_off(leader, placeholder, whom, agenda);
 }

 void __fastcall Leader__treaty_off(Leader* leader, int placeholder, int whom, int treaty) {
	 Old_Leader__treaty_off(leader, placeholder, whom, treaty);
 }

 void __fastcall Leader__action_reject(Leader* leader, int placeholder, int whom) {
	 Old_Leader__action_reject(leader, placeholder, whom);
 }

 void __fastcall Leader__action_agree(Leader* leader, int placeholder, int whom) {
	 Old_Leader__action_agree(leader, placeholder, whom);
 }

 void __fastcall Leader__action_respond(Leader* leader, int placeholder, int whom, int value) {
	 Old_Leader__action_respond(leader, placeholder, whom, value);
 }

 void __fastcall Leader__consider_tribute(Leader* leader, int placeholder, int whom, int value, int good) {
	 Old_Leader__consider_tribute(leader, placeholder, whom, value, good);
 }

 void __fastcall Leader__notify_deal(Leader* leader, int placeholder, int whom, int treaty) {
	 Old_Leader__notify_deal(leader, placeholder, whom, treaty);
 }

 void __fastcall Leader__action_attack(Leader* leader, int placeholder, int whom, int whose, int onoff) {
	 Old_Leader__action_attack(leader, placeholder, whom, whose, onoff);
 }

 void __fastcall Leader__action_treaty(Leader* leader, int placeholder, int whom, int treaty) {
	 Old_Leader__action_treaty(leader, placeholder, whom, treaty);
 }

 void __fastcall Leader__action_clear_all(Leader* leader, int placeholder, int whom) {
	 Old_Leader__action_clear_all(leader, placeholder, whom);
 }

 void __fastcall Leader__action_clear_tributes(Leader* leader, int placeholder, int whom) {
	 Old_Leader__action_clear_tributes(leader, placeholder, whom);
 }

 void __fastcall Leader__action_demand_tribute(Leader* leader, int placeholder, int whom, int good, int amount) {
	 Old_Leader__action_demand_tribute(leader, placeholder, whom, good, amount);
 }

 void __fastcall Leader__action_offer(Leader* leader, int placeholder, int whom, int good, int amount) {
	 Old_Leader__action_offer(leader, placeholder, whom, good, amount);
 }

 void __fastcall Leader__action_spline(Leader* leader, int placeholder, SoundGlobal* packet, int whom) {
	 Old_Leader__action_spline(leader, placeholder, packet, whom);
 }

 void __fastcall Leader__action_ping(Leader* leader, int placeholder, Coord x, Coord y, int whom) {
	 Old_Leader__action_ping(leader, placeholder, x, y, whom);
 }

 void __fastcall Leader__clear_agree(Leader* leader, int placeholder, int whom) {
	 Old_Leader__clear_agree(leader, placeholder, whom);
 }

 void __fastcall Leader__recapture_capital(Leader* leader, int placeholder) {
	 Old_Leader__recapture_capital(leader, placeholder);
 }

 void __fastcall Leader__defeat_by(Leader* leader, int placeholder, int whom, int defeat_type) {
	 Old_Leader__defeat_by(leader, placeholder, whom, defeat_type);
 }

 void __fastcall Leader__blow_up_units(Leader* leader, int placeholder, int whom) {
	 Old_Leader__blow_up_units(leader, placeholder, whom);
 }

 void __fastcall Leader__blow_up_buildings(Leader* leader, int placeholder) {
	 Old_Leader__blow_up_buildings(leader, placeholder);
 }

 void __fastcall Leader__blow_up_towers(Leader* leader, int placeholder, int whom) {
	 Old_Leader__blow_up_towers(leader, placeholder, whom);
 }

 void __fastcall Leader__set_diff(Leader* leader, int placeholder, int diff) {
	 Old_Leader__set_diff(leader, placeholder, diff);
 }

 void __fastcall Leader__fix_tech_flags(Leader* leader, int placeholder) {
	 Old_Leader__fix_tech_flags(leader, placeholder);
 }

 void __fastcall Leader__set_age(Leader* leader, int placeholder, int newage) {
	 Old_Leader__set_age(leader, placeholder, newage);
 }

 void __fastcall Leader__set_epoch(Leader* leader, int placeholder, int cat, int newepoch) {
	 Old_Leader__set_epoch(leader, placeholder, cat, newepoch);
 }

 void __fastcall Leader__lose_tech(Leader* leader, int placeholder, TypeIndex t) {
	 Old_Leader__lose_tech(leader, placeholder, t);
 }

 int __fastcall Leader__pay_dow(Leader* leader, int placeholder, int whom, int treaty) {
	 return Old_Leader__pay_dow(leader, placeholder, whom, treaty);
 }

 void __fastcall Leader__Leader(Leader* leader, int placeholder, int a2) {
	 Old_Leader__Leader(leader, placeholder, a2);
 }

 void __fastcall LeaderOut__issue_chat(LeaderOut* leaderOut, int placeholder, String* string, int flags) {
	 Old_LeaderOut__issue_chat(leaderOut, placeholder, string, flags);
 }

 void __fastcall LeaderOut__issue_ping(LeaderOut* leaderOut, int placeholder, Coord x, Coord y) {
	 Old_LeaderOut__issue_ping(leaderOut, placeholder, x, y);
 }

 void __fastcall LeaderOut__display_chat(LeaderOut* leaderOut, int placeholder, const String* string, int play2, int prepend_sender_name, int play_sound) {
	 Old_LeaderOut__display_chat(leaderOut, placeholder, string, play2, prepend_sender_name, play_sound);
 }

 void __fastcall LeaderOut__say_meet(LeaderOut* leaderOut, int placeholder, int whom, Coord x, Coord y) {
	 Old_LeaderOut__say_meet(leaderOut, placeholder, whom, x, y);
 }

 void __fastcall LeaderOut__warn_resources(LeaderOut* leaderOut, int placeholder, int t, int whom, String* city, int good) {
	 Old_LeaderOut__warn_resources(leaderOut, placeholder, t, whom, city, good);
 }

 void __fastcall LeaderOut__issue_sell(LeaderOut* leaderOut, int placeholder, int good, int flags) {
	 Old_LeaderOut__issue_sell(leaderOut, placeholder, good, flags);
 }

 void __fastcall LeaderOut__issue_buy(LeaderOut* leaderOut, int placeholder, int good, int flags) {
	 Old_LeaderOut__issue_buy(leaderOut, placeholder, good, flags);
 }

 void __fastcall LeaderOut__issue_propose_attack(LeaderOut* leaderOut, int placeholder, int whom, int whose, int onoff) {
	 Old_LeaderOut__issue_propose_attack(leaderOut, placeholder, whom, whose, onoff);
 }

 void __fastcall LeaderOut__issue_demand_tribute(LeaderOut* leaderOut, int placeholder, int whom, int good, int amount) {
	 Old_LeaderOut__issue_demand_tribute(leaderOut, placeholder, whom, good, amount);
 }

 void __fastcall LeaderOut__issue_tribute(LeaderOut* leaderOut, int placeholder, int whom, int good, int amount) {
	 Old_LeaderOut__issue_tribute(leaderOut, placeholder, whom, good, amount);
 }

 void __fastcall LeaderOut__issue_reject(LeaderOut* leaderOut, int placeholder, int whom) {
	 Old_LeaderOut__issue_reject(leaderOut, placeholder, whom);
 }

 void __fastcall LeaderOut__issue_accept(LeaderOut* leaderOut, int placeholder, int whom) {
	 Old_LeaderOut__issue_accept(leaderOut, placeholder, whom);
 }

 void __fastcall LeaderOut__issue_clear_all(LeaderOut* leaderOut, int placeholder, int whom) {
	 Old_LeaderOut__issue_clear_all(leaderOut, placeholder, whom);
 }

 void __fastcall LeaderOut__issue_clear_tributes(LeaderOut* leaderOut, int placeholder, int whom) {
	 Old_LeaderOut__issue_clear_tributes(leaderOut, placeholder, whom);
 }

 void __fastcall LeaderOut__issue_declare(LeaderOut* leaderOut, int placeholder, int whom, int treaty) {
	 Old_LeaderOut__issue_declare(leaderOut, placeholder, whom, treaty);
 }

 void __fastcall LeaderOut__issue_treaty(LeaderOut* leaderOut, int placeholder, int whom, int treaty) {
	 Old_LeaderOut__issue_treaty(leaderOut, placeholder, whom, treaty);
 }

 void __fastcall LeaderData__strong_vs(LeaderData* leaderData, int placeholder, String* string, int t) {
	 Old_LeaderData__strong_vs(leaderData, placeholder, string, t);
 }

 void __fastcall LeaderData__weak_vs(LeaderData* leaderData, int placeholder, String* string, int t) {
	 Old_LeaderData__weak_vs(leaderData, placeholder, string, t);
 }

 int __fastcall LeaderData__counter_unit(LeaderData* leaderData, int placeholder, int t, int* alt_t) {
	 return Old_LeaderData__counter_unit(leaderData, placeholder, t, alt_t);
 }

 int __fastcall LeaderData__care_if_cost_discovered(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__care_if_cost_discovered(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__locked_transport(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__locked_transport(leaderData, placeholder);
 }

 int __fastcall LeaderData__scale_tribute(LeaderData* leaderData, int placeholder, int amount) {
	 return Old_LeaderData__scale_tribute(leaderData, placeholder, amount);
 }

 int __fastcall LeaderData__get_nuke_embargo(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_nuke_embargo(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_my_nuke_embargo(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_my_nuke_embargo(leaderData, placeholder);
 }

 BOOL __fastcall LeaderData__can_nuke(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__can_nuke(leaderData, placeholder);
 }

 BOOL __fastcall LeaderData__can_buy_sell(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__can_buy_sell(leaderData, placeholder);
 }

 int __fastcall LeaderData__has_market(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__has_market(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_reg_buildings(LeaderData* leaderData, int placeholder, int reg, int t2) {
	 return Old_LeaderData__get_reg_buildings(leaderData, placeholder, reg, t2);
 }

 BOOL __fastcall LeaderData__has_capital(LeaderData* leaderData, int placeholder, int* whose) {
	 return Old_LeaderData__has_capital(leaderData, placeholder, whose);
 }

 void __fastcall LeaderData__calc_city_resources(LeaderData* leaderData, int placeholder, int* resources, int* bonus, Coord x, Coord y, int city) {
	 Old_LeaderData__calc_city_resources(leaderData, placeholder, resources, bonus, x, y, city);
 }

 int __fastcall LeaderData__any_proposals(LeaderData* leaderData, int placeholder, int whom) {
	 return Old_LeaderData__any_proposals(leaderData, placeholder, whom);
 }

 BOOL __fastcall LeaderData__is_reject(LeaderData* leaderData, int placeholder, int whom) {
	 return Old_LeaderData__is_reject(leaderData, placeholder, whom);
 }

 int __fastcall LeaderData__is_any_offer(LeaderData* leaderData, int placeholder, int whom) {
	 return Old_LeaderData__is_any_offer(leaderData, placeholder, whom);
 }

 BOOL __fastcall LeaderData__is_agree(LeaderData* leaderData, int placeholder, int whom) {
	 return Old_LeaderData__is_agree(leaderData, placeholder, whom);
 }

 int __fastcall LeaderData__is_tribute_period(LeaderData* leaderData, int placeholder, int whom) {
	 return Old_LeaderData__is_tribute_period(leaderData, placeholder, whom);
 }

 int __fastcall LeaderData__afford_dow(LeaderData* leaderData, int placeholder, int whom, int treaty, int* which) {
	 return Old_LeaderData__afford_dow(leaderData, placeholder, whom, treaty, which);
 }

 int __fastcall LeaderData__get_mvp_score(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_mvp_score(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_enemy_unbuilt_wonder_value(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_enemy_unbuilt_wonder_value(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_unbuilt_wonder_value(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_unbuilt_wonder_value(leaderData, placeholder);
 }

 BOOL __fastcall LeaderData__can_see_borders(LeaderData* leaderData, int placeholder, int whom, int for_minimap) {
	 return Old_LeaderData__can_see_borders(leaderData, placeholder, whom, for_minimap);
 }

 int __fastcall LeaderData__get_total_cities(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_total_cities(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_city_limit(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_city_limit(leaderData, placeholder);
 }

 int __fastcall LeaderData__is_boomer(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__is_boomer(leaderData, placeholder);
 }

 int __fastcall LeaderData__is_rusher(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__is_rusher(leaderData, placeholder);
 }

 int __fastcall LeaderData__num_allies(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__num_allies(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_team_terr(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_team_terr(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_team_economic(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_team_economic(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_economic(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_economic(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_team_score(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_team_score(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_mod_resource_cap(LeaderData* leaderData, int placeholder, int good) {
	 return Old_LeaderData__get_mod_resource_cap(leaderData, placeholder, good);
 }

 void __fastcall LeaderData__get_econ_mod(LeaderData* leaderData, int placeholder) {
	 Old_LeaderData__get_econ_mod(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_gather_handicap(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_gather_handicap(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_handicap_level(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_handicap_level(leaderData, placeholder);
 }

 void __fastcall LeaderData__walk_data(LeaderData* leaderData, int placeholder, DataWalk* walk) {
	 Old_LeaderData__walk_data(leaderData, placeholder, walk);
 }

 int __fastcall LeaderData__get_govs_taken(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_govs_taken(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_gov(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_gov(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_key_type(LeaderData* leaderData, int placeholder, int opt, TypeIndex t) {
	 return Old_LeaderData__get_key_type(leaderData, placeholder, opt, t);
 }

 int __fastcall LeaderData__get_city_upgrade_level(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__get_city_upgrade_level(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__get_merchants_level(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_merchants_level(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_taxation(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_taxation(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_fishermen(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_fishermen(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_lowest_epoch(LeaderData* leaderData, int placeholder, int* which) {
	 return Old_LeaderData__get_lowest_epoch(leaderData, placeholder, which);
 }

 int __fastcall LeaderData__get_highest_epoch(LeaderData* leaderData, int placeholder, int* which) {
	 return Old_LeaderData__get_highest_epoch(leaderData, placeholder, which);
 }

 int __fastcall LeaderData__compute_epoch(LeaderData* leaderData, int placeholder, int tech_cat) {
	 return Old_LeaderData__compute_epoch(leaderData, placeholder, tech_cat);
 }

 int __fastcall LeaderData__get_epoch_base(LeaderData* leaderData, int placeholder, int tech_cat) {
	 return Old_LeaderData__get_epoch_base(leaderData, placeholder, tech_cat);
 }

 int __fastcall LeaderData__special_preq(LeaderData* leaderData, int placeholder, int t, int* t3) {
	 return Old_LeaderData__special_preq(leaderData, placeholder, t, t3);
 }

 int __fastcall LeaderData__techs_per_age(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__techs_per_age(leaderData, placeholder, t);
 }

 unsigned int __fastcall LeaderData__starting_age(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__starting_age(leaderData, placeholder);
 }

 int __fastcall LeaderData__all_techs(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__all_techs(leaderData, placeholder);
 }

 void __fastcall LeaderData__LeaderData(LeaderData* leaderData, int placeholder) {
	 Old_LeaderData__LeaderData(leaderData, placeholder);
 }

 BOOL __fastcall LeaderData__has_rare_conquest(LeaderData* leaderData, int placeholder, int good) {
	 return Old_LeaderData__has_rare_conquest(leaderData, placeholder, good);
 }

 int __fastcall LeaderData__is_shared_team(LeaderData* leaderData, int placeholder, int whom) {
	 return Old_LeaderData__is_shared_team(leaderData, placeholder, whom);
 }

 int __fastcall LeaderData__tribe_can_type(LeaderData* leaderData, int placeholder, const Type* p) {
	 return Old_LeaderData__tribe_can_type(leaderData, placeholder, p);
 }

 void __fastcall LeaderDataEncrypt__log_data(LeaderDataEncrypt* leaderDataEncrypt, int placeholder, Log* log) {
	 Old_LeaderDataEncrypt__log_data(leaderDataEncrypt, placeholder, log);
 }

 void __fastcall LeaderDataEncrypt__init(LeaderDataEncrypt* leaderDataEncrypt, int placeholder) {
	 Old_LeaderDataEncrypt__init(leaderDataEncrypt, placeholder);
 }

 void __fastcall Leader__new_rare(Leader* leader, int placeholder, int ox) {
	 Old_Leader__new_rare(leader, placeholder, ox);
 }

 int __fastcall LeaderData__get_fort_borders(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_fort_borders(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_target(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_target(leaderData, placeholder);
 }

 int __fastcall Leader__tech_avail(Leader* leader, int placeholder, TypeIndex t, int o) {
	 return Old_Leader__tech_avail(leader, placeholder, t, o);
 }

 int __fastcall LeaderData__get_support_count(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__get_support_count(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__get_unbuilt_wonders(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_unbuilt_wonders(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_team_wonders(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_team_wonders(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_team_unbuilt_wonders(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_team_unbuilt_wonders(leaderData, placeholder);
 }

 int __fastcall LeaderData__has_unbuilt_wonder(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__has_unbuilt_wonder(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__team_has_unbuilt_wonder(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__team_has_unbuilt_wonder(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__cost_factor_dow(LeaderData* leaderData, int placeholder, int whom, int t) {
	 return Old_LeaderData__cost_factor_dow(leaderData, placeholder, whom, t);
 }

 int __fastcall LeaderData__calc_science_discount(LeaderData* leaderData, int placeholder, unsigned __int32 t, int cost) {
	 return Old_LeaderData__calc_science_discount(leaderData, placeholder, t, cost);
 }

 int __fastcall LeaderData__get_handicap(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_handicap(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_ships_speed_upgrade(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_ships_speed_upgrade(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_troops_speed_upgrade(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_troops_speed_upgrade(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_vehicle_speed_upgrade(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_vehicle_speed_upgrade(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_enemy_wonder_value(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_enemy_wonder_value(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_team_wonder_value(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_team_wonder_value(leaderData, placeholder);
 }

 void __fastcall Leader__inc_hit_event(Leader* leader, int placeholder, __int16 num) {
	 Old_Leader__inc_hit_event(leader, placeholder, num);
 }

 void __fastcall Leader__inc_damage_event(Leader* leader, int placeholder, __int16 num) {
	 Old_Leader__inc_damage_event(leader, placeholder, num);
 }

 const String* __fastcall LeaderData__get_name(LeaderData* leaderData, int placeholder, String* result) {
	 return Old_LeaderData__get_name(leaderData, placeholder, result);
 }

 void __fastcall Leader__inc_kill_event(Leader* leader, int placeholder, __int16 num) {
	 Old_Leader__inc_kill_event(leader, placeholder, num);
 }

 void __fastcall Leader__inc_death_event(Leader* leader, int placeholder, __int16 num) {
	 Old_Leader__inc_death_event(leader, placeholder, num);
 }

 int __fastcall Leader__action_declare(Leader* leader, int placeholder, int which, int* treaty, int free, Leaders* force) {
	 return Old_Leader__action_declare(leader, placeholder, which, treaty, free, force);
 }

 int __fastcall LeaderData__get_building_speed_upgrade(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_building_speed_upgrade(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_building_hp_upgrade(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_building_hp_upgrade(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_fort_los(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_fort_los(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_tower_fort_los(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_tower_fort_los(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_fort_range(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_fort_range(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_tower_fort_range(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_tower_fort_range(leaderData, placeholder);
 }

 void __fastcall LeaderData__calc_resource_bonuses(LeaderData* leaderData, int placeholder, int* resources) {
	 Old_LeaderData__calc_resource_bonuses(leaderData, placeholder, resources);
 }

 int __fastcall LeaderData__get_university(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_university(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_farm_limit(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_farm_limit(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_fort_garrison(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_fort_garrison(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_granary(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_granary(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_lumbermill(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_lumbermill(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_smelter(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_smelter(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_temple_borders(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_temple_borders(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_temple_hp(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_temple_hp(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_temple_range(LeaderData* leaderData, int placeholder, int check_tikal) {
	 return Old_LeaderData__get_temple_range(leaderData, placeholder, check_tikal);
 }

 int __fastcall LeaderData__researching(LeaderData* leaderData, int placeholder, int t, int ox) {
	 return Old_LeaderData__researching(leaderData, placeholder, t, ox);
 }

 int __fastcall LeaderData__get_wonders(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_wonders(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_first_library(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_first_library(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_radius(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__get_radius(leaderData, placeholder, t);
 }

 BOOL __fastcall LeaderData__has_preq(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__has_preq(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__check_predecessor(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__check_predecessor(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__type_eligible(LeaderData* leaderData, int placeholder, signed __int32 t, int check_obs) {
	 return Old_LeaderData__type_eligible(leaderData, placeholder, t, check_obs);
 }

 void __fastcall LeaderData__calc_market_prices(LeaderData* leaderData, int placeholder, int good, int* buy, int* sell) {
	 Old_LeaderData__calc_market_prices(leaderData, placeholder, good, buy, sell);
 }



 void __fastcall Leader__lost_a_city(Leader* leader, int placeholder, int capital, int mine, int whom) {
	 Old_Leader__lost_a_city(leader, placeholder, capital, mine, whom);
 }

 void __fastcall Leader__lost_capital(Leader* leader, int placeholder, int whom) {
	 Old_Leader__lost_capital(leader, placeholder, whom);
 }

 void __fastcall Leader__lose_building(Leader* leader, int placeholder, TypeIndex t) {
	 Old_Leader__lose_building(leader, placeholder, t);
 }

 int __fastcall LeaderData__get_caravan_limit(LeaderData* leaderData, int placeholder, int routes) {
	 return Old_LeaderData__get_caravan_limit(leaderData, placeholder, routes);
 }

 int __fastcall LeaderData__get_gov_hero(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__get_gov_hero(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__get_buildings(LeaderData* leaderData, int placeholder, int t2, int strict) {
	 return Old_LeaderData__get_buildings(leaderData, placeholder, t2, strict);
 }

 void __fastcall Leader__gain_building(Leader* leader, int placeholder, TypeIndex t) {
	 Old_Leader__gain_building(leader, placeholder, t);
 }

 int __fastcall LeaderData__get_building_cities(LeaderData* leaderData, int placeholder, int t2, int check_assimilated) {
	 return Old_LeaderData__get_building_cities(leaderData, placeholder, t2, check_assimilated);
 }

 int __fastcall LeaderData__get_decoy_time(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_decoy_time(leaderData, placeholder);
 }

 BOOL __fastcall LeaderData__has_rare(LeaderData* leaderData, int placeholder, int good) {
	 return Old_LeaderData__has_rare(leaderData, placeholder, good);
 }

 int __fastcall LeaderData__get_units(LeaderData* leaderData, int placeholder, int t2, int strict) {
	 return Old_LeaderData__get_units(leaderData, placeholder, t2, strict);
 }

 int __fastcall LeaderData__get_general_upgrade(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_general_upgrade(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_supply_upgrade(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_supply_upgrade(leaderData, placeholder);
 }

 void __fastcall LeaderData__calc_rare(LeaderData* leaderData, int placeholder, int good, int* resources, int friendly) {
	 Old_LeaderData__calc_rare(leaderData, placeholder, good, resources, friendly);
 }

 int __fastcall LeaderData__get_attrition(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_attrition(leaderData, placeholder);
 }

 void __fastcall LeaderData__get_anti_attrition(LeaderData* leaderData, int placeholder) {
	 Old_LeaderData__get_anti_attrition(leaderData, placeholder);
 }

 BOOL __fastcall LeaderData__has_bonus(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__has_bonus(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__has_spell(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__has_spell(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__can_transport(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__can_transport(leaderData, placeholder);
 }

 BOOL __fastcall LeaderData__has_tech(LeaderData* leaderData, int placeholder, TypeIndex t) {
	 return Old_LeaderData__has_tech(leaderData, placeholder, t);
 }

 BOOL __fastcall LeaderData__at_city_limit(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__at_city_limit(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_queued(LeaderData* leaderData, int placeholder, int t2, int strict) {
	 return Old_LeaderData__get_queued(leaderData, placeholder, t2, strict);
 }

 void __fastcall Leader__track_unit_type(Leader* leader, int placeholder, int t, int delta, int o) {
	 Old_Leader__track_unit_type(leader, placeholder, t, delta, o);
 }

 int __fastcall LeaderData__is_coop(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__is_coop(leaderData, placeholder);
 }

 void __fastcall Leader__track_queued(Leader* leader, int placeholder, int t, int delta) {
	 Old_Leader__track_queued(leader, placeholder, t, delta);
 }

 int __fastcall LeaderData__has_general(LeaderData* leaderData, int placeholder, Coord x, Coord y, int unit_mask, int t, int dist_mod) {
	 return Old_LeaderData__has_general(leaderData, placeholder, x, y, unit_mask, t, dist_mod);
 }

 int __fastcall LeaderData__get_spy_upgrade(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_spy_upgrade(leaderData, placeholder);
 }

 BOOL __fastcall LeaderData__has_upgrade(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__has_upgrade(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__get_troops_los_upgrade(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_troops_los_upgrade(leaderData, placeholder);
 }

 int __fastcall LeaderData__has_conquest_bonus(LeaderData* leaderData, int placeholder, int type) {
	 return Old_LeaderData__has_conquest_bonus(leaderData, placeholder, type);
 }

 void __fastcall Leader__treaty_on(Leader* leader, int placeholder, int whom, int treaty) {
	 Old_Leader__treaty_on(leader, placeholder, whom, treaty);
 }

 void __fastcall Leader__agenda_on(Leader* leader, int placeholder, int whom, int agenda) {
	 Old_Leader__agenda_on(leader, placeholder, whom, agenda);
 }

 int __fastcall LeaderData__has_treaty(LeaderData* leaderData, int placeholder, int whom, int treaty) {
	 return Old_LeaderData__has_treaty(leaderData, placeholder, whom, treaty);
 }

 BOOL __fastcall LeaderData__is_peace(LeaderData* leaderData, int placeholder, int whom) {
	 return Old_LeaderData__is_peace(leaderData, placeholder, whom);
 }

 void __fastcall Leader__meet(Leader* leader, int placeholder, int whom, Coord x, Coord y) {
	 Old_Leader__meet(leader, placeholder, whom, x, y);
 }

 BOOL __fastcall LeaderData__is_target(LeaderData* leaderData, int placeholder, int whom) {
	 return Old_LeaderData__is_target(leaderData, placeholder, whom);
 }

 int __fastcall LeaderData__get_heal_level(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_heal_level(leaderData, placeholder);
 }

 BOOL __fastcall LeaderData__check_population(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__check_population(leaderData, placeholder, t);
 }

 BOOL __fastcall LeaderData__has_tribe_bonus(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__has_tribe_bonus(leaderData, placeholder, t);
 }

 int __fastcall Leader__produce_building(Leader* leader, int placeholder, int cyy, int o, int use_escrow) {
	 return Old_Leader__produce_building(leader, placeholder, cyy, o, use_escrow);
 }

 int __fastcall LeaderData__get_graft(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__get_graft(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__current_upgrade(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__current_upgrade(leaderData, placeholder, t);
 }

 void __fastcall Leader__reset_obs_flags(Leader* leader, int placeholder) {
	 Old_Leader__reset_obs_flags(leader, placeholder);
 }

 int __fastcall LeaderData__type_avail(LeaderData* leaderData, int placeholder, int city2, int whom) {
	 return Old_LeaderData__type_avail(leaderData, placeholder, city2, whom);
 }

 void __fastcall Leader__reset_score(Leader* leader, int placeholder) {
	 Old_Leader__reset_score(leader, placeholder);
 }

 void __fastcall Leaders__walk_data(Leaders* leaders, int placeholder, DataWalk* walk) {
	 Old_Leaders__walk_data(leaders, placeholder, walk);
 }

 int __fastcall Leader__init(Leader* leader, int placeholder, int who, int tribe, unsigned __int8 color_index) {
	 return Old_Leader__init(leader, placeholder, who, tribe, color_index);
 }

 void __fastcall LeaderData__log_data(LeaderData* leaderData, int placeholder, Log* log) {
	 Old_LeaderData__log_data(leaderData, placeholder, log);
 }

 void __fastcall LeaderData__find_capital(LeaderData* leaderData, int placeholder, int* cit, int* whose, int not_city, int not_who) {
	 Old_LeaderData__find_capital(leaderData, placeholder, cit, whose, not_city, not_who);
 }

 int __fastcall LeaderData__get_diplo(LeaderData* leaderData, int placeholder, int whom) {
	 return Old_LeaderData__get_diplo(leaderData, placeholder, whom);
 }

 BOOL __fastcall LeaderData__is_enemy(LeaderData* leaderData, int placeholder, int whom) {
	 return Old_LeaderData__is_enemy(leaderData, placeholder, whom);
 }

 bool __fastcall LeaderData__is_neutral(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__is_neutral(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_wonder_net(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_wonder_net(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_wonder_value(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_wonder_value(leaderData, placeholder);
 }

 int __fastcall LeaderData__has_wonder(LeaderData* leaderData, int placeholder, int t) {
	 return Old_LeaderData__has_wonder(leaderData, placeholder, t);
 }

 int __fastcall LeaderData__get_nukes(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_nukes(leaderData, placeholder);
 }

 String* __fastcall LeaderData__say_full_name(LeaderData* leaderData, int placeholder, String* result) {
	 return Old_LeaderData__say_full_name(leaderData, placeholder, result);
 }

 int __fastcall LeaderData__num_team_members(LeaderData* leaderData, int placeholder, int strict) {
	 return Old_LeaderData__num_team_members(leaderData, placeholder, strict);
 }

 int __fastcall LeaderData__get_diff(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_diff(leaderData, placeholder);
 }

 int __fastcall LeaderData__get_team(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_team(leaderData, placeholder);
 }


 int __fastcall LeaderData__any_humans(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__any_humans(leaderData, placeholder);
 }

 int __fastcall LeaderData__is_human(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__is_human(leaderData, placeholder);
 }

 void __fastcall Leader__chat_to_local(Leader* leader, int placeholder, String* string, int whom, int prepend_sender_name, int play_sound) {
	 Old_Leader__chat_to_local(leader, placeholder, string, whom, prepend_sender_name, play_sound);
 }

 void __fastcall Leader__compute_score(Leader* leader, int placeholder, int force) {
	 Old_Leader__compute_score(leader, placeholder, force);
 }

 void __fastcall Leader__set_diplo(Leader* leader, int placeholder, int whom, Armies* diplo) {
	 Old_Leader__set_diplo(leader, placeholder, whom, diplo);
 }

 void __fastcall Leader__victory(Leader* leader, int placeholder, int victory_type, int instant_victory) {
	 Old_Leader__victory(leader, placeholder, victory_type, instant_victory);
 }

 void __fastcall Leaders__end_process_all(Leaders* leaders, int placeholder) {
	 Old_Leaders__end_process_all(leaders, placeholder);
 }

 void __fastcall Leaders__process_all(Leaders* leaders, int placeholder) {
	 Old_Leaders__process_all(leaders, placeholder);
 }

 void __fastcall Leaders__clear(Leaders* leaders, int placeholder) {
	 Old_Leaders__clear(leaders, placeholder);
 }

 int __fastcall Leaders__init(Leaders* leaders, int placeholder) {
	 return Old_Leaders__init(leaders, placeholder);
 }

 void __fastcall Leaders__Leaders(Leaders* leaders, int placeholder) {
	 Old_Leaders__Leaders(leaders, placeholder);
 }

 void __fastcall LeaderData__DeleteLeaderData(LeaderData* leaderData, int placeholder) {
	 Old_LeaderData__DeleteLeaderData(leaderData, placeholder);
 }



 void __fastcall LeaderOptions__log_data(LeaderOptions* leaderOptions, int placeholder, Log* log) {
	 Old_LeaderOptions__log_data(leaderOptions, placeholder, log);
 }

 void __fastcall LeaderOptionData__log_data(LeaderOptionData* leaderOptionData, int placeholder, Log* log) {
	 Old_LeaderOptionData__log_data(leaderOptionData, placeholder, log);
 }

 void __fastcall LeaderOptionData__walk_data(LeaderOptionData* leaderOptionData, int placeholder, DataWalk* walk) {
	 Old_LeaderOptionData__walk_data(leaderOptionData, placeholder, walk);
 }

 void __fastcall LeaderOption__close(LeaderOption* leaderOption, int placeholder, int who) {
	 Old_LeaderOption__close(leaderOption, placeholder, who);
 }

 void __fastcall LeaderOptions__walk_data(LeaderOptions* leaderOptions, int placeholder, DataWalk* walk) {
	 Old_LeaderOptions__walk_data(leaderOptions, placeholder, walk);
 }

 void __fastcall LeaderOptionOut__update(LeaderOptionOut* leaderOptionOut, int placeholder) {
	 Old_LeaderOptionOut__update(leaderOptionOut, placeholder);
 }

 void __fastcall LeaderOption__synch_with_prefs(LeaderOption* leaderOption, int placeholder) {
	 Old_LeaderOption__synch_with_prefs(leaderOption, placeholder);
 }

 int __fastcall LeaderOption__init(LeaderOption* leaderOption, int placeholder, int who) {
	 return Old_LeaderOption__init(leaderOption, placeholder, who);
 }

 void __fastcall LeaderOptions__close(LeaderOptions* leaderOptions, int placeholder) {
	 Old_LeaderOptions__close(leaderOptions, placeholder);
 }

 int __fastcall LeaderOptions__init(LeaderOptions* leaderOptions, int placeholder) {
	 return Old_LeaderOptions__init(leaderOptions, placeholder);
 }

 void __fastcall LeaderOption__LeaderOption(LeaderOption* leaderOption, int placeholder) {
	 Old_LeaderOption__LeaderOption(leaderOption, placeholder);
 }

 void __fastcall LeaderOptions__LeaderOptions(LeaderOptions* leaderOptions, int placeholder) {
	 Old_LeaderOptions__LeaderOptions(leaderOptions, placeholder);
 }

