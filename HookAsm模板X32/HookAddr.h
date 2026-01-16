#pragma once
#include "Enums.h"

    extern void* LeaderData__is_teamAddr;
    extern int __fastcall LeaderData__is_team(LeaderData* leaderData, int placeholder, int whom, int strict);//0x2EBD30
    extern int(__fastcall* Old_LeaderData__is_team)(LeaderData* leaderData, int placeholder, int whom, int strict);

    extern void* Leader__DeleteLeaderAddr;
    extern void __fastcall Leader__DeleteLeader(Leader* leader, int placeholder);//0x2DE10
    extern void(__fastcall* Old_Leader__DeleteLeader)(Leader* leader, int placeholder);
    extern void* LeaderOut__DeleteLeaderOutAddr;
    extern void __fastcall LeaderOut__DeleteLeaderOut(LeaderOut* leaderOut, int placeholder);//0x2DE50
    extern void(__fastcall* Old_LeaderOut__DeleteLeaderOut)(LeaderOut* leaderOut, int placeholder);
    extern void* LeaderData__get_ageAddr;
    extern int __fastcall LeaderData__get_age(LeaderData* leaderData, int placeholder);//0x3ECD0
    extern int(__fastcall* Old_LeaderData__get_age)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__bucket_setAddr;
    extern void __fastcall LeaderData__bucket_set(LeaderData* leaderData, int placeholder, int good, int value);//0x3ECF0
    extern void(__fastcall* Old_LeaderData__bucket_set)(LeaderData* leaderData, int placeholder, int good, int value);
    extern void* LeaderData__bucket_addAddr;
    extern void __fastcall LeaderData__bucket_add(LeaderData* leaderData, int placeholder, int good, int value);//0x3ED10
    extern void(__fastcall* Old_LeaderData__bucket_add)(LeaderData* leaderData, int placeholder, int good, int value);
    extern void* LeaderData__income_getAddr;
    extern int __fastcall LeaderData__income_get(LeaderData* leaderData, int placeholder, int good);//0x6EE60
    extern int(__fastcall* Old_LeaderData__income_get)(LeaderData* leaderData, int placeholder, int good);
    extern void* LeaderData__resource_cap_getAddr;
    extern int __fastcall LeaderData__resource_cap_get(LeaderData* leaderData, int placeholder, int good);//0x6EE80
    extern int(__fastcall* Old_LeaderData__resource_cap_get)(LeaderData* leaderData, int placeholder, int good);
    extern void* LeaderData__get_epochAddr;
    extern int __fastcall LeaderData__get_epoch(LeaderData* leaderData, int placeholder, int tech_cat);//0x6F1E0
    extern int(__fastcall* Old_LeaderData__get_epoch)(LeaderData* leaderData, int placeholder, int tech_cat);
    extern void* LeaderData__bucket_getAddr;
    extern int __fastcall LeaderData__bucket_get(LeaderData* leaderData, int placeholder, int good);//0x6F200
    extern int(__fastcall* Old_LeaderData__bucket_get)(LeaderData* leaderData, int placeholder, int good);
    extern void* LeaderData__epochs_getAddr;
    extern int __fastcall LeaderData__epochs_get(LeaderData* leaderData, int placeholder);//0x70F10
    extern int(__fastcall* Old_LeaderData__epochs_get)(LeaderData* leaderData, int placeholder);
    extern void* Leader__gain_techAddr;
    extern void __fastcall Leader__gain_tech(Leader* leader, int placeholder, int t, Coord x, Coord y, int tell, int do_unit_upgrade);//0x2DCB60
    extern void(__fastcall* Old_Leader__gain_tech)(Leader* leader, int placeholder, int t, Coord x, Coord y, int tell, int do_unit_upgrade);
    extern void* LeaderData__support_getAddr;
    extern int __fastcall LeaderData__support_get(LeaderData* leaderData, int placeholder, int good);//0x7DA00
    extern int(__fastcall* Old_LeaderData__support_get)(LeaderData* leaderData, int placeholder, int good);
    extern void* LeaderData__resources_getAddr;
    extern int __fastcall LeaderData__resources_get(LeaderData* leaderData, int placeholder, int good);//0x7DA20
    extern int(__fastcall* Old_LeaderData__resources_get)(LeaderData* leaderData, int placeholder, int good);
    extern void* LeaderData__resource_cap_addAddr;
    extern void __fastcall LeaderData__resource_cap_add(LeaderData* leaderData, int placeholder, int good, int value);//0x7DA40
    extern void(__fastcall* Old_LeaderData__resource_cap_add)(LeaderData* leaderData, int placeholder, int good, int value);
    extern void* Leader__closeAddr;
    extern void __fastcall Leader__close(Leader* leader, int placeholder);//0x2B7F80
    extern void(__fastcall* Old_Leader__close)(Leader* leader, int placeholder);
    extern void* Leaders__best_human_age_stampAddr;
    extern int __fastcall Leaders__best_human_age_stamp(Leaders* leaders, int placeholder);//0x2B81E0
    extern int(__fastcall* Old_Leaders__best_human_age_stamp)(Leaders* leaders, int placeholder);
    extern void* Leaders__max_enemy_ageAddr;
    extern int __fastcall Leaders__max_enemy_age(Leaders* leaders, int placeholder, int whom);//0x2B8300
    extern int(__fastcall* Old_Leaders__max_enemy_age)(Leaders* leaders, int placeholder, int whom);
    extern void* Leaders__max_ageAddr;
    extern int __fastcall Leaders__max_age(Leaders* leaders, int placeholder);//0x2B8370
    extern int(__fastcall* Old_Leaders__max_age)(Leaders* leaders, int placeholder);
    extern void* Leaders__max_human_ageAddr;
    extern int __fastcall Leaders__max_human_age(Leaders* leaders, int placeholder);//0x2B8470
    extern int(__fastcall* Old_Leaders__max_human_age)(Leaders* leaders, int placeholder);
    extern void* Leaders__max_human_citiesAddr;
    extern int __fastcall Leaders__max_human_cities(Leaders* leaders, int placeholder);//0x2B8580
    extern int(__fastcall* Old_Leaders__max_human_cities)(Leaders* leaders, int placeholder);
    extern void* Leader__end_processAddr;
    extern void __fastcall Leader__end_process(Leader* leader, int placeholder);//0x2B8690
    extern void(__fastcall* Old_Leader__end_process)(Leader* leader, int placeholder);
    extern void* Leader__processAddr;
    extern void __fastcall Leader__process(Leader* leader, int placeholder);//0x2B88B0
    extern void(__fastcall* Old_Leader__process)(Leader* leader, int placeholder);
    extern void* Leader__process_eliminationAddr;
    extern void __fastcall Leader__process_elimination(Leader* leader, int placeholder);//0x2B8A20
    extern void(__fastcall* Old_Leader__process_elimination)(Leader* leader, int placeholder);
    extern void* Leader__receive_chatAddr;
    extern void __fastcall Leader__receive_chat(Leader* leader, int placeholder, String* string, int from_play, int prepend_sender_name, int play_sound);//0x2B8AB0
    extern void(__fastcall* Old_Leader__receive_chat)(Leader* leader, int placeholder, String* string, int from_play, int prepend_sender_name, int play_sound);
    extern void* Leader__process_tauntsAddr;
    extern void __fastcall Leader__process_taunts(Leader* leader, int placeholder);//0x2B8BA0
    extern void(__fastcall* Old_Leader__process_taunts)(Leader* leader, int placeholder);
    extern void* Leader__receive_tauntAddr;
    extern void __fastcall Leader__receive_taunt(Leader* leader, int placeholder, TauntRequest taunt, int play);//0x2B8BF0
    extern void(__fastcall* Old_Leader__receive_taunt)(Leader* leader, int placeholder, TauntRequest taunt, int play);
    extern void* Leader__process_tauntAddr;
    extern void __fastcall Leader__process_taunt(Leader* leader, int placeholder, int taunt, int whom);//0x2B8CC0
    extern void(__fastcall* Old_Leader__process_taunt)(Leader* leader, int placeholder, int taunt, int whom);
    extern void* Leader__receive_pingAddr;
    extern void __fastcall Leader__receive_ping(Leader* leader, int placeholder, Coord x, Coord y, unsigned __int8 whom, unsigned __int8 timer);//0x2B95F0
    extern void(__fastcall* Old_Leader__receive_ping)(Leader* leader, int placeholder, Coord x, Coord y, unsigned __int8 whom, unsigned __int8 timer);
    extern void* Leader__compute_pop_scoreAddr;
    extern void __fastcall Leader__compute_pop_score(Leader* leader, int placeholder);//0x2BC190
    extern void(__fastcall* Old_Leader__compute_pop_score)(Leader* leader, int placeholder);
    extern void* Leader__compute_unit_upgrades_scoreAddr;
    extern void __fastcall Leader__compute_unit_upgrades_score(Leader* leader, int placeholder);//0x2BC1A0
    extern void(__fastcall* Old_Leader__compute_unit_upgrades_score)(Leader* leader, int placeholder);
    extern void* Leader__compute_economy_scoreAddr;
    extern void __fastcall Leader__compute_economy_score(Leader* leader, int placeholder);//0x2BC270
    extern void(__fastcall* Old_Leader__compute_economy_score)(Leader* leader, int placeholder);
    extern void* Leader__compute_research_scoreAddr;
    extern void __fastcall Leader__compute_research_score(Leader* leader, int placeholder);//0x2BC360
    extern void(__fastcall* Old_Leader__compute_research_score)(Leader* leader, int placeholder);
    extern void* Leader__compute_build_scoreAddr;
    extern void __fastcall Leader__compute_build_score(Leader* leader, int placeholder);//0x2BC3F0
    extern void(__fastcall* Old_Leader__compute_build_score)(Leader* leader, int placeholder);
    extern void* Leader__compute_unit_scoreAddr;
    extern void __fastcall Leader__compute_unit_score(Leader* leader, int placeholder);//0x2BC500
    extern void(__fastcall* Old_Leader__compute_unit_score)(Leader* leader, int placeholder);
    extern void* Leader__compute_explore_scoreAddr;
    extern void __fastcall Leader__compute_explore_score(Leader* leader, int placeholder);//0x2BC5E0
    extern void(__fastcall* Old_Leader__compute_explore_score)(Leader* leader, int placeholder);
    extern void* Leader__check_transportAddr;
    extern void __fastcall Leader__check_transport(Leader* leader, int placeholder);//0x2BC5F0
    extern void(__fastcall* Old_Leader__check_transport)(Leader* leader, int placeholder);
    extern void* Leader__check_exploreAddr;
    extern void __fastcall Leader__check_explore(Leader* leader, int placeholder);//0x2BC860
    extern void(__fastcall* Old_Leader__check_explore)(Leader* leader, int placeholder);
    extern void* Leader__diplomacyAddr;
    extern void __fastcall Leader__diplomacy(Leader* leader, int placeholder);//0x2BC950
    extern void(__fastcall* Old_Leader__diplomacy)(Leader* leader, int placeholder);
    extern void* LeaderData__resource_valueAddr;
    extern int __fastcall LeaderData__resource_value(LeaderData* leaderData, int placeholder, int good);//0x2C18D0
    extern int(__fastcall* Old_LeaderData__resource_value)(LeaderData* leaderData, int placeholder, int good);
    extern void* Leader__create_buildingsAddr;
    extern void __fastcall Leader__create_buildings(Leader* leader, int placeholder);//0x2C1BE0
    extern void(__fastcall* Old_Leader__create_buildings)(Leader* leader, int placeholder);
    extern void* Leader__create_unitsAddr;
    extern void __fastcall Leader__create_units(Leader* leader, int placeholder);//0x2C40A0
    extern void(__fastcall* Old_Leader__create_units)(Leader* leader, int placeholder);
    extern void* Leader__upgrade_unitsAddr;
    extern void __fastcall Leader__upgrade_units(Leader* leader, int placeholder);//0x2C6430
    extern void(__fastcall* Old_Leader__upgrade_units)(Leader* leader, int placeholder);
    extern void* Leader__research_techsAddr;
    extern void __fastcall Leader__research_techs(Leader* leader, int placeholder);//0x2C6BA0
    extern void(__fastcall* Old_Leader__research_techs)(Leader* leader, int placeholder);
    extern void* Leader__found_citiesAddr;
    extern void __fastcall Leader__found_cities(Leader* leader, int placeholder);//0x2C7A60
    extern void(__fastcall* Old_Leader__found_cities)(Leader* leader, int placeholder);
    extern void* Leader__market_speculationAddr;
    extern void __fastcall Leader__market_speculation(Leader* leader, int placeholder);//0x2C8110
    extern void(__fastcall* Old_Leader__market_speculation)(Leader* leader, int placeholder);
    extern void* Leader__production_ai_setupAddr;
    extern void __fastcall Leader__production_ai_setup(Leader* leader, int placeholder);//0x2C83E0
    extern void(__fastcall* Old_Leader__production_ai_setup)(Leader* leader, int placeholder);
    extern void* Leader__make_stuffAddr;
    extern BOOL __fastcall Leader__make_stuff(Leader* leader, int placeholder);//0x2C8AF0
    extern BOOL(__fastcall* Old_Leader__make_stuff)(Leader* leader, int placeholder);
    extern void* Leader__use_marketAddr;
    extern void __fastcall Leader__use_market(Leader* leader, int placeholder);//0x2C91C0
    extern void(__fastcall* Old_Leader__use_market)(Leader* leader, int placeholder);
    extern void* Leader__make_thisAddr;
    extern int __fastcall Leader__make_this(Leader* leader, int placeholder, int cat);//0x2C94F0
    extern int(__fastcall* Old_Leader__make_this)(Leader* leader, int placeholder, int cat);
    extern void* Leader__say_payAddr;
    extern String* __fastcall Leader__say_pay(Leader* leader, int placeholder, String* result, int cat, int can);//0x2C9A10
    extern String* (__fastcall* Old_Leader__say_pay)(Leader* leader, int placeholder, String* result, int cat, int can);
    extern void* Leader__can_payAddr;
    extern BOOL __fastcall Leader__can_pay(Leader* leader, int placeholder, int cat);//0x2C9B90
    extern BOOL(__fastcall* Old_Leader__can_pay)(Leader* leader, int placeholder, int cat);
    extern void* Leader__check_orphaned_buildingsAddr;
    extern void __fastcall Leader__check_orphaned_buildings(Leader* leader, int placeholder);//0x2C9F20
    extern void(__fastcall* Old_Leader__check_orphaned_buildings)(Leader* leader, int placeholder);
    extern void* Leader__produce_spellAddr;
    extern int __fastcall Leader__produce_spell(Leader* leader, int placeholder, int t, int city2, Color* use_escrow);//0x2CA720
    extern int(__fastcall* Old_Leader__produce_spell)(Leader* leader, int placeholder, int t, int city2, Color* use_escrow);
    extern void* Leader__produce_techAddr;
    extern int __fastcall Leader__produce_tech(Leader* leader, int placeholder, int t, Color* use_escrow);//0x2CA980
    extern int(__fastcall* Old_Leader__produce_tech)(Leader* leader, int placeholder, int t, Color* use_escrow);
    extern void* Leader__produce_cityAddr;
    extern int __fastcall Leader__produce_city(Leader* leader, int placeholder, int t, WCoord wx, WCoord wy, int use_escrow);//0x2CB120
    extern int(__fastcall* Old_Leader__produce_city)(Leader* leader, int placeholder, int t, WCoord wx, WCoord wy, int use_escrow);
    extern void* Leader__produce_upgradeAddr;
    extern int __fastcall Leader__produce_upgrade(Leader* leader, int placeholder, int t, int city, Color* use_escrow);//0x2CB5D0
    extern int(__fastcall* Old_Leader__produce_upgrade)(Leader* leader, int placeholder, int t, int city, Color* use_escrow);
    extern void* Leader__produce_unitAddr;
    extern int __fastcall Leader__produce_unit(Leader* leader, int placeholder, int t, int city, int num, Color* use_escrow);//0x2CB9E0
    extern int(__fastcall* Old_Leader__produce_unit)(Leader* leader, int placeholder, int t, int city, int num, Color* use_escrow);
    extern void* Leader__unit_prod_valueAddr;
    extern int __fastcall Leader__unit_prod_value(Leader* leader, int placeholder, int t);//0x2CC580
    extern int(__fastcall* Old_Leader__unit_prod_value)(Leader* leader, int placeholder, int t);
    extern void* Leader__check_incomeAddr;
    extern int __fastcall Leader__check_income(Leader* leader, int placeholder, int t, int factor, int o, int use_escrow, int city, int num, int* max);//0x2CC800
    extern int(__fastcall* Old_Leader__check_income)(Leader* leader, int placeholder, int t, int factor, int o, int use_escrow, int city, int num, int* max);
    extern void* Leader__compute_sitesAddr;
    extern void __fastcall Leader__compute_sites(Leader* leader, int placeholder, int);//0x2CC950
    extern void(__fastcall* Old_Leader__compute_sites)(Leader* leader, int placeholder, int);
    extern void* Leader__compute_site_statsAddr;
    extern void __fastcall Leader__compute_site_stats(Leader* leader, int placeholder, WCoord wx, WCoord wy, int city, int* o, int reg, int* this_val, int* this_dist, int nearby, unsigned int new_x, WCoord* new_y);//0x2CD040
    extern void(__fastcall* Old_Leader__compute_site_stats)(Leader* leader, int placeholder, WCoord wx, WCoord wy, int city, int* o, int reg, int* this_val, int* this_dist, int nearby, unsigned int new_x, WCoord* new_y);
    extern void* Leader__get_needAddr;
    extern int __fastcall Leader__get_need(Leader* leader, int placeholder, int good, int lowest);//0x2CDC80
    extern int(__fastcall* Old_Leader__get_need)(Leader* leader, int placeholder, int good, int lowest);
    extern void* Leader__calc_anti_attritionAddr;
    extern void __fastcall Leader__calc_anti_attrition(Leader* leader, int placeholder);//0x2CDCC0
    extern void(__fastcall* Old_Leader__calc_anti_attrition)(Leader* leader, int placeholder);
    extern void* Leader__calc_attritionAddr;
    extern void __fastcall Leader__calc_attrition(Leader* leader, int placeholder);//0x2CDEA0
    extern void(__fastcall* Old_Leader__calc_attrition)(Leader* leader, int placeholder);
    extern void* Leader__calc_miseryAddr;
    extern void __fastcall Leader__calc_misery(Leader* leader, int placeholder);//0x2CDFF0
    extern void(__fastcall* Old_Leader__calc_misery)(Leader* leader, int placeholder);
    extern void* Leader__queued_unitsAddr;
    extern int __fastcall Leader__queued_units(Leader* leader, int placeholder);//0x2CE000
    extern int(__fastcall* Old_Leader__queued_units)(Leader* leader, int placeholder);
    extern void* Leader__verify_spell_flagsAddr;
    extern void __fastcall Leader__verify_spell_flags(Leader* leader, int placeholder);//0x2CE190
    extern void(__fastcall* Old_Leader__verify_spell_flags)(Leader* leader, int placeholder);
    extern void* Leader__gatherAddr;
    extern void __fastcall Leader__gather(Leader* leader, int placeholder);//0x2CE280
    extern void(__fastcall* Old_Leader__gather)(Leader* leader, int placeholder);
    extern void* Leader__do_gatherAddr;
    extern void __fastcall Leader__do_gather(Leader* leader, int placeholder);//0x2CE450
    extern void(__fastcall* Old_Leader__do_gather)(Leader* leader, int placeholder);
    extern void* Leader__calc_resource_capsAddr;
    extern void __fastcall Leader__calc_resource_caps(Leader* leader, int placeholder);//0x2CE900
    extern void(__fastcall* Old_Leader__calc_resource_caps)(Leader* leader, int placeholder);
    extern void* Leader__calc_supportAddr;
    extern void __fastcall Leader__calc_support(Leader* leader, int placeholder, int* support);//0x2CEEA0
    extern void(__fastcall* Old_Leader__calc_support)(Leader* leader, int placeholder, int* support);
    extern void* Leader__calc_gatherAddr;
    extern void __fastcall Leader__calc_gather(Leader* leader, int placeholder, int* resources);//0x2CEEE0
    extern void(__fastcall* Old_Leader__calc_gather)(Leader* leader, int placeholder, int* resources);
    extern void* Leader__calc_wall_statsAddr;
    extern void __fastcall Leader__calc_wall_stats(Leader* leader, int placeholder);//0x2CF7C0
    extern void(__fastcall* Old_Leader__calc_wall_stats)(Leader* leader, int placeholder);
    extern void* Leader__calc_unit_statsAddr;
    extern void __fastcall Leader__calc_unit_stats(Leader* leader, int placeholder);//0x2CF970
    extern void(__fastcall* Old_Leader__calc_unit_stats)(Leader* leader, int placeholder);
    extern void* Leader__action_buyAddr;
    extern void __fastcall Leader__action_buy(Leader* leader, int placeholder, int good, char flags);//0x2CFA20
    extern void(__fastcall* Old_Leader__action_buy)(Leader* leader, int placeholder, int good, char flags);
    extern void* Leader__action_sellAddr;
    extern void __fastcall Leader__action_sell(Leader* leader, int placeholder, int good, char flags);//0x2CFA90
    extern void(__fastcall* Old_Leader__action_sell)(Leader* leader, int placeholder, int good, char flags);
    extern void* Leader__tell_embargoAddr;
    extern void __fastcall Leader__tell_embargo(Leader* leader, int placeholder);//0x2CFAF0
    extern void(__fastcall* Old_Leader__tell_embargo)(Leader* leader, int placeholder);
    extern void* Leader__do_buyAddr;
    extern int __fastcall Leader__do_buy(Leader* leader, int placeholder, int good);//0x2CFBD0
    extern int(__fastcall* Old_Leader__do_buy)(Leader* leader, int placeholder, int good);
    extern void* Leader__do_sellAddr;
    extern int __fastcall Leader__do_sell(Leader* leader, int placeholder, int good);//0x2CFC60
    extern int(__fastcall* Old_Leader__do_sell)(Leader* leader, int placeholder, int good);
    extern void* Leader__random_personalityAddr;
    extern void __fastcall Leader__random_personality(Leader* leader, int placeholder);//0x2CFD00
    extern void(__fastcall* Old_Leader__random_personality)(Leader* leader, int placeholder);
    extern void* Leader__ally_diploAddr;
    extern void __fastcall Leader__ally_diplo(Leader* leader, int placeholder, int whom, Armies* treaty);//0x2D0120
    extern void(__fastcall* Old_Leader__ally_diplo)(Leader* leader, int placeholder, int whom, Armies* treaty);
    extern void* Leader__eject_my_shit_from_his_assAddr;
    extern void __fastcall Leader__eject_my_shit_from_his_ass(Leader* leader, int placeholder, int whom);//0x2D0220
    extern void(__fastcall* Old_Leader__eject_my_shit_from_his_ass)(Leader* leader, int placeholder, int whom);
    extern void* Leader__has_agendaAddr;
    extern int __fastcall Leader__has_agenda(Leader* leader, int placeholder, int whom, int agenda);//0x2D0330
    extern int(__fastcall* Old_Leader__has_agenda)(Leader* leader, int placeholder, int whom, int agenda);
    extern void* Leader__agenda_offAddr;
    extern void __fastcall Leader__agenda_off(Leader* leader, int placeholder, int whom, int agenda);//0x2D0350
    extern void(__fastcall* Old_Leader__agenda_off)(Leader* leader, int placeholder, int whom, int agenda);
    extern void* Leader__treaty_offAddr;
    extern void __fastcall Leader__treaty_off(Leader* leader, int placeholder, int whom, int treaty);//0x2D0370
    extern void(__fastcall* Old_Leader__treaty_off)(Leader* leader, int placeholder, int whom, int treaty);
    extern void* Leader__action_rejectAddr;
    extern void __fastcall Leader__action_reject(Leader* leader, int placeholder, int whom);//0x2D0390
    extern void(__fastcall* Old_Leader__action_reject)(Leader* leader, int placeholder, int whom);
    extern void* Leader__action_agreeAddr;
    extern void __fastcall Leader__action_agree(Leader* leader, int placeholder, int whom);//0x2D03B0
    extern void(__fastcall* Old_Leader__action_agree)(Leader* leader, int placeholder, int whom);
    extern void* Leader__action_respondAddr;
    extern void __fastcall Leader__action_respond(Leader* leader, int placeholder, int whom, int value);//0x2D03C0
    extern void(__fastcall* Old_Leader__action_respond)(Leader* leader, int placeholder, int whom, int value);
    extern void* Leader__consider_tributeAddr;
    extern void __fastcall Leader__consider_tribute(Leader* leader, int placeholder, int whom, int value, int good);//0x2D1360
    extern void(__fastcall* Old_Leader__consider_tribute)(Leader* leader, int placeholder, int whom, int value, int good);
    extern void* Leader__notify_dealAddr;
    extern void __fastcall Leader__notify_deal(Leader* leader, int placeholder, int whom, int treaty);//0x2D13F0
    extern void(__fastcall* Old_Leader__notify_deal)(Leader* leader, int placeholder, int whom, int treaty);
    extern void* Leader__action_attackAddr;
    extern void __fastcall Leader__action_attack(Leader* leader, int placeholder, int whom, int whose, int onoff);//0x2D14E0
    extern void(__fastcall* Old_Leader__action_attack)(Leader* leader, int placeholder, int whom, int whose, int onoff);
    extern void* Leader__action_treatyAddr;
    extern void __fastcall Leader__action_treaty(Leader* leader, int placeholder, int whom, int treaty);//0x2D1570
    extern void(__fastcall* Old_Leader__action_treaty)(Leader* leader, int placeholder, int whom, int treaty);
    extern void* Leader__action_clear_allAddr;
    extern void __fastcall Leader__action_clear_all(Leader* leader, int placeholder, int whom);//0x2D15E0
    extern void(__fastcall* Old_Leader__action_clear_all)(Leader* leader, int placeholder, int whom);
    extern void* Leader__action_clear_tributesAddr;
    extern void __fastcall Leader__action_clear_tributes(Leader* leader, int placeholder, int whom);//0x2D1690
    extern void(__fastcall* Old_Leader__action_clear_tributes)(Leader* leader, int placeholder, int whom);
    extern void* Leader__action_demand_tributeAddr;
    extern void __fastcall Leader__action_demand_tribute(Leader* leader, int placeholder, int whom, int good, int amount);//0x2D1750
    extern void(__fastcall* Old_Leader__action_demand_tribute)(Leader* leader, int placeholder, int whom, int good, int amount);
    extern void* Leader__action_offerAddr;
    extern void __fastcall Leader__action_offer(Leader* leader, int placeholder, int whom, int good, int amount);//0x2D1780
    extern void(__fastcall* Old_Leader__action_offer)(Leader* leader, int placeholder, int whom, int good, int amount);
    extern void* Leader__action_splineAddr;
    extern void __fastcall Leader__action_spline(Leader* leader, int placeholder, SoundGlobal* packet, int whom);//0x2D1850
    extern void(__fastcall* Old_Leader__action_spline)(Leader* leader, int placeholder, SoundGlobal* packet, int whom);
    extern void* Leader__action_pingAddr;
    extern void __fastcall Leader__action_ping(Leader* leader, int placeholder, Coord x, Coord y, int whom);//0x2D18A0
    extern void(__fastcall* Old_Leader__action_ping)(Leader* leader, int placeholder, Coord x, Coord y, int whom);
    extern void* Leader__clear_agreeAddr;
    extern void __fastcall Leader__clear_agree(Leader* leader, int placeholder, int whom);//0x2D1AF0
    extern void(__fastcall* Old_Leader__clear_agree)(Leader* leader, int placeholder, int whom);
    extern void* Leader__recapture_capitalAddr;
    extern void __fastcall Leader__recapture_capital(Leader* leader, int placeholder);//0x2D1BA0
    extern void(__fastcall* Old_Leader__recapture_capital)(Leader* leader, int placeholder);
    extern void* Leader__defeat_byAddr;
    extern void __fastcall Leader__defeat_by(Leader* leader, int placeholder, int a2, int whom, int defeat_type);//0x2D1C80
    extern void(__fastcall* Old_Leader__defeat_by)(Leader* leader, int placeholder, int a2, int whom, int defeat_type);
    extern void* Leader__blow_up_unitsAddr;
    extern void __fastcall Leader__blow_up_units(Leader* leader, int placeholder, int whom);//0x2D2170
    extern void(__fastcall* Old_Leader__blow_up_units)(Leader* leader, int placeholder, int whom);
    extern void* Leader__blow_up_buildingsAddr;
    extern void __fastcall Leader__blow_up_buildings(Leader* leader, int placeholder);//0x2D22B0
    extern void(__fastcall* Old_Leader__blow_up_buildings)(Leader* leader, int placeholder);
    extern void* Leader__blow_up_towersAddr;
    extern void __fastcall Leader__blow_up_towers(Leader* leader, int placeholder, int whom);//0x2D2310
    extern void(__fastcall* Old_Leader__blow_up_towers)(Leader* leader, int placeholder, int whom);
    extern void* Leader__set_diffAddr;
    extern void __fastcall Leader__set_diff(Leader* leader, int placeholder, int diff);//0x2D2470
    extern void(__fastcall* Old_Leader__set_diff)(Leader* leader, int placeholder, int diff);
    extern void* Leader__fix_tech_flagsAddr;
    extern void __fastcall Leader__fix_tech_flags(Leader* leader, int placeholder);//0x2D2480
    extern void(__fastcall* Old_Leader__fix_tech_flags)(Leader* leader, int placeholder);
    extern void* Leader__set_ageAddr;
    extern void __fastcall Leader__set_age(Leader* leader, int placeholder, int);//0x2D25A0
    extern void(__fastcall* Old_Leader__set_age)(Leader* leader, int placeholder, int);
    extern void* Leader__set_epochAddr;
    extern void __fastcall Leader__set_epoch(Leader* leader, int placeholder, int cat, int newepoch);//0x2D26F0
    extern void(__fastcall* Old_Leader__set_epoch)(Leader* leader, int placeholder, int cat, int newepoch);
    extern void* Leader__lose_techAddr;
    extern void __fastcall Leader__lose_tech(Leader* leader, int placeholder, int);//0x2D2850
    extern void(__fastcall* Old_Leader__lose_tech)(Leader* leader, int placeholder, int);
    extern void* Leader__pay_dowAddr;
    extern int __fastcall Leader__pay_dow(Leader* leader, int placeholder, int, int);//0x2D2B10
    extern int(__fastcall* Old_Leader__pay_dow)(Leader* leader, int placeholder, int, int);
    extern void* Leader__LeaderAddr;
    extern void __fastcall Leader__Leader(Leader* leader, int placeholder, int a2);//0x2D2BF0
    extern void(__fastcall* Old_Leader__Leader)(Leader* leader, int placeholder, int a2);
    extern void* LeaderOut__issue_chatAddr;
    extern void __fastcall LeaderOut__issue_chat(LeaderOut* leaderOut, int placeholder, String* string, int flags);//0x2D2C50
    extern void(__fastcall* Old_LeaderOut__issue_chat)(LeaderOut* leaderOut, int placeholder, String* string, int flags);
    extern void* LeaderOut__issue_pingAddr;
    extern void __fastcall LeaderOut__issue_ping(LeaderOut* leaderOut, int placeholder, Coord, Coord);//0x2D3240
    extern void(__fastcall* Old_LeaderOut__issue_ping)(LeaderOut* leaderOut, int placeholder, Coord, Coord);
    extern void* LeaderOut__display_chatAddr;
    extern void __fastcall LeaderOut__display_chat(LeaderOut* leaderOut, int placeholder, const String*, int, int, int);//0x2D3320
    extern void(__fastcall* Old_LeaderOut__display_chat)(LeaderOut* leaderOut, int placeholder, const String*, int, int, int);
    extern void* LeaderOut__say_meetAddr;
    extern void __fastcall LeaderOut__say_meet(LeaderOut* leaderOut, int placeholder, int, Coord, Coord);//0x2D3570
    extern void(__fastcall* Old_LeaderOut__say_meet)(LeaderOut* leaderOut, int placeholder, int, Coord, Coord);
    extern void* LeaderOut__warn_resourcesAddr;
    extern void __fastcall LeaderOut__warn_resources(LeaderOut* leaderOut, int placeholder, int t, int whom, String* city, int good);//0x2D3650
    extern void(__fastcall* Old_LeaderOut__warn_resources)(LeaderOut* leaderOut, int placeholder, int t, int whom, String* city, int good);
    extern void* LeaderOut__issue_sellAddr;
    extern void __fastcall LeaderOut__issue_sell(LeaderOut* leaderOut, int placeholder, int, int);//0x2D3EB0
    extern void(__fastcall* Old_LeaderOut__issue_sell)(LeaderOut* leaderOut, int placeholder, int, int);
    extern void* LeaderOut__issue_buyAddr;
    extern void __fastcall LeaderOut__issue_buy(LeaderOut* leaderOut, int placeholder, int, int);//0x2D3EF0
    extern void(__fastcall* Old_LeaderOut__issue_buy)(LeaderOut* leaderOut, int placeholder, int, int);
    extern void* LeaderOut__issue_propose_attackAddr;
    extern void __fastcall LeaderOut__issue_propose_attack(LeaderOut* leaderOut, int placeholder, int, int, int);//0x2D3F30
    extern void(__fastcall* Old_LeaderOut__issue_propose_attack)(LeaderOut* leaderOut, int placeholder, int, int, int);
    extern void* LeaderOut__issue_demand_tributeAddr;
    extern void __fastcall LeaderOut__issue_demand_tribute(LeaderOut* leaderOut, int placeholder, int, int, int);//0x2D3F60
    extern void(__fastcall* Old_LeaderOut__issue_demand_tribute)(LeaderOut* leaderOut, int placeholder, int, int, int);
    extern void* LeaderOut__issue_tributeAddr;
    extern void __fastcall LeaderOut__issue_tribute(LeaderOut* leaderOut, int placeholder, int, int, int);//0x2D3F90
    extern void(__fastcall* Old_LeaderOut__issue_tribute)(LeaderOut* leaderOut, int placeholder, int, int, int);
    extern void* LeaderOut__issue_rejectAddr;
    extern void __fastcall LeaderOut__issue_reject(LeaderOut* leaderOut, int placeholder, int);//0x2D3FF0
    extern void(__fastcall* Old_LeaderOut__issue_reject)(LeaderOut* leaderOut, int placeholder, int);
    extern void* LeaderOut__issue_acceptAddr;
    extern void __fastcall LeaderOut__issue_accept(LeaderOut* leaderOut, int placeholder, int);//0x2D4010
    extern void(__fastcall* Old_LeaderOut__issue_accept)(LeaderOut* leaderOut, int placeholder, int);
    extern void* LeaderOut__issue_clear_allAddr;
    extern void __fastcall LeaderOut__issue_clear_all(LeaderOut* leaderOut, int placeholder, int);//0x2D4040
    extern void(__fastcall* Old_LeaderOut__issue_clear_all)(LeaderOut* leaderOut, int placeholder, int);
    extern void* LeaderOut__issue_clear_tributesAddr;
    extern void __fastcall LeaderOut__issue_clear_tributes(LeaderOut* leaderOut, int placeholder, int);//0x2D4060
    extern void(__fastcall* Old_LeaderOut__issue_clear_tributes)(LeaderOut* leaderOut, int placeholder, int);
    extern void* LeaderOut__issue_declareAddr;
    extern void __fastcall LeaderOut__issue_declare(LeaderOut* leaderOut, int placeholder, int, int);//0x2D4080
    extern void(__fastcall* Old_LeaderOut__issue_declare)(LeaderOut* leaderOut, int placeholder, int, int);
    extern void* LeaderOut__issue_treatyAddr;
    extern void __fastcall LeaderOut__issue_treaty(LeaderOut* leaderOut, int placeholder, int, int);//0x2D40F0
    extern void(__fastcall* Old_LeaderOut__issue_treaty)(LeaderOut* leaderOut, int placeholder, int, int);
    extern void* LeaderData__strong_vsAddr;
    extern void __fastcall LeaderData__strong_vs(LeaderData* leaderData, int placeholder, String*, int);//0x2D4110
    extern void(__fastcall* Old_LeaderData__strong_vs)(LeaderData* leaderData, int placeholder, String*, int);
    extern void* LeaderData__weak_vsAddr;
    extern void __fastcall LeaderData__weak_vs(LeaderData* leaderData, int placeholder, String*, int);//0x2D4760
    extern void(__fastcall* Old_LeaderData__weak_vs)(LeaderData* leaderData, int placeholder, String*, int);
    extern void* LeaderData__counter_unitAddr;
    extern int __fastcall LeaderData__counter_unit(LeaderData* leaderData, int placeholder, int, int*);//0x2D4CB0
    extern int(__fastcall* Old_LeaderData__counter_unit)(LeaderData* leaderData, int placeholder, int, int*);
    extern void* LeaderData__care_if_cost_discoveredAddr;
    extern int __fastcall LeaderData__care_if_cost_discovered(LeaderData* leaderData, int placeholder, int t);//0x2D51A0
    extern int(__fastcall* Old_LeaderData__care_if_cost_discovered)(LeaderData* leaderData, int placeholder, int t);
    extern void* LeaderData__locked_transportAddr;
    extern int __fastcall LeaderData__locked_transport(LeaderData* leaderData, int placeholder);//0x2D5230
    extern int(__fastcall* Old_LeaderData__locked_transport)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__scale_tributeAddr;
    extern int __fastcall LeaderData__scale_tribute(LeaderData* leaderData, int placeholder, int);//0x2D5240
    extern int(__fastcall* Old_LeaderData__scale_tribute)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__get_nuke_embargoAddr;
    extern int __fastcall LeaderData__get_nuke_embargo(LeaderData* leaderData, int placeholder);//0x2D52C0
    extern int(__fastcall* Old_LeaderData__get_nuke_embargo)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_my_nuke_embargoAddr;
    extern int __fastcall LeaderData__get_my_nuke_embargo(LeaderData* leaderData, int placeholder);//0x2D5350
    extern int(__fastcall* Old_LeaderData__get_my_nuke_embargo)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__can_nukeAddr;
    extern BOOL __fastcall LeaderData__can_nuke(LeaderData* leaderData, int placeholder);//0x2D53C0
    extern BOOL(__fastcall* Old_LeaderData__can_nuke)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__can_buy_sellAddr;
    extern BOOL __fastcall LeaderData__can_buy_sell(LeaderData* leaderData, int placeholder);//0x2D53E0
    extern BOOL(__fastcall* Old_LeaderData__can_buy_sell)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__has_marketAddr;
    extern int __fastcall LeaderData__has_market(LeaderData* leaderData, int placeholder);//0x2D5410
    extern int(__fastcall* Old_LeaderData__has_market)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_reg_buildingsAddr;
    extern int __fastcall LeaderData__get_reg_buildings(LeaderData* leaderData, int placeholder, int reg, int t2);//0x2D5470
    extern int(__fastcall* Old_LeaderData__get_reg_buildings)(LeaderData* leaderData, int placeholder, int reg, int t2);
    extern void* LeaderData__has_capitalAddr;
    extern BOOL __fastcall LeaderData__has_capital(LeaderData* leaderData, int placeholder, int* whose);//0x2D54C0
    extern BOOL(__fastcall* Old_LeaderData__has_capital)(LeaderData* leaderData, int placeholder, int* whose);
    extern void* LeaderData__calc_city_resourcesAddr;
    extern void __fastcall LeaderData__calc_city_resources(LeaderData* leaderData, int placeholder, int*, int*, Coord, Coord, int);//0x2D5530
    extern void(__fastcall* Old_LeaderData__calc_city_resources)(LeaderData* leaderData, int placeholder, int*, int*, Coord, Coord, int);
    extern void* LeaderData__any_proposalsAddr;
    extern int __fastcall LeaderData__any_proposals(LeaderData* leaderData, int placeholder, int);//0x2D5AD0
    extern int(__fastcall* Old_LeaderData__any_proposals)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__is_rejectAddr;
    extern BOOL __fastcall LeaderData__is_reject(LeaderData* leaderData, int placeholder, int whom);//0x2D5B30
    extern BOOL(__fastcall* Old_LeaderData__is_reject)(LeaderData* leaderData, int placeholder, int whom);
    extern void* LeaderData__is_any_offerAddr;
    extern int __fastcall LeaderData__is_any_offer(LeaderData* leaderData, int placeholder, int whom);//0x2D5B50
    extern int(__fastcall* Old_LeaderData__is_any_offer)(LeaderData* leaderData, int placeholder, int whom);
    extern void* LeaderData__is_agreeAddr;
    extern BOOL __fastcall LeaderData__is_agree(LeaderData* leaderData, int placeholder, int whom);//0x2D5B70
    extern BOOL(__fastcall* Old_LeaderData__is_agree)(LeaderData* leaderData, int placeholder, int whom);
    extern void* LeaderData__is_tribute_periodAddr;
    extern int __fastcall LeaderData__is_tribute_period(LeaderData* leaderData, int placeholder, int);//0x2D5B90
    extern int(__fastcall* Old_LeaderData__is_tribute_period)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__afford_dowAddr;
    extern int __fastcall LeaderData__afford_dow(LeaderData* leaderData, int placeholder, int, int, int*);//0x2D5CE0
    extern int(__fastcall* Old_LeaderData__afford_dow)(LeaderData* leaderData, int placeholder, int, int, int*);
    extern void* LeaderData__get_mvp_scoreAddr;
    extern int __fastcall LeaderData__get_mvp_score(LeaderData* leaderData, int placeholder);//0x2D5DE0
    extern int(__fastcall* Old_LeaderData__get_mvp_score)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_enemy_unbuilt_wonder_valueAddr;
    extern int __fastcall LeaderData__get_enemy_unbuilt_wonder_value(LeaderData* leaderData, int placeholder);//0x2D5E40
    extern int(__fastcall* Old_LeaderData__get_enemy_unbuilt_wonder_value)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_unbuilt_wonder_valueAddr;
    extern int __fastcall LeaderData__get_unbuilt_wonder_value(LeaderData* leaderData, int placeholder);//0x2D5EE0
    extern int(__fastcall* Old_LeaderData__get_unbuilt_wonder_value)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__can_see_bordersAddr;
    extern BOOL __fastcall LeaderData__can_see_borders(LeaderData* leaderData, int placeholder, int whom, int for_minimap);//0x2D5F60
    extern BOOL(__fastcall* Old_LeaderData__can_see_borders)(LeaderData* leaderData, int placeholder, int whom, int for_minimap);
    extern void* LeaderData__get_total_citiesAddr;
    extern int __fastcall LeaderData__get_total_cities(LeaderData* leaderData, int placeholder);//0x2D6060
    extern int(__fastcall* Old_LeaderData__get_total_cities)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_city_limitAddr;
    extern int __fastcall LeaderData__get_city_limit(LeaderData* leaderData, int placeholder);//0x2D6130
    extern int(__fastcall* Old_LeaderData__get_city_limit)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__is_boomerAddr;
    extern int __fastcall LeaderData__is_boomer(LeaderData* leaderData, int placeholder);//0x2D6190
    extern int(__fastcall* Old_LeaderData__is_boomer)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__is_rusherAddr;
    extern int __fastcall LeaderData__is_rusher(LeaderData* leaderData, int placeholder);//0x2D61F0
    extern int(__fastcall* Old_LeaderData__is_rusher)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__num_alliesAddr;
    extern int __fastcall LeaderData__num_allies(LeaderData* leaderData, int placeholder);//0x2D6250
    extern int(__fastcall* Old_LeaderData__num_allies)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_team_terrAddr;
    extern int __fastcall LeaderData__get_team_terr(LeaderData* leaderData, int placeholder);//0x2D62E0
    extern int(__fastcall* Old_LeaderData__get_team_terr)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_team_economicAddr;
    extern int __fastcall LeaderData__get_team_economic(LeaderData* leaderData, int placeholder);//0x2D6400
    extern int(__fastcall* Old_LeaderData__get_team_economic)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_economicAddr;
    extern int __fastcall LeaderData__get_economic(LeaderData* leaderData, int placeholder);//0x2D6490
    extern int(__fastcall* Old_LeaderData__get_economic)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_team_scoreAddr;
    extern int __fastcall LeaderData__get_team_score(LeaderData* leaderData, int placeholder);//0x2D6520
    extern int(__fastcall* Old_LeaderData__get_team_score)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_mod_resource_capAddr;
    extern int __fastcall LeaderData__get_mod_resource_cap(LeaderData* leaderData, int placeholder, int good);//0x2D65B0
    extern int(__fastcall* Old_LeaderData__get_mod_resource_cap)(LeaderData* leaderData, int placeholder, int good);
    extern void* LeaderData__get_econ_modAddr;
    extern void __fastcall LeaderData__get_econ_mod(LeaderData* leaderData, int placeholder);//0x2D6660
    extern void(__fastcall* Old_LeaderData__get_econ_mod)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_gather_handicapAddr;
    extern int __fastcall LeaderData__get_gather_handicap(LeaderData* leaderData, int placeholder);//0x2D66A0
    extern int(__fastcall* Old_LeaderData__get_gather_handicap)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_handicap_levelAddr;
    extern int __fastcall LeaderData__get_handicap_level(LeaderData* leaderData, int placeholder);//0x2D6740
    extern int(__fastcall* Old_LeaderData__get_handicap_level)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__walk_dataAddr;
    extern void __fastcall LeaderData__walk_data(LeaderData* leaderData, int placeholder, DataWalk* walk);//0x2D6750
    extern void(__fastcall* Old_LeaderData__walk_data)(LeaderData* leaderData, int placeholder, DataWalk* walk);
    extern void* LeaderData__get_govs_takenAddr;
    extern int __fastcall LeaderData__get_govs_taken(LeaderData* leaderData, int placeholder);//0x2D69F0
    extern int(__fastcall* Old_LeaderData__get_govs_taken)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_govAddr;
    extern int __fastcall LeaderData__get_gov(LeaderData* leaderData, int placeholder);//0x2D6A20
    extern int(__fastcall* Old_LeaderData__get_gov)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_key_typeAddr;
    extern int __fastcall LeaderData__get_key_type(LeaderData* leaderData, int placeholder, int opt, TypeIndex t);//0x2D6AC0
    extern int(__fastcall* Old_LeaderData__get_key_type)(LeaderData* leaderData, int placeholder, int opt, TypeIndex t);
    extern void* LeaderData__get_city_upgrade_levelAddr;
    extern int __fastcall LeaderData__get_city_upgrade_level(LeaderData* leaderData, int placeholder, int t);//0x2D6D90
    extern int(__fastcall* Old_LeaderData__get_city_upgrade_level)(LeaderData* leaderData, int placeholder, int t);
    extern void* LeaderData__get_merchants_levelAddr;
    extern int __fastcall LeaderData__get_merchants_level(LeaderData* leaderData, int placeholder);//0x2D6DC0
    extern int(__fastcall* Old_LeaderData__get_merchants_level)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_taxationAddr;
    extern int __fastcall LeaderData__get_taxation(LeaderData* leaderData, int placeholder);//0x2D6E20
    extern int(__fastcall* Old_LeaderData__get_taxation)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_fishermenAddr;
    extern int __fastcall LeaderData__get_fishermen(LeaderData* leaderData, int placeholder);//0x2D6E80
    extern int(__fastcall* Old_LeaderData__get_fishermen)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_lowest_epochAddr;
    extern int __fastcall LeaderData__get_lowest_epoch(LeaderData* leaderData, int placeholder, int* which);//0x2D6ED0
    extern int(__fastcall* Old_LeaderData__get_lowest_epoch)(LeaderData* leaderData, int placeholder, int* which);
    extern void* LeaderData__get_highest_epochAddr;
    extern int __fastcall LeaderData__get_highest_epoch(LeaderData* leaderData, int placeholder, int* which);//0x2D6F30
    extern int(__fastcall* Old_LeaderData__get_highest_epoch)(LeaderData* leaderData, int placeholder, int* which);
    extern void* LeaderData__compute_epochAddr;
    extern int __fastcall LeaderData__compute_epoch(LeaderData* leaderData, int placeholder, int);//0x2D6F80
    extern int(__fastcall* Old_LeaderData__compute_epoch)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__get_epoch_baseAddr;
    extern int __fastcall LeaderData__get_epoch_base(LeaderData* leaderData, int placeholder, int tech_cat);//0x2D6FF0
    extern int(__fastcall* Old_LeaderData__get_epoch_base)(LeaderData* leaderData, int placeholder, int tech_cat);
    extern void* LeaderData__special_preqAddr;
    extern int __fastcall LeaderData__special_preq(LeaderData* leaderData, int placeholder, int, int*);//0x2D7030
    extern int(__fastcall* Old_LeaderData__special_preq)(LeaderData* leaderData, int placeholder, int, int*);
    extern void* LeaderData__techs_per_ageAddr;
    extern int __fastcall LeaderData__techs_per_age(LeaderData* leaderData, int placeholder, int);//0x2D7280
    extern int(__fastcall* Old_LeaderData__techs_per_age)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__starting_ageAddr;
    extern unsigned int __fastcall LeaderData__starting_age(LeaderData* leaderData, int placeholder);//0x2D7320
    extern unsigned int(__fastcall* Old_LeaderData__starting_age)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__all_techsAddr;
    extern int __fastcall LeaderData__all_techs(LeaderData* leaderData, int placeholder);//0x2D7370
    extern int(__fastcall* Old_LeaderData__all_techs)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__LeaderDataAddr;
    extern void __fastcall LeaderData__LeaderData(LeaderData* leaderData, int placeholder);//0x2D7540
    extern void(__fastcall* Old_LeaderData__LeaderData)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__has_rare_conquestAddr;
    extern BOOL __fastcall LeaderData__has_rare_conquest(LeaderData* leaderData, int placeholder, int good);//0x2D9320
    extern BOOL(__fastcall* Old_LeaderData__has_rare_conquest)(LeaderData* leaderData, int placeholder, int good);
    extern void* LeaderData__is_shared_teamAddr;
    extern int __fastcall LeaderData__is_shared_team(LeaderData* leaderData, int placeholder, int whom);//0x2D9360
    extern int(__fastcall* Old_LeaderData__is_shared_team)(LeaderData* leaderData, int placeholder, int whom);
    extern void* LeaderData__tribe_can_typeAddr;
    extern int __fastcall LeaderData__tribe_can_type(LeaderData* leaderData, int placeholder, const Type*);//0x2D9410
    extern int(__fastcall* Old_LeaderData__tribe_can_type)(LeaderData* leaderData, int placeholder, const Type*);
    extern void* LeaderDataEncrypt__log_dataAddr;
    extern void __fastcall LeaderDataEncrypt__log_data(LeaderDataEncrypt* leaderDataEncrypt, int placeholder, Log*);//0x2D94B0
    extern void(__fastcall* Old_LeaderDataEncrypt__log_data)(LeaderDataEncrypt* leaderDataEncrypt, int placeholder, Log*);
    extern void* LeaderDataEncrypt__initAddr;
    extern void __fastcall LeaderDataEncrypt__init(LeaderDataEncrypt* leaderDataEncrypt, int placeholder);//0x2D9C60
    extern void(__fastcall* Old_LeaderDataEncrypt__init)(LeaderDataEncrypt* leaderDataEncrypt, int placeholder);
    extern void* Leader__new_rareAddr;
    extern void __fastcall Leader__new_rare(Leader* leader, int placeholder, int ox);//0x2D9E70
    extern void(__fastcall* Old_Leader__new_rare)(Leader* leader, int placeholder, int ox);
    extern void* LeaderData__get_fort_bordersAddr;
    extern int __fastcall LeaderData__get_fort_borders(LeaderData* leaderData, int placeholder);//0x2D9FB0
    extern int(__fastcall* Old_LeaderData__get_fort_borders)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_targetAddr;
    extern int __fastcall LeaderData__get_target(LeaderData* leaderData, int placeholder);//0x2DA000
    extern int(__fastcall* Old_LeaderData__get_target)(LeaderData* leaderData, int placeholder);
    extern void* Leader__tech_availAddr;
    extern int __fastcall Leader__tech_avail(Leader* leader, int placeholder, TypeIndex t, int o);//0x2DA060
    extern int(__fastcall* Old_Leader__tech_avail)(Leader* leader, int placeholder, TypeIndex t, int o);
    extern void* LeaderData__get_support_countAddr;
    extern int __fastcall LeaderData__get_support_count(LeaderData* leaderData, int placeholder, int t);//0x2DA110
    extern int(__fastcall* Old_LeaderData__get_support_count)(LeaderData* leaderData, int placeholder, int t);
    extern void* LeaderData__get_unbuilt_wondersAddr;
    extern int __fastcall LeaderData__get_unbuilt_wonders(LeaderData* leaderData, int placeholder);//0x2DA290
    extern int(__fastcall* Old_LeaderData__get_unbuilt_wonders)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_team_wondersAddr;
    extern int __fastcall LeaderData__get_team_wonders(LeaderData* leaderData, int placeholder);//0x2DA2D0
    extern int(__fastcall* Old_LeaderData__get_team_wonders)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_team_unbuilt_wondersAddr;
    extern int __fastcall LeaderData__get_team_unbuilt_wonders(LeaderData* leaderData, int placeholder);//0x2DA3A0
    extern int(__fastcall* Old_LeaderData__get_team_unbuilt_wonders)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__has_unbuilt_wonderAddr;
    extern int __fastcall LeaderData__has_unbuilt_wonder(LeaderData* leaderData, int placeholder, int);//0x2DA470
    extern int(__fastcall* Old_LeaderData__has_unbuilt_wonder)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__team_has_unbuilt_wonderAddr;
    extern int __fastcall LeaderData__team_has_unbuilt_wonder(LeaderData* leaderData, int placeholder, int t);//0x2DA4F0
    extern int(__fastcall* Old_LeaderData__team_has_unbuilt_wonder)(LeaderData* leaderData, int placeholder, int t);
    extern void* LeaderData__cost_factor_dowAddr;
    extern int __fastcall LeaderData__cost_factor_dow(LeaderData* leaderData, int placeholder, int whom, int t);//0x2DA590
    extern int(__fastcall* Old_LeaderData__cost_factor_dow)(LeaderData* leaderData, int placeholder, int whom, int t);
    extern void* LeaderData__calc_science_discountAddr;
    extern int __fastcall LeaderData__calc_science_discount(LeaderData* leaderData, int placeholder, unsigned __int32 t, int cost);//0x2DA630
    extern int(__fastcall* Old_LeaderData__calc_science_discount)(LeaderData* leaderData, int placeholder, unsigned __int32 t, int cost);
    extern void* LeaderData__get_handicapAddr;
    extern int __fastcall LeaderData__get_handicap(LeaderData* leaderData, int placeholder);//0x2DA740
    extern int(__fastcall* Old_LeaderData__get_handicap)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_ships_speed_upgradeAddr;
    extern int __fastcall LeaderData__get_ships_speed_upgrade(LeaderData* leaderData, int placeholder);//0x2DA800
    extern int(__fastcall* Old_LeaderData__get_ships_speed_upgrade)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_troops_speed_upgradeAddr;
    extern int __fastcall LeaderData__get_troops_speed_upgrade(LeaderData* leaderData, int placeholder);//0x2DA850
    extern int(__fastcall* Old_LeaderData__get_troops_speed_upgrade)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_vehicle_speed_upgradeAddr;
    extern int __fastcall LeaderData__get_vehicle_speed_upgrade(LeaderData* leaderData, int placeholder);//0x2DA8A0
    extern int(__fastcall* Old_LeaderData__get_vehicle_speed_upgrade)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_enemy_wonder_valueAddr;
    extern int __fastcall LeaderData__get_enemy_wonder_value(LeaderData* leaderData, int placeholder);//0x2DA8F0
    extern int(__fastcall* Old_LeaderData__get_enemy_wonder_value)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_team_wonder_valueAddr;
    extern int __fastcall LeaderData__get_team_wonder_value(LeaderData* leaderData, int placeholder);//0x2DA990
    extern int(__fastcall* Old_LeaderData__get_team_wonder_value)(LeaderData* leaderData, int placeholder);
    extern void* Leader__inc_hit_eventAddr;
    extern void __fastcall Leader__inc_hit_event(Leader* leader, int placeholder, __int16 num);//0x2DAA30
    extern void(__fastcall* Old_Leader__inc_hit_event)(Leader* leader, int placeholder, __int16 num);
    extern void* Leader__inc_damage_eventAddr;
    extern void __fastcall Leader__inc_damage_event(Leader* leader, int placeholder, __int16 num);//0x2DAA50
    extern void(__fastcall* Old_Leader__inc_damage_event)(Leader* leader, int placeholder, __int16 num);
    extern void* LeaderData__get_nameAddr;
    extern const String* __fastcall LeaderData__get_name(LeaderData* leaderData, int placeholder, String* result);//0x2DAA70
    extern const String* (__fastcall* Old_LeaderData__get_name)(LeaderData* leaderData, int placeholder, String* result);
    extern void* Leader__inc_kill_eventAddr;
    extern void __fastcall Leader__inc_kill_event(Leader* leader, int placeholder, __int16 num);//0x2DAB10
    extern void(__fastcall* Old_Leader__inc_kill_event)(Leader* leader, int placeholder, __int16 num);
    extern void* Leader__inc_death_eventAddr;
    extern void __fastcall Leader__inc_death_event(Leader* leader, int placeholder, __int16 num);//0x2DAB30
    extern void(__fastcall* Old_Leader__inc_death_event)(Leader* leader, int placeholder, __int16 num);
    extern void* Leader__action_declareAddr;
    extern int __fastcall Leader__action_declare(Leader* leader, int placeholder, int which, int* treaty, int free, Leaders* force);//0x2DAB50
    extern int(__fastcall* Old_Leader__action_declare)(Leader* leader, int placeholder, int which, int* treaty, int free, Leaders* force);
    extern void* LeaderData__get_building_speed_upgradeAddr;
    extern int __fastcall LeaderData__get_building_speed_upgrade(LeaderData* leaderData, int placeholder);//0x2DAE90
    extern int(__fastcall* Old_LeaderData__get_building_speed_upgrade)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_building_hp_upgradeAddr;
    extern int __fastcall LeaderData__get_building_hp_upgrade(LeaderData* leaderData, int placeholder);//0x2DAEE0
    extern int(__fastcall* Old_LeaderData__get_building_hp_upgrade)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_fort_losAddr;
    extern int __fastcall LeaderData__get_fort_los(LeaderData* leaderData, int placeholder);//0x2DAF30
    extern int(__fastcall* Old_LeaderData__get_fort_los)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_tower_fort_losAddr;
    extern int __fastcall LeaderData__get_tower_fort_los(LeaderData* leaderData, int placeholder);//0x2DAF80
    extern int(__fastcall* Old_LeaderData__get_tower_fort_los)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_fort_rangeAddr;
    extern int __fastcall LeaderData__get_fort_range(LeaderData* leaderData, int placeholder);//0x2DAFB0
    extern int(__fastcall* Old_LeaderData__get_fort_range)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_tower_fort_rangeAddr;
    extern int __fastcall LeaderData__get_tower_fort_range(LeaderData* leaderData, int placeholder);//0x2DB000
    extern int(__fastcall* Old_LeaderData__get_tower_fort_range)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__calc_resource_bonusesAddr;
    extern void __fastcall LeaderData__calc_resource_bonuses(LeaderData* leaderData, int placeholder, int* resources);//0x2DB030
    extern void(__fastcall* Old_LeaderData__calc_resource_bonuses)(LeaderData* leaderData, int placeholder, int* resources);
    extern void* LeaderData__get_universityAddr;
    extern int __fastcall LeaderData__get_university(LeaderData* leaderData, int placeholder);//0x2DB1F0
    extern int(__fastcall* Old_LeaderData__get_university)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_farm_limitAddr;
    extern int __fastcall LeaderData__get_farm_limit(LeaderData* leaderData, int placeholder);//0x2DB270
    extern int(__fastcall* Old_LeaderData__get_farm_limit)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_fort_garrisonAddr;
    extern int __fastcall LeaderData__get_fort_garrison(LeaderData* leaderData, int placeholder);//0x2DB2F0
    extern int(__fastcall* Old_LeaderData__get_fort_garrison)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_granaryAddr;
    extern int __fastcall LeaderData__get_granary(LeaderData* leaderData, int placeholder);//0x2DB340
    extern int(__fastcall* Old_LeaderData__get_granary)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_lumbermillAddr;
    extern int __fastcall LeaderData__get_lumbermill(LeaderData* leaderData, int placeholder);//0x2DB3A0
    extern int(__fastcall* Old_LeaderData__get_lumbermill)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_smelterAddr;
    extern int __fastcall LeaderData__get_smelter(LeaderData* leaderData, int placeholder);//0x2DB3F0
    extern int(__fastcall* Old_LeaderData__get_smelter)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_temple_bordersAddr;
    extern int __fastcall LeaderData__get_temple_borders(LeaderData* leaderData, int placeholder);//0x2DB440
    extern int(__fastcall* Old_LeaderData__get_temple_borders)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_temple_hpAddr;
    extern int __fastcall LeaderData__get_temple_hp(LeaderData* leaderData, int placeholder);//0x2DB470
    extern int(__fastcall* Old_LeaderData__get_temple_hp)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_temple_rangeAddr;
    extern int __fastcall LeaderData__get_temple_range(LeaderData* leaderData, int placeholder, int check_tikal);//0x2DB4A0
    extern int(__fastcall* Old_LeaderData__get_temple_range)(LeaderData* leaderData, int placeholder, int check_tikal);
    extern void* LeaderData__researchingAddr;
    extern int __fastcall LeaderData__researching(LeaderData* leaderData, int placeholder, int t, int ox);//0x2DB510
    extern int(__fastcall* Old_LeaderData__researching)(LeaderData* leaderData, int placeholder, int t, int ox);
    extern void* LeaderData__get_wondersAddr;
    extern int __fastcall LeaderData__get_wonders(LeaderData* leaderData, int placeholder);//0x2DB680
    extern int(__fastcall* Old_LeaderData__get_wonders)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_first_libraryAddr;
    extern int __fastcall LeaderData__get_first_library(LeaderData* leaderData, int placeholder);//0x2DB6C0
    extern int(__fastcall* Old_LeaderData__get_first_library)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_radiusAddr;
    extern int __fastcall LeaderData__get_radius(LeaderData* leaderData, int placeholder, int);//0x2DB790
    extern int(__fastcall* Old_LeaderData__get_radius)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__has_preqAddr;
    extern BOOL __fastcall LeaderData__has_preq(LeaderData* leaderData, int placeholder, int t);//0x2DB810
    extern BOOL(__fastcall* Old_LeaderData__has_preq)(LeaderData* leaderData, int placeholder, int t);
    extern void* LeaderData__check_predecessorAddr;
    extern int __fastcall LeaderData__check_predecessor(LeaderData* leaderData, int placeholder, int t);//0x2DBCB0
    extern int(__fastcall* Old_LeaderData__check_predecessor)(LeaderData* leaderData, int placeholder, int t);
    extern void* LeaderData__type_eligibleAddr;
    extern int __fastcall LeaderData__type_eligible(LeaderData* leaderData, int placeholder, signed __int32 t, int check_obs);//0x2DBD10
    extern int(__fastcall* Old_LeaderData__type_eligible)(LeaderData* leaderData, int placeholder, signed __int32 t, int check_obs);
    extern void* LeaderData__calc_market_pricesAddr;
    extern void __fastcall LeaderData__calc_market_prices(LeaderData* leaderData, int placeholder, int, int*, int*);//0x2DC2A0
    extern void(__fastcall* Old_LeaderData__calc_market_prices)(LeaderData* leaderData, int placeholder, int, int*, int*);
    extern void* Leader__calc_pop_capAddr;
    extern int __fastcall Leader__calc_pop_cap(Leader* leader, int placeholder);//0x2DC490
    extern int(__fastcall* Old_Leader__calc_pop_cap)(Leader* leader, int placeholder);
    extern void* Leader__lost_a_cityAddr;
    extern void __fastcall Leader__lost_a_city(Leader* leader, int placeholder, int, int, int);//0x2DC6D0
    extern void(__fastcall* Old_Leader__lost_a_city)(Leader* leader, int placeholder, int, int, int);
    extern void* Leader__lost_capitalAddr;
    extern void __fastcall Leader__lost_capital(Leader* leader, int placeholder, int);//0x2DC870
    extern void(__fastcall* Old_Leader__lost_capital)(Leader* leader, int placeholder, int);
    extern void* Leader__lose_buildingAddr;
    extern void __fastcall Leader__lose_building(Leader* leader, int placeholder, TypeIndex t);//0x2DCA20
    extern void(__fastcall* Old_Leader__lose_building)(Leader* leader, int placeholder, TypeIndex t);
    extern void* LeaderData__get_caravan_limitAddr;
    extern int __fastcall LeaderData__get_caravan_limit(LeaderData* leaderData, int placeholder, int);//0x2DCA50
    extern int(__fastcall* Old_LeaderData__get_caravan_limit)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__get_gov_heroAddr;
    extern int __fastcall LeaderData__get_gov_hero(LeaderData* leaderData, int placeholder, int);//0x2E0600
    extern int(__fastcall* Old_LeaderData__get_gov_hero)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__get_buildingsAddr;
    extern int __fastcall LeaderData__get_buildings(LeaderData* leaderData, int placeholder, int t2, int strict);//0x2E0680
    extern int(__fastcall* Old_LeaderData__get_buildings)(LeaderData* leaderData, int placeholder, int t2, int strict);
    extern void* Leader__gain_buildingAddr;
    extern void __fastcall Leader__gain_building(Leader* leader, int placeholder, TypeIndex t);//0x2E06C0
    extern void(__fastcall* Old_Leader__gain_building)(Leader* leader, int placeholder, TypeIndex t);
    extern void* LeaderData__get_building_citiesAddr;
    extern int __fastcall LeaderData__get_building_cities(LeaderData* leaderData, int placeholder, int t2, int check_assimilated);//0x2E06F0
    extern int(__fastcall* Old_LeaderData__get_building_cities)(LeaderData* leaderData, int placeholder, int t2, int check_assimilated);
    extern void* LeaderData__get_decoy_timeAddr;
    extern int __fastcall LeaderData__get_decoy_time(LeaderData* leaderData, int placeholder);//0x2E0750
    extern int(__fastcall* Old_LeaderData__get_decoy_time)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__has_rareAddr;
    extern BOOL __fastcall LeaderData__has_rare(LeaderData* leaderData, int placeholder, int good);//0x2E0770
    extern BOOL(__fastcall* Old_LeaderData__has_rare)(LeaderData* leaderData, int placeholder, int good);
    extern void* LeaderData__get_unitsAddr;
    extern int __fastcall LeaderData__get_units(LeaderData* leaderData, int placeholder, int, int);//0x2E07D0
    extern int(__fastcall* Old_LeaderData__get_units)(LeaderData* leaderData, int placeholder, int, int);
    extern void* LeaderData__get_general_upgradeAddr;
    extern int __fastcall LeaderData__get_general_upgrade(LeaderData* leaderData, int placeholder);//0x2E0830
    extern int(__fastcall* Old_LeaderData__get_general_upgrade)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_supply_upgradeAddr;
    extern int __fastcall LeaderData__get_supply_upgrade(LeaderData* leaderData, int placeholder);//0x2E0880
    extern int(__fastcall* Old_LeaderData__get_supply_upgrade)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__calc_rareAddr;
    extern void __fastcall LeaderData__calc_rare(LeaderData* leaderData, int placeholder, int, int*, int);//0x2E08D0
    extern void(__fastcall* Old_LeaderData__calc_rare)(LeaderData* leaderData, int placeholder, int, int*, int);
    extern void* LeaderData__get_attritionAddr;
    extern int __fastcall LeaderData__get_attrition(LeaderData* leaderData, int placeholder);//0x2E0B60
    extern int(__fastcall* Old_LeaderData__get_attrition)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_anti_attritionAddr;
    extern void __fastcall LeaderData__get_anti_attrition(LeaderData* leaderData, int placeholder);//0x2E0B70
    extern void(__fastcall* Old_LeaderData__get_anti_attrition)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__has_bonusAddr;
    extern BOOL __fastcall LeaderData__has_bonus(LeaderData* leaderData, int placeholder, int t);//0x2E0B80
    extern BOOL(__fastcall* Old_LeaderData__has_bonus)(LeaderData* leaderData, int placeholder, int t);
    extern void* LeaderData__has_spellAddr;
    extern int __fastcall LeaderData__has_spell(LeaderData* leaderData, int placeholder, int t);//0x2E0BC0
    extern int(__fastcall* Old_LeaderData__has_spell)(LeaderData* leaderData, int placeholder, int t);
    extern void* LeaderData__can_transportAddr;
    extern int __fastcall LeaderData__can_transport(LeaderData* leaderData, int placeholder);//0x2E0C60
    extern int(__fastcall* Old_LeaderData__can_transport)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__has_techAddr;
    extern BOOL __fastcall LeaderData__has_tech(LeaderData* leaderData, int placeholder, TypeIndex t);//0x2E0C80
    extern BOOL(__fastcall* Old_LeaderData__has_tech)(LeaderData* leaderData, int placeholder, TypeIndex t);
    extern void* LeaderData__at_city_limitAddr;
    extern BOOL __fastcall LeaderData__at_city_limit(LeaderData* leaderData, int placeholder);//0x2E0D30
    extern BOOL(__fastcall* Old_LeaderData__at_city_limit)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_queuedAddr;
    extern int __fastcall LeaderData__get_queued(LeaderData* leaderData, int placeholder, int t2, int strict);//0x2E0D50
    extern int(__fastcall* Old_LeaderData__get_queued)(LeaderData* leaderData, int placeholder, int t2, int strict);
    extern void* Leader__track_unit_typeAddr;
    extern void __fastcall Leader__track_unit_type(Leader* leader, int placeholder, int t, int delta, int o);//0x2E0DD0
    extern void(__fastcall* Old_Leader__track_unit_type)(Leader* leader, int placeholder, int t, int delta, int o);
    extern void* LeaderData__is_coopAddr;
    extern int __fastcall LeaderData__is_coop(LeaderData* leaderData, int placeholder);//0x2E0F20
    extern int(__fastcall* Old_LeaderData__is_coop)(LeaderData* leaderData, int placeholder);
    extern void* Leader__track_queuedAddr;
    extern void __fastcall Leader__track_queued(Leader* leader, int placeholder, int t, int delta);//0x2E0F30
    extern void(__fastcall* Old_Leader__track_queued)(Leader* leader, int placeholder, int t, int delta);
    extern void* LeaderData__has_generalAddr;
    extern int __fastcall LeaderData__has_general(LeaderData* leaderData, int placeholder, Coord x, Coord y, int unit_mask, int t, int dist_mod);//0x2E1050
    extern int(__fastcall* Old_LeaderData__has_general)(LeaderData* leaderData, int placeholder, Coord x, Coord y, int unit_mask, int t, int dist_mod);
    extern void* LeaderData__get_spy_upgradeAddr;
    extern int __fastcall LeaderData__get_spy_upgrade(LeaderData* leaderData, int placeholder);//0x2E1090
    extern int(__fastcall* Old_LeaderData__get_spy_upgrade)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__has_upgradeAddr;
    extern BOOL __fastcall LeaderData__has_upgrade(LeaderData* leaderData, int placeholder, int t);//0x2E10E0
    extern BOOL(__fastcall* Old_LeaderData__has_upgrade)(LeaderData* leaderData, int placeholder, int t);
    extern void* LeaderData__get_troops_los_upgradeAddr;
    extern int __fastcall LeaderData__get_troops_los_upgrade(LeaderData* leaderData, int placeholder);//0x2E1110
    extern int(__fastcall* Old_LeaderData__get_troops_los_upgrade)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__has_conquest_bonusAddr;
    extern int __fastcall LeaderData__has_conquest_bonus(LeaderData* leaderData, int placeholder, int);//0x2E1160
    extern int(__fastcall* Old_LeaderData__has_conquest_bonus)(LeaderData* leaderData, int placeholder, int);
    extern void* Leader__treaty_onAddr;
    extern void __fastcall Leader__treaty_on(Leader* leader, int placeholder, int, int);//0x2E1190
    extern void(__fastcall* Old_Leader__treaty_on)(Leader* leader, int placeholder, int, int);
    extern void* Leader__agenda_onAddr;
    extern void __fastcall Leader__agenda_on(Leader* leader, int placeholder, int whom, int agenda);//0x2E11C0
    extern void(__fastcall* Old_Leader__agenda_on)(Leader* leader, int placeholder, int whom, int agenda);
    extern void* LeaderData__has_treatyAddr;
    extern int __fastcall LeaderData__has_treaty(LeaderData* leaderData, int placeholder, int, int);//0x2E11E0
    extern int(__fastcall* Old_LeaderData__has_treaty)(LeaderData* leaderData, int placeholder, int, int);
    extern void* LeaderData__is_peaceAddr;
    extern BOOL __fastcall LeaderData__is_peace(LeaderData* leaderData, int placeholder, int whom);//0x2E1200
    extern BOOL(__fastcall* Old_LeaderData__is_peace)(LeaderData* leaderData, int placeholder, int whom);
    extern void* Leader__meetAddr;
    extern void __fastcall Leader__meet(Leader* leader, int placeholder, int whom, Coord x, Coord y);//0x2E1250
    extern void(__fastcall* Old_Leader__meet)(Leader* leader, int placeholder, int whom, Coord x, Coord y);
    extern void* LeaderData__is_targetAddr;
    extern BOOL __fastcall LeaderData__is_target(LeaderData* leaderData, int placeholder, int whom);//0x2E12C0
    extern BOOL(__fastcall* Old_LeaderData__is_target)(LeaderData* leaderData, int placeholder, int whom);
    extern void* LeaderData__get_heal_levelAddr;
    extern int __fastcall LeaderData__get_heal_level(LeaderData* leaderData, int placeholder);//0x2E12E0
    extern int(__fastcall* Old_LeaderData__get_heal_level)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__check_populationAddr;
    extern BOOL __fastcall LeaderData__check_population(LeaderData* leaderData, int placeholder, int t);//0x2E1330
    extern BOOL(__fastcall* Old_LeaderData__check_population)(LeaderData* leaderData, int placeholder, int t);
    extern void* LeaderData__has_tribe_bonusAddr;
    extern BOOL __fastcall LeaderData__has_tribe_bonus(LeaderData* leaderData, int placeholder, int t);//0x2E1370
    extern BOOL(__fastcall* Old_LeaderData__has_tribe_bonus)(LeaderData* leaderData, int placeholder, int t);
    extern void* Leader__produce_buildingAddr;
    extern int __fastcall Leader__produce_building(Leader* leader, int placeholder, int, int, int);//0x2E1400
    extern int(__fastcall* Old_Leader__produce_building)(Leader* leader, int placeholder, int, int, int);
    extern void* LeaderData__get_graftAddr;
    extern int __fastcall LeaderData__get_graft(LeaderData* leaderData, int placeholder, int);//0x2E30F0
    extern int(__fastcall* Old_LeaderData__get_graft)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__current_upgradeAddr;
    extern int __fastcall LeaderData__current_upgrade(LeaderData* leaderData, int placeholder, int t);//0x2E3140
    extern int(__fastcall* Old_LeaderData__current_upgrade)(LeaderData* leaderData, int placeholder, int t);
    extern void* Leader__reset_obs_flagsAddr;
    extern void __fastcall Leader__reset_obs_flags(Leader* leader, int placeholder);//0x2E32A0
    extern void(__fastcall* Old_Leader__reset_obs_flags)(Leader* leader, int placeholder);
    extern void* LeaderData__type_availAddr;
    extern int __fastcall LeaderData__type_avail(LeaderData* leaderData, int placeholder, int city2, int whom);//0x2E33A0
    extern int(__fastcall* Old_LeaderData__type_avail)(LeaderData* leaderData, int placeholder, int city2, int whom);
    extern void* Leader__reset_scoreAddr;
    extern void __fastcall Leader__reset_score(Leader* leader, int placeholder);//0x2E37F0
    extern void(__fastcall* Old_Leader__reset_score)(Leader* leader, int placeholder);
    extern void* Leaders__walk_dataAddr;
    extern void __fastcall Leaders__walk_data(Leaders* leaders, int placeholder, DataWalk* walk);//0x2E38E0
    extern void(__fastcall* Old_Leaders__walk_data)(Leaders* leaders, int placeholder, DataWalk* walk);
    extern void* Leader__initAddr;
    extern int __fastcall Leader__init(Leader* leader, int placeholder, int who, int tribe, unsigned __int8 color_index);//0x2E3930
    extern int(__fastcall* Old_Leader__init)(Leader* leader, int placeholder, int who, int tribe, unsigned __int8 color_index);
    extern void* LeaderData__log_dataAddr;
    extern void __fastcall LeaderData__log_data(LeaderData* leaderData, int placeholder, Log*);//0x2E5110
    extern void(__fastcall* Old_LeaderData__log_data)(LeaderData* leaderData, int placeholder, Log*);
    extern void* LeaderData__find_capitalAddr;
    extern void __fastcall LeaderData__find_capital(LeaderData* leaderData, int placeholder, int*, int*, int, int);//0x2EB930
    extern void(__fastcall* Old_LeaderData__find_capital)(LeaderData* leaderData, int placeholder, int*, int*, int, int);
    extern void* LeaderData__get_diploAddr;
    extern int __fastcall LeaderData__get_diplo(LeaderData* leaderData, int placeholder, int whom);//0x2EBA50
    extern int(__fastcall* Old_LeaderData__get_diplo)(LeaderData* leaderData, int placeholder, int whom);
    extern void* LeaderData__is_enemyAddr;
    extern BOOL __fastcall LeaderData__is_enemy(LeaderData* leaderData, int placeholder, int whom);//0x2EBAA0
    extern BOOL(__fastcall* Old_LeaderData__is_enemy)(LeaderData* leaderData, int placeholder, int whom);
    extern void* LeaderData__is_neutralAddr;
    extern bool __fastcall LeaderData__is_neutral(LeaderData* leaderData, int placeholder);//0x2EBAE0
    extern bool(__fastcall* Old_LeaderData__is_neutral)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_wonder_netAddr;
    extern int __fastcall LeaderData__get_wonder_net(LeaderData* leaderData, int placeholder);//0x2EBB10
    extern int(__fastcall* Old_LeaderData__get_wonder_net)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_wonder_valueAddr;
    extern int __fastcall LeaderData__get_wonder_value(LeaderData* leaderData, int placeholder);//0x2EBB90
    extern int(__fastcall* Old_LeaderData__get_wonder_value)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__has_wonderAddr;
    extern int __fastcall LeaderData__has_wonder(LeaderData* leaderData, int placeholder, int);//0x2EBC10
    extern int(__fastcall* Old_LeaderData__has_wonder)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__is_teamAddr;
    extern BOOL __fastcall LeaderData__is_team(LeaderData* leaderData, int placeholder, int whom, int strict);//0x2EBD30
    extern BOOL(__fastcall* Old_LeaderData__is_team)(LeaderData* leaderData, int placeholder, int whom, int strict);
    extern void* LeaderData__get_nukesAddr;
    extern int __fastcall LeaderData__get_nukes(LeaderData* leaderData, int placeholder);//0x2EBE50
    extern int(__fastcall* Old_LeaderData__get_nukes)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__say_full_nameAddr;
    extern String* __fastcall LeaderData__say_full_name(LeaderData* leaderData, int placeholder, String* result);//0x2EBE90
    extern String* (__fastcall* Old_LeaderData__say_full_name)(LeaderData* leaderData, int placeholder, String* result);
    extern void* LeaderData__num_team_membersAddr;
    extern int __fastcall LeaderData__num_team_members(LeaderData* leaderData, int placeholder, int);//0x2EBF90
    extern int(__fastcall* Old_LeaderData__num_team_members)(LeaderData* leaderData, int placeholder, int);
    extern void* LeaderData__get_diffAddr;
    extern int __fastcall LeaderData__get_diff(LeaderData* leaderData, int placeholder);//0x2EC000
    extern int(__fastcall* Old_LeaderData__get_diff)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_teamAddr;
    extern int __fastcall LeaderData__get_team(LeaderData* leaderData, int placeholder);//0x2EC040
    extern int(__fastcall* Old_LeaderData__get_team)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__get_playerAddr;
    extern int __fastcall LeaderData__get_player(LeaderData* leaderData, int placeholder);//0x2EC0F0
    extern int(__fastcall* Old_LeaderData__get_player)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__any_humansAddr;
    extern int __fastcall LeaderData__any_humans(LeaderData* leaderData, int placeholder);//0x2EC130
    extern int(__fastcall* Old_LeaderData__any_humans)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__is_humanAddr;
    extern int __fastcall LeaderData__is_human(LeaderData* leaderData, int placeholder);//0x2EC170
    extern int(__fastcall* Old_LeaderData__is_human)(LeaderData* leaderData, int placeholder);
    extern void* Leader__chat_to_localAddr;
    extern void __fastcall Leader__chat_to_local(Leader* leader, int placeholder, String* string, int whom, int prepend_sender_name, int play_sound);//0x2EC520
    extern void(__fastcall* Old_Leader__chat_to_local)(Leader* leader, int placeholder, String* string, int whom, int prepend_sender_name, int play_sound);
    extern void* Leader__compute_scoreAddr;
    extern void __fastcall Leader__compute_score(Leader* leader, int placeholder, int);//0x2EC560
    extern void(__fastcall* Old_Leader__compute_score)(Leader* leader, int placeholder, int);
    extern void* Leader__set_diploAddr;
    extern void __fastcall Leader__set_diplo(Leader* leader, int placeholder, int whom, Armies* diplo);//0x2EC6A0
    extern void(__fastcall* Old_Leader__set_diplo)(Leader* leader, int placeholder, int whom, Armies* diplo);
    extern void* Leader__victoryAddr;
    extern void __fastcall Leader__victory(Leader* leader, int placeholder, int, int);//0x2EC9B0
    extern void(__fastcall* Old_Leader__victory)(Leader* leader, int placeholder, int, int);
    extern void* Leaders__end_process_allAddr;
    extern void __fastcall Leaders__end_process_all(Leaders* leaders, int placeholder);//0x2ED070
    extern void(__fastcall* Old_Leaders__end_process_all)(Leaders* leaders, int placeholder);
    extern void* Leaders__process_allAddr;
    extern void __fastcall Leaders__process_all(Leaders* leaders, int placeholder);//0x2ED2A0
    extern void(__fastcall* Old_Leaders__process_all)(Leaders* leaders, int placeholder);
    extern void* Leaders__clearAddr;
    extern void __fastcall Leaders__clear(Leaders* leaders, int placeholder);//0x2ED5D0
    extern void(__fastcall* Old_Leaders__clear)(Leaders* leaders, int placeholder);
    extern void* Leaders__initAddr;
    extern int __fastcall Leaders__init(Leaders* leaders, int placeholder);//0x2ED850
    extern int(__fastcall* Old_Leaders__init)(Leaders* leaders, int placeholder);
    extern void* Leaders__LeadersAddr;
    extern void __fastcall Leaders__Leaders(Leaders* leaders, int placeholder);//0x2ED900
    extern void(__fastcall* Old_Leaders__Leaders)(Leaders* leaders, int placeholder);
    extern void* LeaderData__DeleteLeaderDataAddr;
    extern void __fastcall LeaderData__DeleteLeaderData(LeaderData* leaderData, int placeholder);//0x2ED9A0
    extern void(__fastcall* Old_LeaderData__DeleteLeaderData)(LeaderData* leaderData, int placeholder);
    extern void* LeaderData__is_allyAddr;
    extern BOOL __fastcall LeaderData__is_ally(LeaderData* leaderData, int placeholder, int whom);//0x2EDB50
    extern BOOL(__fastcall* Old_LeaderData__is_ally)(LeaderData* leaderData, int placeholder, int whom);
    extern void* LeaderOptions__log_dataAddr;
    extern void __fastcall LeaderOptions__log_data(LeaderOptions* leaderOptions, int placeholder, Log* log);//0x2F1480
    extern void(__fastcall* Old_LeaderOptions__log_data)(LeaderOptions* leaderOptions, int placeholder, Log* log);
    extern void* LeaderOptionData__log_dataAddr;
    extern void __fastcall LeaderOptionData__log_data(LeaderOptionData* leaderOptionData, int placeholder, Log* log);//0x2F16A0
    extern void(__fastcall* Old_LeaderOptionData__log_data)(LeaderOptionData* leaderOptionData, int placeholder, Log* log);
    extern void* LeaderOptionData__walk_dataAddr;
    extern void __fastcall LeaderOptionData__walk_data(LeaderOptionData* leaderOptionData, int placeholder, DataWalk* walk);//0x2F18B0
    extern void(__fastcall* Old_LeaderOptionData__walk_data)(LeaderOptionData* leaderOptionData, int placeholder, DataWalk* walk);
    extern void* LeaderOption__closeAddr;
    extern void __fastcall LeaderOption__close(LeaderOption* leaderOption, int placeholder, int who);//0x2F1940
    extern void(__fastcall* Old_LeaderOption__close)(LeaderOption* leaderOption, int placeholder, int who);
    extern void* LeaderOptions__walk_dataAddr;
    extern void __fastcall LeaderOptions__walk_data(LeaderOptions* leaderOptions, int placeholder, DataWalk*);//0x2F19A0
    extern void(__fastcall* Old_LeaderOptions__walk_data)(LeaderOptions* leaderOptions, int placeholder, DataWalk*);
    extern void* LeaderOptionOut__updateAddr;
    extern void __fastcall LeaderOptionOut__update(LeaderOptionOut* leaderOptionOut, int placeholder);//0x2F1A60
    extern void(__fastcall* Old_LeaderOptionOut__update)(LeaderOptionOut* leaderOptionOut, int placeholder);
    extern void* LeaderOption__synch_with_prefsAddr;
    extern void __fastcall LeaderOption__synch_with_prefs(LeaderOption* leaderOption, int placeholder);//0x2F1B50
    extern void(__fastcall* Old_LeaderOption__synch_with_prefs)(LeaderOption* leaderOption, int placeholder);
    extern void* LeaderOption__initAddr;
    extern int __fastcall LeaderOption__init(LeaderOption* leaderOption, int placeholder, int who);//0x2F1C60
    extern int(__fastcall* Old_LeaderOption__init)(LeaderOption* leaderOption, int placeholder, int who);
    extern void* LeaderOptions__closeAddr;
    extern void __fastcall LeaderOptions__close(LeaderOptions* leaderOptions, int placeholder);//0x2F1CD0
    extern void(__fastcall* Old_LeaderOptions__close)(LeaderOptions* leaderOptions, int placeholder);
    extern void* LeaderOptions__initAddr;
    extern int __fastcall LeaderOptions__init(LeaderOptions* leaderOptions, int placeholder);//0x2F1D40
    extern int(__fastcall* Old_LeaderOptions__init)(LeaderOptions* leaderOptions, int placeholder);
    extern void* LeaderOption__LeaderOptionAddr;
    extern void __fastcall LeaderOption__LeaderOption(LeaderOption* leaderOption, int placeholder);//0x2F1DB0
    extern void(__fastcall* Old_LeaderOption__LeaderOption)(LeaderOption* leaderOption, int placeholder);
    extern void* LeaderOptions__LeaderOptionsAddr;
    extern void __fastcall LeaderOptions__LeaderOptions(LeaderOptions* leaderOptions, int placeholder);//0x2F1DD0
    extern void(__fastcall* Old_LeaderOptions__LeaderOptions)(LeaderOptions* leaderOptions, int placeholder);



    extern void* String__StringAddr;
    extern void __fastcall String__String(String* string, int placeholder, const char* s);//0x61D660
    extern void(__fastcall* Old_String__String)(String* string, int placeholder, const char* s);
    extern void* GameLog__say_checksumAddr;
    extern void __fastcall GameLog__say_checksum(GameLog* gameLog, int placeholder, int detail, const String* file, int line);//0x530B30
    extern void(__fastcall* Old_GameLog__say_checksum)(GameLog* gameLog, int placeholder, int detail, const String* file, int line);
    extern void* String__closeAddr;
    extern void __fastcall String__close(String* string, int placeholder);//0x61CF40
    extern void(__fastcall* Old_String__close)(String* string, int placeholder);
    extern void* Random__getAddr;
    extern int __fastcall Random__get(Random* random, int placeholder, int min, int max);//0x639D70
    extern int(__fastcall* Old_Random__get)(Random* random, int placeholder, int min, int max);
    extern void* Game__init_tribesAddr;
    extern void __fastcall Game__init_tribes(Game* game, int placeholder);//0x18A600
    extern void(__fastcall* Old_Game__init_tribes)(Game* game, int placeholder);

    extern void* ScenarioFuncSet__init_funcsAddr;
    extern void __fastcall ScenarioFuncSet__init_funcs(ScenarioFuncSet* scenarioFuncSet, int placeholder);//0x5C7570
    extern void(__fastcall* Old_ScenarioFuncSet__init_funcs)(ScenarioFuncSet* scenarioFuncSet, int placeholder);