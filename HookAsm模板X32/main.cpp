
#include "HookAsm/HookAsm.h"
#include "HookAddr.h"
#include "GlobalVariable.h"
#include "Enums.h"



void* LeaderData__is_teamAddr;
BOOL __fastcall LeaderData__is_team(LeaderData* leaderData, int placeholder, int whom, int strict);//0x2EBD30
BOOL(__fastcall* Old_LeaderData__is_team)(LeaderData* leaderData, int placeholder, int whom, int strict);

 void* Leader__DeleteLeaderAddr;
 void __fastcall Leader__DeleteLeader(Leader* leader, int placeholder);//0x2DE10
 void(__fastcall* Old_Leader__DeleteLeader)(Leader* leader, int placeholder);
 void* LeaderOut__DeleteLeaderOutAddr;
 void __fastcall LeaderOut__DeleteLeaderOut(LeaderOut* leaderOut, int placeholder);//0x2DE50
 void(__fastcall* Old_LeaderOut__DeleteLeaderOut)(LeaderOut* leaderOut, int placeholder);
 void* LeaderData__get_ageAddr;
 int __fastcall LeaderData__get_age(LeaderData* leaderData, int placeholder);//0x3ECD0
 int(__fastcall* Old_LeaderData__get_age)(LeaderData* leaderData, int placeholder);
 void* LeaderData__bucket_setAddr;
 void __fastcall LeaderData__bucket_set(LeaderData* leaderData, int placeholder, int good, int value);//0x3ECF0
 void(__fastcall* Old_LeaderData__bucket_set)(LeaderData* leaderData, int placeholder, int good, int value);
 void* LeaderData__bucket_addAddr;
 void __fastcall LeaderData__bucket_add(LeaderData* leaderData, int placeholder, int good, int value);//0x3ED10
 void(__fastcall* Old_LeaderData__bucket_add)(LeaderData* leaderData, int placeholder, int good, int value);
 void* LeaderData__income_getAddr;
 int __fastcall LeaderData__income_get(LeaderData* leaderData, int placeholder, int good);//0x6EE60
 int(__fastcall* Old_LeaderData__income_get)(LeaderData* leaderData, int placeholder, int good);
 void* LeaderData__resource_cap_getAddr;
 int __fastcall LeaderData__resource_cap_get(LeaderData* leaderData, int placeholder, int good);//0x6EE80
 int(__fastcall* Old_LeaderData__resource_cap_get)(LeaderData* leaderData, int placeholder, int good);
 void* LeaderData__get_epochAddr;
 int __fastcall LeaderData__get_epoch(LeaderData* leaderData, int placeholder, int tech_cat);//0x6F1E0
 int(__fastcall* Old_LeaderData__get_epoch)(LeaderData* leaderData, int placeholder, int tech_cat);
 void* LeaderData__bucket_getAddr;
 int __fastcall LeaderData__bucket_get(LeaderData* leaderData, int placeholder, int good);//0x6F200
 int(__fastcall* Old_LeaderData__bucket_get)(LeaderData* leaderData, int placeholder, int good);
 void* LeaderData__epochs_getAddr;
 int __fastcall LeaderData__epochs_get(LeaderData* leaderData, int placeholder);//0x70F10
 int(__fastcall* Old_LeaderData__epochs_get)(LeaderData* leaderData, int placeholder);
 void* Leader__gain_techAddr;
 void __fastcall Leader__gain_tech(Leader* leader, int placeholder, int t, Coord x, Coord y, int tell, int do_unit_upgrade);//0x2DCB60
 void(__fastcall* Old_Leader__gain_tech)(Leader* leader, int placeholder, int t, Coord x, Coord y, int tell, int do_unit_upgrade);
 void* LeaderData__support_getAddr;
 int __fastcall LeaderData__support_get(LeaderData* leaderData, int placeholder, int good);//0x7DA00
 int(__fastcall* Old_LeaderData__support_get)(LeaderData* leaderData, int placeholder, int good);
 void* LeaderData__resources_getAddr;
 int __fastcall LeaderData__resources_get(LeaderData* leaderData, int placeholder, int good);//0x7DA20
 int(__fastcall* Old_LeaderData__resources_get)(LeaderData* leaderData, int placeholder, int good);
 void* LeaderData__resource_cap_addAddr;
 void __fastcall LeaderData__resource_cap_add(LeaderData* leaderData, int placeholder, int good, int value);//0x7DA40
 void(__fastcall* Old_LeaderData__resource_cap_add)(LeaderData* leaderData, int placeholder, int good, int value);
 void* Leader__closeAddr;
 void __fastcall Leader__close(Leader* leader, int placeholder);//0x2B7F80
 void(__fastcall* Old_Leader__close)(Leader* leader, int placeholder);
 void* Leaders__best_human_age_stampAddr;
 int __fastcall Leaders__best_human_age_stamp(Leaders* leaders, int placeholder);//0x2B81E0
 int(__fastcall* Old_Leaders__best_human_age_stamp)(Leaders* leaders, int placeholder);
 void* Leaders__max_enemy_ageAddr;
 int __fastcall Leaders__max_enemy_age(Leaders* leaders, int placeholder, int whom);//0x2B8300
 int(__fastcall* Old_Leaders__max_enemy_age)(Leaders* leaders, int placeholder, int whom);
 void* Leaders__max_ageAddr;
 int __fastcall Leaders__max_age(Leaders* leaders, int placeholder);//0x2B8370
 int(__fastcall* Old_Leaders__max_age)(Leaders* leaders, int placeholder);
 void* Leaders__max_human_ageAddr;
 int __fastcall Leaders__max_human_age(Leaders* leaders, int placeholder);//0x2B8470
 int(__fastcall* Old_Leaders__max_human_age)(Leaders* leaders, int placeholder);
 void* Leaders__max_human_citiesAddr;
 int __fastcall Leaders__max_human_cities(Leaders* leaders, int placeholder);//0x2B8580
 int(__fastcall* Old_Leaders__max_human_cities)(Leaders* leaders, int placeholder);
 void* Leader__end_processAddr;
 void __fastcall Leader__end_process(Leader* leader, int placeholder);//0x2B8690
 void(__fastcall* Old_Leader__end_process)(Leader* leader, int placeholder);
 void* Leader__processAddr;
 void __fastcall Leader__process(Leader* leader, int placeholder);//0x2B88B0
 void(__fastcall* Old_Leader__process)(Leader* leader, int placeholder);
 void* Leader__process_eliminationAddr;
 void __fastcall Leader__process_elimination(Leader* leader, int placeholder);//0x2B8A20
 void(__fastcall* Old_Leader__process_elimination)(Leader* leader, int placeholder);
 void* Leader__receive_chatAddr;
 void __fastcall Leader__receive_chat(Leader* leader, int placeholder, String* string, int from_play, int prepend_sender_name, int play_sound);//0x2B8AB0
 void(__fastcall* Old_Leader__receive_chat)(Leader* leader, int placeholder, String* string, int from_play, int prepend_sender_name, int play_sound);
 void* Leader__process_tauntsAddr;
 void __fastcall Leader__process_taunts(Leader* leader, int placeholder);//0x2B8BA0
 void(__fastcall* Old_Leader__process_taunts)(Leader* leader, int placeholder);
 void* Leader__receive_tauntAddr;
 void __fastcall Leader__receive_taunt(Leader* leader, int placeholder, TauntRequest taunt, int play);//0x2B8BF0
 void(__fastcall* Old_Leader__receive_taunt)(Leader* leader, int placeholder, TauntRequest taunt, int play);
 void* Leader__process_tauntAddr;
 void __fastcall Leader__process_taunt(Leader* leader, int placeholder, int taunt, int whom);//0x2B8CC0
 void(__fastcall* Old_Leader__process_taunt)(Leader* leader, int placeholder, int taunt, int whom);
 void* Leader__receive_pingAddr;
 void __fastcall Leader__receive_ping(Leader* leader, int placeholder, Coord x, Coord y, unsigned __int8 whom, unsigned __int8 timer);//0x2B95F0
 void(__fastcall* Old_Leader__receive_ping)(Leader* leader, int placeholder, Coord x, Coord y, unsigned __int8 whom, unsigned __int8 timer);
 void* Leader__compute_pop_scoreAddr;
 void __fastcall Leader__compute_pop_score(Leader* leader, int placeholder);//0x2BC190
 void(__fastcall* Old_Leader__compute_pop_score)(Leader* leader, int placeholder);
 void* Leader__compute_unit_upgrades_scoreAddr;
 void __fastcall Leader__compute_unit_upgrades_score(Leader* leader, int placeholder);//0x2BC1A0
 void(__fastcall* Old_Leader__compute_unit_upgrades_score)(Leader* leader, int placeholder);
 void* Leader__compute_economy_scoreAddr;
 void __fastcall Leader__compute_economy_score(Leader* leader, int placeholder);//0x2BC270
 void(__fastcall* Old_Leader__compute_economy_score)(Leader* leader, int placeholder);
 void* Leader__compute_research_scoreAddr;
 void __fastcall Leader__compute_research_score(Leader* leader, int placeholder);//0x2BC360
 void(__fastcall* Old_Leader__compute_research_score)(Leader* leader, int placeholder);
 void* Leader__compute_build_scoreAddr;
 void __fastcall Leader__compute_build_score(Leader* leader, int placeholder);//0x2BC3F0
 void(__fastcall* Old_Leader__compute_build_score)(Leader* leader, int placeholder);
 void* Leader__compute_unit_scoreAddr;
 void __fastcall Leader__compute_unit_score(Leader* leader, int placeholder);//0x2BC500
 void(__fastcall* Old_Leader__compute_unit_score)(Leader* leader, int placeholder);
 void* Leader__compute_explore_scoreAddr;
 void __fastcall Leader__compute_explore_score(Leader* leader, int placeholder);//0x2BC5E0
 void(__fastcall* Old_Leader__compute_explore_score)(Leader* leader, int placeholder);
 void* Leader__check_transportAddr;
 void __fastcall Leader__check_transport(Leader* leader, int placeholder);//0x2BC5F0
 void(__fastcall* Old_Leader__check_transport)(Leader* leader, int placeholder);
 void* Leader__check_exploreAddr;
 void __fastcall Leader__check_explore(Leader* leader, int placeholder);//0x2BC860
 void(__fastcall* Old_Leader__check_explore)(Leader* leader, int placeholder);
 void* Leader__diplomacyAddr;
 void __fastcall Leader__diplomacy(Leader* leader, int placeholder);//0x2BC950
 void(__fastcall* Old_Leader__diplomacy)(Leader* leader, int placeholder);
 void* LeaderData__resource_valueAddr;
 int __fastcall LeaderData__resource_value(LeaderData* leaderData, int placeholder, int good);//0x2C18D0
 int(__fastcall* Old_LeaderData__resource_value)(LeaderData* leaderData, int placeholder, int good);
 void* Leader__create_buildingsAddr;
 void __fastcall Leader__create_buildings(Leader* leader, int placeholder);//0x2C1BE0
 void(__fastcall* Old_Leader__create_buildings)(Leader* leader, int placeholder);
 void* Leader__create_unitsAddr;
 void __fastcall Leader__create_units(Leader* leader, int placeholder);//0x2C40A0
 void(__fastcall* Old_Leader__create_units)(Leader* leader, int placeholder);
 void* Leader__upgrade_unitsAddr;
 void __fastcall Leader__upgrade_units(Leader* leader, int placeholder);//0x2C6430
 void(__fastcall* Old_Leader__upgrade_units)(Leader* leader, int placeholder);
 void* Leader__research_techsAddr;
 void __fastcall Leader__research_techs(Leader* leader, int placeholder);//0x2C6BA0
 void(__fastcall* Old_Leader__research_techs)(Leader* leader, int placeholder);
 void* Leader__found_citiesAddr;
 void __fastcall Leader__found_cities(Leader* leader, int placeholder);//0x2C7A60
 void(__fastcall* Old_Leader__found_cities)(Leader* leader, int placeholder);
 void* Leader__market_speculationAddr;
 void __fastcall Leader__market_speculation(Leader* leader, int placeholder);//0x2C8110
 void(__fastcall* Old_Leader__market_speculation)(Leader* leader, int placeholder);
 void* Leader__production_ai_setupAddr;
 void __fastcall Leader__production_ai_setup(Leader* leader, int placeholder);//0x2C83E0
 void(__fastcall* Old_Leader__production_ai_setup)(Leader* leader, int placeholder);
 void* Leader__make_stuffAddr;
 BOOL __fastcall Leader__make_stuff(Leader* leader, int placeholder);//0x2C8AF0
 BOOL(__fastcall* Old_Leader__make_stuff)(Leader* leader, int placeholder);
 void* Leader__use_marketAddr;
 void __fastcall Leader__use_market(Leader* leader, int placeholder);//0x2C91C0
 void(__fastcall* Old_Leader__use_market)(Leader* leader, int placeholder);
 void* Leader__make_thisAddr;
 int __fastcall Leader__make_this(Leader* leader, int placeholder, int cat);//0x2C94F0
 int(__fastcall* Old_Leader__make_this)(Leader* leader, int placeholder, int cat);
 void* Leader__say_payAddr;
 String* __fastcall Leader__say_pay(Leader* leader, int placeholder, String* result, int cat, int can);//0x2C9A10
 String* (__fastcall* Old_Leader__say_pay)(Leader* leader, int placeholder, String* result, int cat, int can);
 void* Leader__can_payAddr;
 BOOL __fastcall Leader__can_pay(Leader* leader, int placeholder, int cat);//0x2C9B90
 BOOL(__fastcall* Old_Leader__can_pay)(Leader* leader, int placeholder, int cat);
 void* Leader__check_orphaned_buildingsAddr;
 void __fastcall Leader__check_orphaned_buildings(Leader* leader, int placeholder);//0x2C9F20
 void(__fastcall* Old_Leader__check_orphaned_buildings)(Leader* leader, int placeholder);
 void* Leader__produce_spellAddr;
 int __fastcall Leader__produce_spell(Leader* leader, int placeholder, int t, int city2, Color* use_escrow);//0x2CA720
 int(__fastcall* Old_Leader__produce_spell)(Leader* leader, int placeholder, int t, int city2, Color* use_escrow);
 void* Leader__produce_techAddr;
 int __fastcall Leader__produce_tech(Leader* leader, int placeholder, int t, Color* use_escrow);//0x2CA980
 int(__fastcall* Old_Leader__produce_tech)(Leader* leader, int placeholder, int t, Color* use_escrow);
 void* Leader__produce_cityAddr;
 int __fastcall Leader__produce_city(Leader* leader, int placeholder, int t, WCoord wx, WCoord wy, int use_escrow);//0x2CB120
 int(__fastcall* Old_Leader__produce_city)(Leader* leader, int placeholder, int t, WCoord wx, WCoord wy, int use_escrow);
 void* Leader__produce_upgradeAddr;
 int __fastcall Leader__produce_upgrade(Leader* leader, int placeholder, int t, int city, Color* use_escrow);//0x2CB5D0
 int(__fastcall* Old_Leader__produce_upgrade)(Leader* leader, int placeholder, int t, int city, Color* use_escrow);
 void* Leader__produce_unitAddr;
 int __fastcall Leader__produce_unit(Leader* leader, int placeholder, int t, int city, int num, Color* use_escrow);//0x2CB9E0
 int(__fastcall* Old_Leader__produce_unit)(Leader* leader, int placeholder, int t, int city, int num, Color* use_escrow);
 void* Leader__unit_prod_valueAddr;
 int __fastcall Leader__unit_prod_value(Leader* leader, int placeholder, int t);//0x2CC580
 int(__fastcall* Old_Leader__unit_prod_value)(Leader* leader, int placeholder, int t);
 void* Leader__check_incomeAddr;
 int __fastcall Leader__check_income(Leader* leader, int placeholder, int t, int factor, int o, int use_escrow, int city, int num, int* max);//0x2CC800
 int(__fastcall* Old_Leader__check_income)(Leader* leader, int placeholder, int t, int factor, int o, int use_escrow, int city, int num, int* max);
 void* Leader__compute_sitesAddr;
 void __fastcall Leader__compute_sites(Leader* leader, int placeholder, int force);//0x2CC950
 void(__fastcall* Old_Leader__compute_sites)(Leader* leader, int placeholder, int force);
 void* Leader__compute_site_statsAddr;
 void __fastcall Leader__compute_site_stats(Leader* leader, int placeholder, WCoord wx, WCoord wy, int city, int* o, int reg, int* this_val, int* this_dist, int nearby, unsigned int new_x, WCoord* new_y);//0x2CD040
 void(__fastcall* Old_Leader__compute_site_stats)(Leader* leader, int placeholder, WCoord wx, WCoord wy, int city, int* o, int reg, int* this_val, int* this_dist, int nearby, unsigned int new_x, WCoord* new_y);
 void* Leader__get_needAddr;
 int __fastcall Leader__get_need(Leader* leader, int placeholder, int good, int lowest);//0x2CDC80
 int(__fastcall* Old_Leader__get_need)(Leader* leader, int placeholder, int good, int lowest);
 void* Leader__calc_anti_attritionAddr;
 void __fastcall Leader__calc_anti_attrition(Leader* leader, int placeholder);//0x2CDCC0
 void(__fastcall* Old_Leader__calc_anti_attrition)(Leader* leader, int placeholder);
 void* Leader__calc_attritionAddr;
 void __fastcall Leader__calc_attrition(Leader* leader, int placeholder);//0x2CDEA0
 void(__fastcall* Old_Leader__calc_attrition)(Leader* leader, int placeholder);
 void* Leader__calc_miseryAddr;
 void __fastcall Leader__calc_misery(Leader* leader, int placeholder);//0x2CDFF0
 void(__fastcall* Old_Leader__calc_misery)(Leader* leader, int placeholder);
 void* Leader__queued_unitsAddr;
 int __fastcall Leader__queued_units(Leader* leader, int placeholder);//0x2CE000
 int(__fastcall* Old_Leader__queued_units)(Leader* leader, int placeholder);
 void* Leader__verify_spell_flagsAddr;
 void __fastcall Leader__verify_spell_flags(Leader* leader, int placeholder);//0x2CE190
 void(__fastcall* Old_Leader__verify_spell_flags)(Leader* leader, int placeholder);
 void* Leader__gatherAddr;
 void __fastcall Leader__gather(Leader* leader, int placeholder);//0x2CE280
 void(__fastcall* Old_Leader__gather)(Leader* leader, int placeholder);
 void* Leader__do_gatherAddr;
 void __fastcall Leader__do_gather(Leader* leader, int placeholder);//0x2CE450
 void(__fastcall* Old_Leader__do_gather)(Leader* leader, int placeholder);
 void* Leader__calc_resource_capsAddr;
 void __fastcall Leader__calc_resource_caps(Leader* leader, int placeholder);//0x2CE900
 void(__fastcall* Old_Leader__calc_resource_caps)(Leader* leader, int placeholder);
 void* Leader__calc_supportAddr;
 void __fastcall Leader__calc_support(Leader* leader, int placeholder, int* support);//0x2CEEA0
 void(__fastcall* Old_Leader__calc_support)(Leader* leader, int placeholder, int* support);
 void* Leader__calc_gatherAddr;
 void __fastcall Leader__calc_gather(Leader* leader, int placeholder, int* resources);//0x2CEEE0
 void(__fastcall* Old_Leader__calc_gather)(Leader* leader, int placeholder, int* resources);
 void* Leader__calc_wall_statsAddr;
 void __fastcall Leader__calc_wall_stats(Leader* leader, int placeholder);//0x2CF7C0
 void(__fastcall* Old_Leader__calc_wall_stats)(Leader* leader, int placeholder);
 void* Leader__calc_unit_statsAddr;
 void __fastcall Leader__calc_unit_stats(Leader* leader, int placeholder);//0x2CF970
 void(__fastcall* Old_Leader__calc_unit_stats)(Leader* leader, int placeholder);
 void* Leader__action_buyAddr;
 void __fastcall Leader__action_buy(Leader* leader, int placeholder, int good, char flags);//0x2CFA20
 void(__fastcall* Old_Leader__action_buy)(Leader* leader, int placeholder, int good, char flags);
 void* Leader__action_sellAddr;
 void __fastcall Leader__action_sell(Leader* leader, int placeholder, int good, char flags);//0x2CFA90
 void(__fastcall* Old_Leader__action_sell)(Leader* leader, int placeholder, int good, char flags);
 void* Leader__tell_embargoAddr;
 void __fastcall Leader__tell_embargo(Leader* leader, int placeholder);//0x2CFAF0
 void(__fastcall* Old_Leader__tell_embargo)(Leader* leader, int placeholder);
 void* Leader__do_buyAddr;
 int __fastcall Leader__do_buy(Leader* leader, int placeholder, int good);//0x2CFBD0
 int(__fastcall* Old_Leader__do_buy)(Leader* leader, int placeholder, int good);
 void* Leader__do_sellAddr;
 int __fastcall Leader__do_sell(Leader* leader, int placeholder, int good);//0x2CFC60
 int(__fastcall* Old_Leader__do_sell)(Leader* leader, int placeholder, int good);
 void* Leader__random_personalityAddr;
 void __fastcall Leader__random_personality(Leader* leader, int placeholder);//0x2CFD00
 void(__fastcall* Old_Leader__random_personality)(Leader* leader, int placeholder);
 void* Leader__ally_diploAddr;
 void __fastcall Leader__ally_diplo(Leader* leader, int placeholder, int whom, Armies* treaty);//0x2D0120
 void(__fastcall* Old_Leader__ally_diplo)(Leader* leader, int placeholder, int whom, Armies* treaty);
 void* Leader__eject_my_shit_from_his_assAddr;
 void __fastcall Leader__eject_my_shit_from_his_ass(Leader* leader, int placeholder, int whom);//0x2D0220
 void(__fastcall* Old_Leader__eject_my_shit_from_his_ass)(Leader* leader, int placeholder, int whom);
 void* Leader__has_agendaAddr;
 int __fastcall Leader__has_agenda(Leader* leader, int placeholder, int whom, int agenda);//0x2D0330
 int(__fastcall* Old_Leader__has_agenda)(Leader* leader, int placeholder, int whom, int agenda);
 void* Leader__agenda_offAddr;
 void __fastcall Leader__agenda_off(Leader* leader, int placeholder, int whom, int agenda);//0x2D0350
 void(__fastcall* Old_Leader__agenda_off)(Leader* leader, int placeholder, int whom, int agenda);
 void* Leader__treaty_offAddr;
 void __fastcall Leader__treaty_off(Leader* leader, int placeholder, int whom, int treaty);//0x2D0370
 void(__fastcall* Old_Leader__treaty_off)(Leader* leader, int placeholder, int whom, int treaty);
 void* Leader__action_rejectAddr;
 void __fastcall Leader__action_reject(Leader* leader, int placeholder, int whom);//0x2D0390
 void(__fastcall* Old_Leader__action_reject)(Leader* leader, int placeholder, int whom);
 void* Leader__action_agreeAddr;
 void __fastcall Leader__action_agree(Leader* leader, int placeholder, int whom);//0x2D03B0
 void(__fastcall* Old_Leader__action_agree)(Leader* leader, int placeholder, int whom);
 void* Leader__action_respondAddr;
 void __fastcall Leader__action_respond(Leader* leader, int placeholder, int whom, int value);//0x2D03C0
 void(__fastcall* Old_Leader__action_respond)(Leader* leader, int placeholder, int whom, int value);
 void* Leader__consider_tributeAddr;
 void __fastcall Leader__consider_tribute(Leader* leader, int placeholder, int whom, int value, int good);//0x2D1360
 void(__fastcall* Old_Leader__consider_tribute)(Leader* leader, int placeholder, int whom, int value, int good);
 void* Leader__notify_dealAddr;
 void __fastcall Leader__notify_deal(Leader* leader, int placeholder, int whom, int treaty);//0x2D13F0
 void(__fastcall* Old_Leader__notify_deal)(Leader* leader, int placeholder, int whom, int treaty);
 void* Leader__action_attackAddr;
 void __fastcall Leader__action_attack(Leader* leader, int placeholder, int whom, int whose, int onoff);//0x2D14E0
 void(__fastcall* Old_Leader__action_attack)(Leader* leader, int placeholder, int whom, int whose, int onoff);
 void* Leader__action_treatyAddr;
 void __fastcall Leader__action_treaty(Leader* leader, int placeholder, int whom, int treaty);//0x2D1570
 void(__fastcall* Old_Leader__action_treaty)(Leader* leader, int placeholder, int whom, int treaty);
 void* Leader__action_clear_allAddr;
 void __fastcall Leader__action_clear_all(Leader* leader, int placeholder, int whom);//0x2D15E0
 void(__fastcall* Old_Leader__action_clear_all)(Leader* leader, int placeholder, int whom);
 void* Leader__action_clear_tributesAddr;
 void __fastcall Leader__action_clear_tributes(Leader* leader, int placeholder, int whom);//0x2D1690
 void(__fastcall* Old_Leader__action_clear_tributes)(Leader* leader, int placeholder, int whom);
 void* Leader__action_demand_tributeAddr;
 void __fastcall Leader__action_demand_tribute(Leader* leader, int placeholder, int whom, int good, int amount);//0x2D1750
 void(__fastcall* Old_Leader__action_demand_tribute)(Leader* leader, int placeholder, int whom, int good, int amount);
 void* Leader__action_offerAddr;
 void __fastcall Leader__action_offer(Leader* leader, int placeholder, int whom, int good, int amount);//0x2D1780
 void(__fastcall* Old_Leader__action_offer)(Leader* leader, int placeholder, int whom, int good, int amount);
 void* Leader__action_splineAddr;
 void __fastcall Leader__action_spline(Leader* leader, int placeholder, SoundGlobal* packet, int whom);//0x2D1850
 void(__fastcall* Old_Leader__action_spline)(Leader* leader, int placeholder, SoundGlobal* packet, int whom);
 void* Leader__action_pingAddr;
 void __fastcall Leader__action_ping(Leader* leader, int placeholder, Coord x, Coord y, int whom);//0x2D18A0
 void(__fastcall* Old_Leader__action_ping)(Leader* leader, int placeholder, Coord x, Coord y, int whom);
 void* Leader__clear_agreeAddr;
 void __fastcall Leader__clear_agree(Leader* leader, int placeholder, int whom);//0x2D1AF0
 void(__fastcall* Old_Leader__clear_agree)(Leader* leader, int placeholder, int whom);
 void* Leader__recapture_capitalAddr;
 void __fastcall Leader__recapture_capital(Leader* leader, int placeholder);//0x2D1BA0
 void(__fastcall* Old_Leader__recapture_capital)(Leader* leader, int placeholder);
 void* Leader__defeat_byAddr;
 void __fastcall Leader__defeat_by(Leader* leader, int placeholder, int whom, int defeat_type);//0x2D1C80
 void(__fastcall* Old_Leader__defeat_by)(Leader* leader, int placeholder,  int whom, int defeat_type);
 void* Leader__blow_up_unitsAddr;
 void __fastcall Leader__blow_up_units(Leader* leader, int placeholder, int whom);//0x2D2170
 void(__fastcall* Old_Leader__blow_up_units)(Leader* leader, int placeholder, int whom);
 void* Leader__blow_up_buildingsAddr;
 void __fastcall Leader__blow_up_buildings(Leader* leader, int placeholder);//0x2D22B0
 void(__fastcall* Old_Leader__blow_up_buildings)(Leader* leader, int placeholder);
 void* Leader__blow_up_towersAddr;
 void __fastcall Leader__blow_up_towers(Leader* leader, int placeholder, int whom);//0x2D2310
 void(__fastcall* Old_Leader__blow_up_towers)(Leader* leader, int placeholder, int whom);
 void* Leader__set_diffAddr;
 void __fastcall Leader__set_diff(Leader* leader, int placeholder, int diff);//0x2D2470
 void(__fastcall* Old_Leader__set_diff)(Leader* leader, int placeholder, int diff);
 void* Leader__fix_tech_flagsAddr;
 void __fastcall Leader__fix_tech_flags(Leader* leader, int placeholder);//0x2D2480
 void(__fastcall* Old_Leader__fix_tech_flags)(Leader* leader, int placeholder);
 void* Leader__set_ageAddr;
 void __fastcall Leader__set_age(Leader* leader, int placeholder, int newage);//0x2D25A0
 void(__fastcall* Old_Leader__set_age)(Leader* leader, int placeholder, int newage);
 void* Leader__set_epochAddr;
 void __fastcall Leader__set_epoch(Leader* leader, int placeholder, int cat, int newepoch);//0x2D26F0
 void(__fastcall* Old_Leader__set_epoch)(Leader* leader, int placeholder, int cat, int newepoch);
 void* Leader__lose_techAddr;
 void __fastcall Leader__lose_tech(Leader* leader, int placeholder, TypeIndex t);//0x2D2850
 void(__fastcall* Old_Leader__lose_tech)(Leader* leader, int placeholder, TypeIndex t);
 void* Leader__pay_dowAddr;
 int __fastcall Leader__pay_dow(Leader* leader, int placeholder, int whom, int treaty);//0x2D2B10
 int(__fastcall* Old_Leader__pay_dow)(Leader* leader, int placeholder, int whom, int treaty);
 void* Leader__LeaderAddr;
 void __fastcall Leader__Leader(Leader* leader, int placeholder, int a2);//0x2D2BF0
 void(__fastcall* Old_Leader__Leader)(Leader* leader, int placeholder, int a2);
 void* LeaderOut__issue_chatAddr;
 void __fastcall LeaderOut__issue_chat(LeaderOut* leaderOut, int placeholder, String* string, int flags);//0x2D2C50
 void(__fastcall* Old_LeaderOut__issue_chat)(LeaderOut* leaderOut, int placeholder, String* string, int flags);
 void* LeaderOut__issue_pingAddr;
 void __fastcall LeaderOut__issue_ping(LeaderOut* leaderOut, int placeholder, Coord x, Coord y);//0x2D3240
 void(__fastcall* Old_LeaderOut__issue_ping)(LeaderOut* leaderOut, int placeholder, Coord x, Coord y);
 void* LeaderOut__display_chatAddr;
 void __fastcall LeaderOut__display_chat(LeaderOut* leaderOut, int placeholder, const String* string, int play2, int prepend_sender_name, int play_sound);//0x2D3320
 void(__fastcall* Old_LeaderOut__display_chat)(LeaderOut* leaderOut, int placeholder, const String* string, int play2, int prepend_sender_name, int play_sound);
 void* LeaderOut__say_meetAddr;
 void __fastcall LeaderOut__say_meet(LeaderOut* leaderOut, int placeholder, int whom, Coord x, Coord y);//0x2D3570
 void(__fastcall* Old_LeaderOut__say_meet)(LeaderOut* leaderOut, int placeholder, int whom, Coord x, Coord y);
 void* LeaderOut__warn_resourcesAddr;
 void __fastcall LeaderOut__warn_resources(LeaderOut* leaderOut, int placeholder, int t, int whom, String* city, int good);//0x2D3650
 void(__fastcall* Old_LeaderOut__warn_resources)(LeaderOut* leaderOut, int placeholder, int t, int whom, String* city, int good);
 void* LeaderOut__issue_sellAddr;
 void __fastcall LeaderOut__issue_sell(LeaderOut* leaderOut, int placeholder, int good, int flags);//0x2D3EB0
 void(__fastcall* Old_LeaderOut__issue_sell)(LeaderOut* leaderOut, int placeholder, int good, int flags);
 void* LeaderOut__issue_buyAddr;
 void __fastcall LeaderOut__issue_buy(LeaderOut* leaderOut, int placeholder, int good, int flags);//0x2D3EF0
 void(__fastcall* Old_LeaderOut__issue_buy)(LeaderOut* leaderOut, int placeholder, int good, int flags);
 void* LeaderOut__issue_propose_attackAddr;
 void __fastcall LeaderOut__issue_propose_attack(LeaderOut* leaderOut, int placeholder, int whom, int whose, int onoff);//0x2D3F30
 void(__fastcall* Old_LeaderOut__issue_propose_attack)(LeaderOut* leaderOut, int placeholder, int whom, int whose, int onoff);
 void* LeaderOut__issue_demand_tributeAddr;
 void __fastcall LeaderOut__issue_demand_tribute(LeaderOut* leaderOut, int placeholder, int whom, int good, int amount);//0x2D3F60
 void(__fastcall* Old_LeaderOut__issue_demand_tribute)(LeaderOut* leaderOut, int placeholder, int whom, int good, int amount);
 void* LeaderOut__issue_tributeAddr;
 void __fastcall LeaderOut__issue_tribute(LeaderOut* leaderOut, int placeholder, int whom, int good, int amount);//0x2D3F90
 void(__fastcall* Old_LeaderOut__issue_tribute)(LeaderOut* leaderOut, int placeholder, int whom, int good, int amount);
 void* LeaderOut__issue_rejectAddr;
 void __fastcall LeaderOut__issue_reject(LeaderOut* leaderOut, int placeholder, int whom);//0x2D3FF0
 void(__fastcall* Old_LeaderOut__issue_reject)(LeaderOut* leaderOut, int placeholder, int whom);
 void* LeaderOut__issue_acceptAddr;
 void __fastcall LeaderOut__issue_accept(LeaderOut* leaderOut, int placeholder, int whom);//0x2D4010
 void(__fastcall* Old_LeaderOut__issue_accept)(LeaderOut* leaderOut, int placeholder, int whom);
 void* LeaderOut__issue_clear_allAddr;
 void __fastcall LeaderOut__issue_clear_all(LeaderOut* leaderOut, int placeholder, int whom);//0x2D4040
 void(__fastcall* Old_LeaderOut__issue_clear_all)(LeaderOut* leaderOut, int placeholder, int whom);
 void* LeaderOut__issue_clear_tributesAddr;
 void __fastcall LeaderOut__issue_clear_tributes(LeaderOut* leaderOut, int placeholder, int whom);//0x2D4060
 void(__fastcall* Old_LeaderOut__issue_clear_tributes)(LeaderOut* leaderOut, int placeholder, int whom);
 void* LeaderOut__issue_declareAddr;
 void __fastcall LeaderOut__issue_declare(LeaderOut* leaderOut, int placeholder, int whom, int treaty);//0x2D4080
 void(__fastcall* Old_LeaderOut__issue_declare)(LeaderOut* leaderOut, int placeholder, int whom, int treaty);
 void* LeaderOut__issue_treatyAddr;
 void __fastcall LeaderOut__issue_treaty(LeaderOut* leaderOut, int placeholder, int whom, int treaty);//0x2D40F0
 void(__fastcall* Old_LeaderOut__issue_treaty)(LeaderOut* leaderOut, int placeholder, int whom, int treaty);
 void* LeaderData__strong_vsAddr;
 void __fastcall LeaderData__strong_vs(LeaderData* leaderData, int placeholder, String* string, int t);//0x2D4110
 void(__fastcall* Old_LeaderData__strong_vs)(LeaderData* leaderData, int placeholder, String* string, int t);
 void* LeaderData__weak_vsAddr;
 void __fastcall LeaderData__weak_vs(LeaderData* leaderData, int placeholder, String* string, int t);//0x2D4760
 void(__fastcall* Old_LeaderData__weak_vs)(LeaderData* leaderData, int placeholder, String* string, int t);
 void* LeaderData__counter_unitAddr;
 int __fastcall LeaderData__counter_unit(LeaderData* leaderData, int placeholder, int t, int* alt_t);//0x2D4CB0
 int(__fastcall* Old_LeaderData__counter_unit)(LeaderData* leaderData, int placeholder, int t, int* alt_t);
 void* LeaderData__care_if_cost_discoveredAddr;
 int __fastcall LeaderData__care_if_cost_discovered(LeaderData* leaderData, int placeholder, int t);//0x2D51A0
 int(__fastcall* Old_LeaderData__care_if_cost_discovered)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__locked_transportAddr;
 int __fastcall LeaderData__locked_transport(LeaderData* leaderData, int placeholder);//0x2D5230
 int(__fastcall* Old_LeaderData__locked_transport)(LeaderData* leaderData, int placeholder);
 void* LeaderData__scale_tributeAddr;
 int __fastcall LeaderData__scale_tribute(LeaderData* leaderData, int placeholder, int amount);//0x2D5240
 int(__fastcall* Old_LeaderData__scale_tribute)(LeaderData* leaderData, int placeholder, int amount);
 void* LeaderData__get_nuke_embargoAddr;
 int __fastcall LeaderData__get_nuke_embargo(LeaderData* leaderData, int placeholder);//0x2D52C0
 int(__fastcall* Old_LeaderData__get_nuke_embargo)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_my_nuke_embargoAddr;
 int __fastcall LeaderData__get_my_nuke_embargo(LeaderData* leaderData, int placeholder);//0x2D5350
 int(__fastcall* Old_LeaderData__get_my_nuke_embargo)(LeaderData* leaderData, int placeholder);
 void* LeaderData__can_nukeAddr;
 BOOL __fastcall LeaderData__can_nuke(LeaderData* leaderData, int placeholder);//0x2D53C0
 BOOL(__fastcall* Old_LeaderData__can_nuke)(LeaderData* leaderData, int placeholder);
 void* LeaderData__can_buy_sellAddr;
 BOOL __fastcall LeaderData__can_buy_sell(LeaderData* leaderData, int placeholder);//0x2D53E0
 BOOL(__fastcall* Old_LeaderData__can_buy_sell)(LeaderData* leaderData, int placeholder);
 void* LeaderData__has_marketAddr;
 int __fastcall LeaderData__has_market(LeaderData* leaderData, int placeholder);//0x2D5410
 int(__fastcall* Old_LeaderData__has_market)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_reg_buildingsAddr;
 int __fastcall LeaderData__get_reg_buildings(LeaderData* leaderData, int placeholder, int reg, int t2);//0x2D5470
 int(__fastcall* Old_LeaderData__get_reg_buildings)(LeaderData* leaderData, int placeholder, int reg, int t2);
 void* LeaderData__has_capitalAddr;
 BOOL __fastcall LeaderData__has_capital(LeaderData* leaderData, int placeholder, int* whose);//0x2D54C0
 BOOL(__fastcall* Old_LeaderData__has_capital)(LeaderData* leaderData, int placeholder, int* whose);
 void* LeaderData__calc_city_resourcesAddr;
 void __fastcall LeaderData__calc_city_resources(LeaderData* leaderData, int placeholder, int* resources, int* bonus, Coord x, Coord y, int city);//0x2D5530
 void(__fastcall* Old_LeaderData__calc_city_resources)(LeaderData* leaderData, int placeholder, int* resources, int* bonus, Coord x, Coord y, int city);
 void* LeaderData__any_proposalsAddr;
 int __fastcall LeaderData__any_proposals(LeaderData* leaderData, int placeholder, int whom);//0x2D5AD0
 int(__fastcall* Old_LeaderData__any_proposals)(LeaderData* leaderData, int placeholder, int whom);
 void* LeaderData__is_rejectAddr;
 BOOL __fastcall LeaderData__is_reject(LeaderData* leaderData, int placeholder, int whom);//0x2D5B30
 BOOL(__fastcall* Old_LeaderData__is_reject)(LeaderData* leaderData, int placeholder, int whom);
 void* LeaderData__is_any_offerAddr;
 int __fastcall LeaderData__is_any_offer(LeaderData* leaderData, int placeholder, int whom);//0x2D5B50
 int(__fastcall* Old_LeaderData__is_any_offer)(LeaderData* leaderData, int placeholder, int whom);
 void* LeaderData__is_agreeAddr;
 BOOL __fastcall LeaderData__is_agree(LeaderData* leaderData, int placeholder, int whom);//0x2D5B70
 BOOL(__fastcall* Old_LeaderData__is_agree)(LeaderData* leaderData, int placeholder, int whom);
 void* LeaderData__is_tribute_periodAddr;
 int __fastcall LeaderData__is_tribute_period(LeaderData* leaderData, int placeholder, int whom);//0x2D5B90
 int(__fastcall* Old_LeaderData__is_tribute_period)(LeaderData* leaderData, int placeholder, int whom);
 void* LeaderData__afford_dowAddr;
 int __fastcall LeaderData__afford_dow(LeaderData* leaderData, int placeholder, int whom, int treaty, int* which);//0x2D5CE0
 int(__fastcall* Old_LeaderData__afford_dow)(LeaderData* leaderData, int placeholder, int whom, int treaty, int* which);
 void* LeaderData__get_mvp_scoreAddr;
 int __fastcall LeaderData__get_mvp_score(LeaderData* leaderData, int placeholder);//0x2D5DE0
 int(__fastcall* Old_LeaderData__get_mvp_score)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_enemy_unbuilt_wonder_valueAddr;
 int __fastcall LeaderData__get_enemy_unbuilt_wonder_value(LeaderData* leaderData, int placeholder);//0x2D5E40
 int(__fastcall* Old_LeaderData__get_enemy_unbuilt_wonder_value)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_unbuilt_wonder_valueAddr;
 int __fastcall LeaderData__get_unbuilt_wonder_value(LeaderData* leaderData, int placeholder);//0x2D5EE0
 int(__fastcall* Old_LeaderData__get_unbuilt_wonder_value)(LeaderData* leaderData, int placeholder);
 void* LeaderData__can_see_bordersAddr;
 BOOL __fastcall LeaderData__can_see_borders(LeaderData* leaderData, int placeholder, int whom, int for_minimap);//0x2D5F60
 BOOL(__fastcall* Old_LeaderData__can_see_borders)(LeaderData* leaderData, int placeholder, int whom, int for_minimap);
 void* LeaderData__get_total_citiesAddr;
 int __fastcall LeaderData__get_total_cities(LeaderData* leaderData, int placeholder);//0x2D6060
 int(__fastcall* Old_LeaderData__get_total_cities)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_city_limitAddr;
 int __fastcall LeaderData__get_city_limit(LeaderData* leaderData, int placeholder);//0x2D6130
 int(__fastcall* Old_LeaderData__get_city_limit)(LeaderData* leaderData, int placeholder);
 void* LeaderData__is_boomerAddr;
 int __fastcall LeaderData__is_boomer(LeaderData* leaderData, int placeholder);//0x2D6190
 int(__fastcall* Old_LeaderData__is_boomer)(LeaderData* leaderData, int placeholder);
 void* LeaderData__is_rusherAddr;
 int __fastcall LeaderData__is_rusher(LeaderData* leaderData, int placeholder);//0x2D61F0
 int(__fastcall* Old_LeaderData__is_rusher)(LeaderData* leaderData, int placeholder);
 void* LeaderData__num_alliesAddr;
 int __fastcall LeaderData__num_allies(LeaderData* leaderData, int placeholder);//0x2D6250
 int(__fastcall* Old_LeaderData__num_allies)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_team_terrAddr;
 int __fastcall LeaderData__get_team_terr(LeaderData* leaderData, int placeholder);//0x2D62E0
 int(__fastcall* Old_LeaderData__get_team_terr)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_team_economicAddr;
 int __fastcall LeaderData__get_team_economic(LeaderData* leaderData, int placeholder);//0x2D6400
 int(__fastcall* Old_LeaderData__get_team_economic)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_economicAddr;
 int __fastcall LeaderData__get_economic(LeaderData* leaderData, int placeholder);//0x2D6490
 int(__fastcall* Old_LeaderData__get_economic)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_team_scoreAddr;
 int __fastcall LeaderData__get_team_score(LeaderData* leaderData, int placeholder);//0x2D6520
 int(__fastcall* Old_LeaderData__get_team_score)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_mod_resource_capAddr;
 int __fastcall LeaderData__get_mod_resource_cap(LeaderData* leaderData, int placeholder, int good);//0x2D65B0
 int(__fastcall* Old_LeaderData__get_mod_resource_cap)(LeaderData* leaderData, int placeholder, int good);
 void* LeaderData__get_econ_modAddr;
 void __fastcall LeaderData__get_econ_mod(LeaderData* leaderData, int placeholder);//0x2D6660
 void(__fastcall* Old_LeaderData__get_econ_mod)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_gather_handicapAddr;
 int __fastcall LeaderData__get_gather_handicap(LeaderData* leaderData, int placeholder);//0x2D66A0
 int(__fastcall* Old_LeaderData__get_gather_handicap)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_handicap_levelAddr;
 int __fastcall LeaderData__get_handicap_level(LeaderData* leaderData, int placeholder);//0x2D6740
 int(__fastcall* Old_LeaderData__get_handicap_level)(LeaderData* leaderData, int placeholder);
 void* LeaderData__walk_dataAddr;
 void __fastcall LeaderData__walk_data(LeaderData* leaderData, int placeholder, DataWalk* walk);//0x2D6750
 void(__fastcall* Old_LeaderData__walk_data)(LeaderData* leaderData, int placeholder, DataWalk* walk);
 void* LeaderData__get_govs_takenAddr;
 int __fastcall LeaderData__get_govs_taken(LeaderData* leaderData, int placeholder);//0x2D69F0
 int(__fastcall* Old_LeaderData__get_govs_taken)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_govAddr;
 int __fastcall LeaderData__get_gov(LeaderData* leaderData, int placeholder);//0x2D6A20
 int(__fastcall* Old_LeaderData__get_gov)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_key_typeAddr;
 int __fastcall LeaderData__get_key_type(LeaderData* leaderData, int placeholder, int opt, TypeIndex t);//0x2D6AC0
 int(__fastcall* Old_LeaderData__get_key_type)(LeaderData* leaderData, int placeholder, int opt, TypeIndex t);
 void* LeaderData__get_city_upgrade_levelAddr;
 int __fastcall LeaderData__get_city_upgrade_level(LeaderData* leaderData, int placeholder, int t);//0x2D6D90
 int(__fastcall* Old_LeaderData__get_city_upgrade_level)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__get_merchants_levelAddr;
 int __fastcall LeaderData__get_merchants_level(LeaderData* leaderData, int placeholder);//0x2D6DC0
 int(__fastcall* Old_LeaderData__get_merchants_level)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_taxationAddr;
 int __fastcall LeaderData__get_taxation(LeaderData* leaderData, int placeholder);//0x2D6E20
 int(__fastcall* Old_LeaderData__get_taxation)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_fishermenAddr;
 int __fastcall LeaderData__get_fishermen(LeaderData* leaderData, int placeholder);//0x2D6E80
 int(__fastcall* Old_LeaderData__get_fishermen)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_lowest_epochAddr;
 int __fastcall LeaderData__get_lowest_epoch(LeaderData* leaderData, int placeholder, int* which);//0x2D6ED0
 int(__fastcall* Old_LeaderData__get_lowest_epoch)(LeaderData* leaderData, int placeholder, int* which);
 void* LeaderData__get_highest_epochAddr;
 int __fastcall LeaderData__get_highest_epoch(LeaderData* leaderData, int placeholder, int* which);//0x2D6F30
 int(__fastcall* Old_LeaderData__get_highest_epoch)(LeaderData* leaderData, int placeholder, int* which);
 void* LeaderData__compute_epochAddr;
 int __fastcall LeaderData__compute_epoch(LeaderData* leaderData, int placeholder, int tech_cat);//0x2D6F80
 int(__fastcall* Old_LeaderData__compute_epoch)(LeaderData* leaderData, int placeholder, int tech_cat);
 void* LeaderData__get_epoch_baseAddr;
 int __fastcall LeaderData__get_epoch_base(LeaderData* leaderData, int placeholder, int tech_cat);//0x2D6FF0
 int(__fastcall* Old_LeaderData__get_epoch_base)(LeaderData* leaderData, int placeholder, int tech_cat);
 void* LeaderData__special_preqAddr;
 int __fastcall LeaderData__special_preq(LeaderData* leaderData, int placeholder, int t, int* t3);//0x2D7030
 int(__fastcall* Old_LeaderData__special_preq)(LeaderData* leaderData, int placeholder, int t, int* t3);
 void* LeaderData__techs_per_ageAddr;
 int __fastcall LeaderData__techs_per_age(LeaderData* leaderData, int placeholder, int t);//0x2D7280
 int(__fastcall* Old_LeaderData__techs_per_age)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__starting_ageAddr;
 unsigned int __fastcall LeaderData__starting_age(LeaderData* leaderData, int placeholder);//0x2D7320
 unsigned int(__fastcall* Old_LeaderData__starting_age)(LeaderData* leaderData, int placeholder);
 void* LeaderData__all_techsAddr;
 int __fastcall LeaderData__all_techs(LeaderData* leaderData, int placeholder);//0x2D7370
 int(__fastcall* Old_LeaderData__all_techs)(LeaderData* leaderData, int placeholder);
 void* LeaderData__LeaderDataAddr;
 void __fastcall LeaderData__LeaderData(LeaderData* leaderData, int placeholder);//0x2D7540
 void(__fastcall* Old_LeaderData__LeaderData)(LeaderData* leaderData, int placeholder);
 void* LeaderData__has_rare_conquestAddr;
 BOOL __fastcall LeaderData__has_rare_conquest(LeaderData* leaderData, int placeholder, int good);//0x2D9320
 BOOL(__fastcall* Old_LeaderData__has_rare_conquest)(LeaderData* leaderData, int placeholder, int good);
 void* LeaderData__is_shared_teamAddr;
 int __fastcall LeaderData__is_shared_team(LeaderData* leaderData, int placeholder, int whom);//0x2D9360
 int(__fastcall* Old_LeaderData__is_shared_team)(LeaderData* leaderData, int placeholder, int whom);
 void* LeaderData__tribe_can_typeAddr;
 int __fastcall LeaderData__tribe_can_type(LeaderData* leaderData, int placeholder, const Type* p);//0x2D9410
 int(__fastcall* Old_LeaderData__tribe_can_type)(LeaderData* leaderData, int placeholder, const Type* p);
 void* LeaderDataEncrypt__log_dataAddr;
 void __fastcall LeaderDataEncrypt__log_data(LeaderDataEncrypt* leaderDataEncrypt, int placeholder, Log* log);//0x2D94B0
 void(__fastcall* Old_LeaderDataEncrypt__log_data)(LeaderDataEncrypt* leaderDataEncrypt, int placeholder, Log* log);
 void* LeaderDataEncrypt__initAddr;
 void __fastcall LeaderDataEncrypt__init(LeaderDataEncrypt* leaderDataEncrypt, int placeholder);//0x2D9C60
 void(__fastcall* Old_LeaderDataEncrypt__init)(LeaderDataEncrypt* leaderDataEncrypt, int placeholder);
 void* Leader__new_rareAddr;
 void __fastcall Leader__new_rare(Leader* leader, int placeholder, int ox);//0x2D9E70
 void(__fastcall* Old_Leader__new_rare)(Leader* leader, int placeholder, int ox);
 void* LeaderData__get_fort_bordersAddr;
 int __fastcall LeaderData__get_fort_borders(LeaderData* leaderData, int placeholder);//0x2D9FB0
 int(__fastcall* Old_LeaderData__get_fort_borders)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_targetAddr;
 int __fastcall LeaderData__get_target(LeaderData* leaderData, int placeholder);//0x2DA000
 int(__fastcall* Old_LeaderData__get_target)(LeaderData* leaderData, int placeholder);
 void* Leader__tech_availAddr;
 int __fastcall Leader__tech_avail(Leader* leader, int placeholder, TypeIndex t, int o);//0x2DA060
 int(__fastcall* Old_Leader__tech_avail)(Leader* leader, int placeholder, TypeIndex t, int o);
 void* LeaderData__get_support_countAddr;
 int __fastcall LeaderData__get_support_count(LeaderData* leaderData, int placeholder, int t);//0x2DA110
 int(__fastcall* Old_LeaderData__get_support_count)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__get_unbuilt_wondersAddr;
 int __fastcall LeaderData__get_unbuilt_wonders(LeaderData* leaderData, int placeholder);//0x2DA290
 int(__fastcall* Old_LeaderData__get_unbuilt_wonders)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_team_wondersAddr;
 int __fastcall LeaderData__get_team_wonders(LeaderData* leaderData, int placeholder);//0x2DA2D0
 int(__fastcall* Old_LeaderData__get_team_wonders)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_team_unbuilt_wondersAddr;
 int __fastcall LeaderData__get_team_unbuilt_wonders(LeaderData* leaderData, int placeholder);//0x2DA3A0
 int(__fastcall* Old_LeaderData__get_team_unbuilt_wonders)(LeaderData* leaderData, int placeholder);
 void* LeaderData__has_unbuilt_wonderAddr;
 int __fastcall LeaderData__has_unbuilt_wonder(LeaderData* leaderData, int placeholder, int t);//0x2DA470
 int(__fastcall* Old_LeaderData__has_unbuilt_wonder)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__team_has_unbuilt_wonderAddr;
 int __fastcall LeaderData__team_has_unbuilt_wonder(LeaderData* leaderData, int placeholder, int t);//0x2DA4F0
 int(__fastcall* Old_LeaderData__team_has_unbuilt_wonder)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__cost_factor_dowAddr;
 int __fastcall LeaderData__cost_factor_dow(LeaderData* leaderData, int placeholder, int whom, int t);//0x2DA590
 int(__fastcall* Old_LeaderData__cost_factor_dow)(LeaderData* leaderData, int placeholder, int whom, int t);
 void* LeaderData__calc_science_discountAddr;
 int __fastcall LeaderData__calc_science_discount(LeaderData* leaderData, int placeholder, unsigned __int32 t, int cost);//0x2DA630
 int(__fastcall* Old_LeaderData__calc_science_discount)(LeaderData* leaderData, int placeholder, unsigned __int32 t, int cost);
 void* LeaderData__get_handicapAddr;
 int __fastcall LeaderData__get_handicap(LeaderData* leaderData, int placeholder);//0x2DA740
 int(__fastcall* Old_LeaderData__get_handicap)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_ships_speed_upgradeAddr;
 int __fastcall LeaderData__get_ships_speed_upgrade(LeaderData* leaderData, int placeholder);//0x2DA800
 int(__fastcall* Old_LeaderData__get_ships_speed_upgrade)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_troops_speed_upgradeAddr;
 int __fastcall LeaderData__get_troops_speed_upgrade(LeaderData* leaderData, int placeholder);//0x2DA850
 int(__fastcall* Old_LeaderData__get_troops_speed_upgrade)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_vehicle_speed_upgradeAddr;
 int __fastcall LeaderData__get_vehicle_speed_upgrade(LeaderData* leaderData, int placeholder);//0x2DA8A0
 int(__fastcall* Old_LeaderData__get_vehicle_speed_upgrade)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_enemy_wonder_valueAddr;
 int __fastcall LeaderData__get_enemy_wonder_value(LeaderData* leaderData, int placeholder);//0x2DA8F0
 int(__fastcall* Old_LeaderData__get_enemy_wonder_value)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_team_wonder_valueAddr;
 int __fastcall LeaderData__get_team_wonder_value(LeaderData* leaderData, int placeholder);//0x2DA990
 int(__fastcall* Old_LeaderData__get_team_wonder_value)(LeaderData* leaderData, int placeholder);
 void* Leader__inc_hit_eventAddr;
 void __fastcall Leader__inc_hit_event(Leader* leader, int placeholder, __int16 num);//0x2DAA30
 void(__fastcall* Old_Leader__inc_hit_event)(Leader* leader, int placeholder, __int16 num);
 void* Leader__inc_damage_eventAddr;
 void __fastcall Leader__inc_damage_event(Leader* leader, int placeholder, __int16 num);//0x2DAA50
 void(__fastcall* Old_Leader__inc_damage_event)(Leader* leader, int placeholder, __int16 num);
 void* LeaderData__get_nameAddr;
 const String* __fastcall LeaderData__get_name(LeaderData* leaderData, int placeholder, String* result);//0x2DAA70
 const String* (__fastcall* Old_LeaderData__get_name)(LeaderData* leaderData, int placeholder, String* result);
 void* Leader__inc_kill_eventAddr;
 void __fastcall Leader__inc_kill_event(Leader* leader, int placeholder, __int16 num);//0x2DAB10
 void(__fastcall* Old_Leader__inc_kill_event)(Leader* leader, int placeholder, __int16 num);
 void* Leader__inc_death_eventAddr;
 void __fastcall Leader__inc_death_event(Leader* leader, int placeholder, __int16 num);//0x2DAB30
 void(__fastcall* Old_Leader__inc_death_event)(Leader* leader, int placeholder, __int16 num);
 void* Leader__action_declareAddr;
 int __fastcall Leader__action_declare(Leader* leader, int placeholder, int which, int* treaty, int free, Leaders* force);//0x2DAB50
 int(__fastcall* Old_Leader__action_declare)(Leader* leader, int placeholder, int which, int* treaty, int free, Leaders* force);
 void* LeaderData__get_building_speed_upgradeAddr;
 int __fastcall LeaderData__get_building_speed_upgrade(LeaderData* leaderData, int placeholder);//0x2DAE90
 int(__fastcall* Old_LeaderData__get_building_speed_upgrade)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_building_hp_upgradeAddr;
 int __fastcall LeaderData__get_building_hp_upgrade(LeaderData* leaderData, int placeholder);//0x2DAEE0
 int(__fastcall* Old_LeaderData__get_building_hp_upgrade)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_fort_losAddr;
 int __fastcall LeaderData__get_fort_los(LeaderData* leaderData, int placeholder);//0x2DAF30
 int(__fastcall* Old_LeaderData__get_fort_los)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_tower_fort_losAddr;
 int __fastcall LeaderData__get_tower_fort_los(LeaderData* leaderData, int placeholder);//0x2DAF80
 int(__fastcall* Old_LeaderData__get_tower_fort_los)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_fort_rangeAddr;
 int __fastcall LeaderData__get_fort_range(LeaderData* leaderData, int placeholder);//0x2DAFB0
 int(__fastcall* Old_LeaderData__get_fort_range)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_tower_fort_rangeAddr;
 int __fastcall LeaderData__get_tower_fort_range(LeaderData* leaderData, int placeholder);//0x2DB000
 int(__fastcall* Old_LeaderData__get_tower_fort_range)(LeaderData* leaderData, int placeholder);
 void* LeaderData__calc_resource_bonusesAddr;
 void __fastcall LeaderData__calc_resource_bonuses(LeaderData* leaderData, int placeholder, int* resources);//0x2DB030
 void(__fastcall* Old_LeaderData__calc_resource_bonuses)(LeaderData* leaderData, int placeholder, int* resources);
 void* LeaderData__get_universityAddr;
 int __fastcall LeaderData__get_university(LeaderData* leaderData, int placeholder);//0x2DB1F0
 int(__fastcall* Old_LeaderData__get_university)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_farm_limitAddr;
 int __fastcall LeaderData__get_farm_limit(LeaderData* leaderData, int placeholder);//0x2DB270
 int(__fastcall* Old_LeaderData__get_farm_limit)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_fort_garrisonAddr;
 int __fastcall LeaderData__get_fort_garrison(LeaderData* leaderData, int placeholder);//0x2DB2F0
 int(__fastcall* Old_LeaderData__get_fort_garrison)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_granaryAddr;
 int __fastcall LeaderData__get_granary(LeaderData* leaderData, int placeholder);//0x2DB340
 int(__fastcall* Old_LeaderData__get_granary)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_lumbermillAddr;
 int __fastcall LeaderData__get_lumbermill(LeaderData* leaderData, int placeholder);//0x2DB3A0
 int(__fastcall* Old_LeaderData__get_lumbermill)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_smelterAddr;
 int __fastcall LeaderData__get_smelter(LeaderData* leaderData, int placeholder);//0x2DB3F0
 int(__fastcall* Old_LeaderData__get_smelter)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_temple_bordersAddr;
 int __fastcall LeaderData__get_temple_borders(LeaderData* leaderData, int placeholder);//0x2DB440
 int(__fastcall* Old_LeaderData__get_temple_borders)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_temple_hpAddr;
 int __fastcall LeaderData__get_temple_hp(LeaderData* leaderData, int placeholder);//0x2DB470
 int(__fastcall* Old_LeaderData__get_temple_hp)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_temple_rangeAddr;
 int __fastcall LeaderData__get_temple_range(LeaderData* leaderData, int placeholder, int check_tikal);//0x2DB4A0
 int(__fastcall* Old_LeaderData__get_temple_range)(LeaderData* leaderData, int placeholder, int check_tikal);
 void* LeaderData__researchingAddr;
 int __fastcall LeaderData__researching(LeaderData* leaderData, int placeholder, int t, int ox);//0x711F0
 int(__fastcall* Old_LeaderData__researching)(LeaderData* leaderData, int placeholder, int t, int ox);
 void* LeaderData__get_wondersAddr;
 int __fastcall LeaderData__get_wonders(LeaderData* leaderData, int placeholder);//0x2DB680
 int(__fastcall* Old_LeaderData__get_wonders)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_first_libraryAddr;
 int __fastcall LeaderData__get_first_library(LeaderData* leaderData, int placeholder);//0x2DB6C0
 int(__fastcall* Old_LeaderData__get_first_library)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_radiusAddr;
 int __fastcall LeaderData__get_radius(LeaderData* leaderData, int placeholder, int t);//0x2DB790
 int(__fastcall* Old_LeaderData__get_radius)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__has_preqAddr;
 BOOL __fastcall LeaderData__has_preq(LeaderData* leaderData, int placeholder, int t);//0x2DB810
 BOOL(__fastcall* Old_LeaderData__has_preq)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__check_predecessorAddr;
 int __fastcall LeaderData__check_predecessor(LeaderData* leaderData, int placeholder, int t);//0x2DBCB0
 int(__fastcall* Old_LeaderData__check_predecessor)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__type_eligibleAddr;
 int __fastcall LeaderData__type_eligible(LeaderData* leaderData, int placeholder, signed __int32 t, int check_obs);//0x2DBD10
 int(__fastcall* Old_LeaderData__type_eligible)(LeaderData* leaderData, int placeholder, signed __int32 t, int check_obs);
 void* LeaderData__calc_market_pricesAddr;
 void __fastcall LeaderData__calc_market_prices(LeaderData* leaderData, int placeholder, int good, int* buy, int* sell);//0x2DC2A0
 void(__fastcall* Old_LeaderData__calc_market_prices)(LeaderData* leaderData, int placeholder, int good, int* buy, int* sell);
 void* Leader__calc_pop_capAddr;
 int __fastcall Leader__calc_pop_cap(Leader* leader, int placeholder);//0x2DC490
 int(__fastcall* Old_Leader__calc_pop_cap)(Leader* leader, int placeholder);
 void* Leader__lost_a_cityAddr;
 void __fastcall Leader__lost_a_city(Leader* leader, int placeholder, int capital, int mine, int whom);//0x2DC6D0
 void(__fastcall* Old_Leader__lost_a_city)(Leader* leader, int placeholder, int capital, int mine, int whom);
 void* Leader__lost_capitalAddr;
 void __fastcall Leader__lost_capital(Leader* leader, int placeholder, int whom);//0x2DC870
 void(__fastcall* Old_Leader__lost_capital)(Leader* leader, int placeholder, int whom);
 void* Leader__lose_buildingAddr;
 void __fastcall Leader__lose_building(Leader* leader, int placeholder, TypeIndex t);//0x2DCA20
 void(__fastcall* Old_Leader__lose_building)(Leader* leader, int placeholder, TypeIndex t);
 void* LeaderData__get_caravan_limitAddr;
 int __fastcall LeaderData__get_caravan_limit(LeaderData* leaderData, int placeholder, int routes);//0x2DCA50
 int(__fastcall* Old_LeaderData__get_caravan_limit)(LeaderData* leaderData, int placeholder, int routes);
 void* LeaderData__get_gov_heroAddr;
 int __fastcall LeaderData__get_gov_hero(LeaderData* leaderData, int placeholder, int t);//0x2E0600
 int(__fastcall* Old_LeaderData__get_gov_hero)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__get_buildingsAddr;
 int __fastcall LeaderData__get_buildings(LeaderData* leaderData, int placeholder, int t2, int strict);//0x2E0680
 int(__fastcall* Old_LeaderData__get_buildings)(LeaderData* leaderData, int placeholder, int t2, int strict);
 void* Leader__gain_buildingAddr;
 void __fastcall Leader__gain_building(Leader* leader, int placeholder, TypeIndex t);//0x2E06C0
 void(__fastcall* Old_Leader__gain_building)(Leader* leader, int placeholder, TypeIndex t);
 void* LeaderData__get_building_citiesAddr;
 int __fastcall LeaderData__get_building_cities(LeaderData* leaderData, int placeholder, int t2, int check_assimilated);//0x2E06F0
 int(__fastcall* Old_LeaderData__get_building_cities)(LeaderData* leaderData, int placeholder, int t2, int check_assimilated);
 void* LeaderData__get_decoy_timeAddr;
 int __fastcall LeaderData__get_decoy_time(LeaderData* leaderData, int placeholder);//0x2E0750
 int(__fastcall* Old_LeaderData__get_decoy_time)(LeaderData* leaderData, int placeholder);
 void* LeaderData__has_rareAddr;
 BOOL __fastcall LeaderData__has_rare(LeaderData* leaderData, int placeholder, int good);//0x2E0770
 BOOL(__fastcall* Old_LeaderData__has_rare)(LeaderData* leaderData, int placeholder, int good);
 void* LeaderData__get_unitsAddr;
 int __fastcall LeaderData__get_units(LeaderData* leaderData, int placeholder, int t2, int strict);//0x2E07D0
 int(__fastcall* Old_LeaderData__get_units)(LeaderData* leaderData, int placeholder, int t2, int strict);
 void* LeaderData__get_general_upgradeAddr;
 int __fastcall LeaderData__get_general_upgrade(LeaderData* leaderData, int placeholder);//0x2E0830
 int(__fastcall* Old_LeaderData__get_general_upgrade)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_supply_upgradeAddr;
 int __fastcall LeaderData__get_supply_upgrade(LeaderData* leaderData, int placeholder);//0x2E0880
 int(__fastcall* Old_LeaderData__get_supply_upgrade)(LeaderData* leaderData, int placeholder);
 void* LeaderData__calc_rareAddr;
 void __fastcall LeaderData__calc_rare(LeaderData* leaderData, int placeholder, int good, int* resources, int friendly);//0x2E08D0
 void(__fastcall* Old_LeaderData__calc_rare)(LeaderData* leaderData, int placeholder, int good, int* resources, int friendly);
 void* LeaderData__get_attritionAddr;
 int __fastcall LeaderData__get_attrition(LeaderData* leaderData, int placeholder);//0x2E0B60
 int(__fastcall* Old_LeaderData__get_attrition)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_anti_attritionAddr;
 void __fastcall LeaderData__get_anti_attrition(LeaderData* leaderData, int placeholder);//0x2E0B70
 void(__fastcall* Old_LeaderData__get_anti_attrition)(LeaderData* leaderData, int placeholder);
 void* LeaderData__has_bonusAddr;
 BOOL __fastcall LeaderData__has_bonus(LeaderData* leaderData, int placeholder, int t);//0x2E0B80
 BOOL(__fastcall* Old_LeaderData__has_bonus)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__has_spellAddr;
 int __fastcall LeaderData__has_spell(LeaderData* leaderData, int placeholder, int t);//0x2E0BC0
 int(__fastcall* Old_LeaderData__has_spell)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__can_transportAddr;
 int __fastcall LeaderData__can_transport(LeaderData* leaderData, int placeholder);//0x2E0C60
 int(__fastcall* Old_LeaderData__can_transport)(LeaderData* leaderData, int placeholder);
 void* LeaderData__has_techAddr;
 BOOL __fastcall LeaderData__has_tech(LeaderData* leaderData, int placeholder, TypeIndex t);//0x2E0C80
 BOOL(__fastcall* Old_LeaderData__has_tech)(LeaderData* leaderData, int placeholder, TypeIndex t);
 void* LeaderData__at_city_limitAddr;
 BOOL __fastcall LeaderData__at_city_limit(LeaderData* leaderData, int placeholder);//0x2E0D30
 BOOL(__fastcall* Old_LeaderData__at_city_limit)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_queuedAddr;
 int __fastcall LeaderData__get_queued(LeaderData* leaderData, int placeholder, int t2, int strict);//0x2E0D50
 int(__fastcall* Old_LeaderData__get_queued)(LeaderData* leaderData, int placeholder, int t2, int strict);
 void* Leader__track_unit_typeAddr;
 void __fastcall Leader__track_unit_type(Leader* leader, int placeholder, int t, int delta, int o);//0x2E0DD0
 void(__fastcall* Old_Leader__track_unit_type)(Leader* leader, int placeholder, int t, int delta, int o);
 void* LeaderData__is_coopAddr;
 int __fastcall LeaderData__is_coop(LeaderData* leaderData, int placeholder);//0x2E0F20
 int(__fastcall* Old_LeaderData__is_coop)(LeaderData* leaderData, int placeholder);
 void* Leader__track_queuedAddr;
 void __fastcall Leader__track_queued(Leader* leader, int placeholder, int t, int delta);//0x2E0F30
 void(__fastcall* Old_Leader__track_queued)(Leader* leader, int placeholder, int t, int delta);
 void* LeaderData__has_generalAddr;
 int __fastcall LeaderData__has_general(LeaderData* leaderData, int placeholder, Coord x, Coord y, int unit_mask, int t, int dist_mod);//0x2E1050
 int(__fastcall* Old_LeaderData__has_general)(LeaderData* leaderData, int placeholder, Coord x, Coord y, int unit_mask, int t, int dist_mod);
 void* LeaderData__get_spy_upgradeAddr;
 int __fastcall LeaderData__get_spy_upgrade(LeaderData* leaderData, int placeholder);//0x2E1090
 int(__fastcall* Old_LeaderData__get_spy_upgrade)(LeaderData* leaderData, int placeholder);
 void* LeaderData__has_upgradeAddr;
 BOOL __fastcall LeaderData__has_upgrade(LeaderData* leaderData, int placeholder, int t);//0x2E10E0
 BOOL(__fastcall* Old_LeaderData__has_upgrade)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__get_troops_los_upgradeAddr;
 int __fastcall LeaderData__get_troops_los_upgrade(LeaderData* leaderData, int placeholder);//0x2E1110
 int(__fastcall* Old_LeaderData__get_troops_los_upgrade)(LeaderData* leaderData, int placeholder);
 void* LeaderData__has_conquest_bonusAddr;
 int __fastcall LeaderData__has_conquest_bonus(LeaderData* leaderData, int placeholder, int type);//0x2E1160
 int(__fastcall* Old_LeaderData__has_conquest_bonus)(LeaderData* leaderData, int placeholder, int type);
 void* Leader__treaty_onAddr;
 void __fastcall Leader__treaty_on(Leader* leader, int placeholder, int whom, int treaty);//0x2E1190
 void(__fastcall* Old_Leader__treaty_on)(Leader* leader, int placeholder, int whom, int treaty);
 void* Leader__agenda_onAddr;
 void __fastcall Leader__agenda_on(Leader* leader, int placeholder, int whom, int agenda);//0x2E11C0
 void(__fastcall* Old_Leader__agenda_on)(Leader* leader, int placeholder, int whom, int agenda);
 void* LeaderData__has_treatyAddr;
 int __fastcall LeaderData__has_treaty(LeaderData* leaderData, int placeholder, int whom, int treaty);//0x2E11E0
 int(__fastcall* Old_LeaderData__has_treaty)(LeaderData* leaderData, int placeholder, int whom, int treaty);
 void* LeaderData__is_peaceAddr;
 BOOL __fastcall LeaderData__is_peace(LeaderData* leaderData, int placeholder, int whom);//0x2E1200
 BOOL(__fastcall* Old_LeaderData__is_peace)(LeaderData* leaderData, int placeholder, int whom);
 void* Leader__meetAddr;
 void __fastcall Leader__meet(Leader* leader, int placeholder, int whom, Coord x, Coord y);//0x2E1250
 void(__fastcall* Old_Leader__meet)(Leader* leader, int placeholder, int whom, Coord x, Coord y);
 void* LeaderData__is_targetAddr;
 BOOL __fastcall LeaderData__is_target(LeaderData* leaderData, int placeholder, int whom);//0x2E12C0
 BOOL(__fastcall* Old_LeaderData__is_target)(LeaderData* leaderData, int placeholder, int whom);
 void* LeaderData__get_heal_levelAddr;
 int __fastcall LeaderData__get_heal_level(LeaderData* leaderData, int placeholder);//0x2E12E0
 int(__fastcall* Old_LeaderData__get_heal_level)(LeaderData* leaderData, int placeholder);
 void* LeaderData__check_populationAddr;
 BOOL __fastcall LeaderData__check_population(LeaderData* leaderData, int placeholder, int t);//0x2E1330
 BOOL(__fastcall* Old_LeaderData__check_population)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__has_tribe_bonusAddr;
 BOOL __fastcall LeaderData__has_tribe_bonus(LeaderData* leaderData, int placeholder, int t);//0x2E1370
 BOOL(__fastcall* Old_LeaderData__has_tribe_bonus)(LeaderData* leaderData, int placeholder, int t);
 void* Leader__produce_buildingAddr;
 int __fastcall Leader__produce_building(Leader* leader, int placeholder, int cyy, int o, int use_escrow);//0x2E1400
 int(__fastcall* Old_Leader__produce_building)(Leader* leader, int placeholder, int cyy, int o, int use_escrow);
 void* LeaderData__get_graftAddr;
 int __fastcall LeaderData__get_graft(LeaderData* leaderData, int placeholder, int t);//0x2E30F0
 int(__fastcall* Old_LeaderData__get_graft)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__current_upgradeAddr;
 int __fastcall LeaderData__current_upgrade(LeaderData* leaderData, int placeholder, int t);//0x2E3140
 int(__fastcall* Old_LeaderData__current_upgrade)(LeaderData* leaderData, int placeholder, int t);
 void* Leader__reset_obs_flagsAddr;
 void __fastcall Leader__reset_obs_flags(Leader* leader, int placeholder);//0x2E32A0
 void(__fastcall* Old_Leader__reset_obs_flags)(Leader* leader, int placeholder);
 void* LeaderData__type_availAddr;
 int __fastcall LeaderData__type_avail(LeaderData* leaderData, int placeholder, int city2, int whom);//0x2E33A0
 int(__fastcall* Old_LeaderData__type_avail)(LeaderData* leaderData, int placeholder, int city2, int whom);
 void* Leader__reset_scoreAddr;
 void __fastcall Leader__reset_score(Leader* leader, int placeholder);//0x2E37F0
 void(__fastcall* Old_Leader__reset_score)(Leader* leader, int placeholder);
 void* Leaders__walk_dataAddr;
 void __fastcall Leaders__walk_data(Leaders* leaders, int placeholder, DataWalk* walk);//0x2E38E0
 void(__fastcall* Old_Leaders__walk_data)(Leaders* leaders, int placeholder, DataWalk* walk);
 void* Leader__initAddr;
 int __fastcall Leader__init(Leader* leader, int placeholder, int who, int tribe, unsigned __int8 color_index);//0x2E3930
 int(__fastcall* Old_Leader__init)(Leader* leader, int placeholder, int who, int tribe, unsigned __int8 color_index);
 void* LeaderData__log_dataAddr;
 void __fastcall LeaderData__log_data(LeaderData* leaderData, int placeholder, Log* log);//0x2E5110
 void(__fastcall* Old_LeaderData__log_data)(LeaderData* leaderData, int placeholder, Log* log);
 void* LeaderData__find_capitalAddr;
 void __fastcall LeaderData__find_capital(LeaderData* leaderData, int placeholder, int* cit, int* whose, int not_city, int not_who);//0x2EB930
 void(__fastcall* Old_LeaderData__find_capital)(LeaderData* leaderData, int placeholder, int* cit, int* whose, int not_city, int not_who);
 void* LeaderData__get_diploAddr;
 int __fastcall LeaderData__get_diplo(LeaderData* leaderData, int placeholder, int whom);//0x2EBA50
 int(__fastcall* Old_LeaderData__get_diplo)(LeaderData* leaderData, int placeholder, int whom);
 void* LeaderData__is_enemyAddr;
 BOOL __fastcall LeaderData__is_enemy(LeaderData* leaderData, int placeholder, int whom);//0x2EBAA0
 BOOL(__fastcall* Old_LeaderData__is_enemy)(LeaderData* leaderData, int placeholder, int whom);
 void* LeaderData__is_neutralAddr;
 bool __fastcall LeaderData__is_neutral(LeaderData* leaderData, int placeholder);//0x2EBAE0
 bool(__fastcall* Old_LeaderData__is_neutral)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_wonder_netAddr;
 int __fastcall LeaderData__get_wonder_net(LeaderData* leaderData, int placeholder);//0x2EBB10
 int(__fastcall* Old_LeaderData__get_wonder_net)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_wonder_valueAddr;
 int __fastcall LeaderData__get_wonder_value(LeaderData* leaderData, int placeholder);//0x2EBB90
 int(__fastcall* Old_LeaderData__get_wonder_value)(LeaderData* leaderData, int placeholder);
 void* LeaderData__has_wonderAddr;
 int __fastcall LeaderData__has_wonder(LeaderData* leaderData, int placeholder, int t);//0x2EBC10
 int(__fastcall* Old_LeaderData__has_wonder)(LeaderData* leaderData, int placeholder, int t);
 void* LeaderData__get_nukesAddr;
 int __fastcall LeaderData__get_nukes(LeaderData* leaderData, int placeholder);//0x2EBE50
 int(__fastcall* Old_LeaderData__get_nukes)(LeaderData* leaderData, int placeholder);
 void* LeaderData__say_full_nameAddr;
 String* __fastcall LeaderData__say_full_name(LeaderData* leaderData, int placeholder, String* result);//0x2EBE90
 String* (__fastcall* Old_LeaderData__say_full_name)(LeaderData* leaderData, int placeholder, String* result);
 void* LeaderData__num_team_membersAddr;
 int __fastcall LeaderData__num_team_members(LeaderData* leaderData, int placeholder, int strict);//0x2EBF90
 int(__fastcall* Old_LeaderData__num_team_members)(LeaderData* leaderData, int placeholder, int strict);
 void* LeaderData__get_diffAddr;
 int __fastcall LeaderData__get_diff(LeaderData* leaderData, int placeholder);//0x2EC000
 int(__fastcall* Old_LeaderData__get_diff)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_teamAddr;
 int __fastcall LeaderData__get_team(LeaderData* leaderData, int placeholder);//0x2EC040
 int(__fastcall* Old_LeaderData__get_team)(LeaderData* leaderData, int placeholder);
 void* LeaderData__get_playerAddr;
 int __fastcall LeaderData__get_player(LeaderData* leaderData, int placeholder);//0x2EC0F0
 int(__fastcall* Old_LeaderData__get_player)(LeaderData* leaderData, int placeholder);
 void* LeaderData__any_humansAddr;
 int __fastcall LeaderData__any_humans(LeaderData* leaderData, int placeholder);//0x2EC130
 int(__fastcall* Old_LeaderData__any_humans)(LeaderData* leaderData, int placeholder);
 void* LeaderData__is_humanAddr;
 int __fastcall LeaderData__is_human(LeaderData* leaderData, int placeholder);//0x2EC170
 int(__fastcall* Old_LeaderData__is_human)(LeaderData* leaderData, int placeholder);
 void* Leader__chat_to_localAddr;
 void __fastcall Leader__chat_to_local(Leader* leader, int placeholder, String* string, int whom, int prepend_sender_name, int play_sound);//0x2EC520
 void(__fastcall* Old_Leader__chat_to_local)(Leader* leader, int placeholder, String* string, int whom, int prepend_sender_name, int play_sound);
 void* Leader__compute_scoreAddr;
 void __fastcall Leader__compute_score(Leader* leader, int placeholder, int force);//0x2EC560
 void(__fastcall* Old_Leader__compute_score)(Leader* leader, int placeholder, int force);
 void* Leader__set_diploAddr;
 void __fastcall Leader__set_diplo(Leader* leader, int placeholder, int whom, Armies* diplo);//0x2EC6A0
 void(__fastcall* Old_Leader__set_diplo)(Leader* leader, int placeholder, int whom, Armies* diplo);
 void* Leader__victoryAddr;
 void __fastcall Leader__victory(Leader* leader, int placeholder, int victory_type, int instant_victory);//0x2EC9B0
 void(__fastcall* Old_Leader__victory)(Leader* leader, int placeholder, int victory_type, int instant_victory);
 void* Leaders__end_process_allAddr;
 void __fastcall Leaders__end_process_all(Leaders* leaders, int placeholder);//0x2ED070
 void(__fastcall* Old_Leaders__end_process_all)(Leaders* leaders, int placeholder);
 void* Leaders__process_allAddr;
 void __fastcall Leaders__process_all(Leaders* leaders, int placeholder);//0x2ED2A0
 void(__fastcall* Old_Leaders__process_all)(Leaders* leaders, int placeholder);
 void* Leaders__clearAddr;
 void __fastcall Leaders__clear(Leaders* leaders, int placeholder);//0x2ED5D0
 void(__fastcall* Old_Leaders__clear)(Leaders* leaders, int placeholder);
 void* Leaders__initAddr;
 int __fastcall Leaders__init(Leaders* leaders, int placeholder);//0x2ED850
 int(__fastcall* Old_Leaders__init)(Leaders* leaders, int placeholder);
 void* Leaders__LeadersAddr;
 void __fastcall Leaders__Leaders(Leaders* leaders, int placeholder);//0x2ED900
 void(__fastcall* Old_Leaders__Leaders)(Leaders* leaders, int placeholder);
 void* LeaderData__DeleteLeaderDataAddr;
 void __fastcall LeaderData__DeleteLeaderData(LeaderData* leaderData, int placeholder);//0x2ED9A0
 void(__fastcall* Old_LeaderData__DeleteLeaderData)(LeaderData* leaderData, int placeholder);
 void* LeaderData__is_allyAddr;
 BOOL __fastcall LeaderData__is_ally(LeaderData* leaderData, int placeholder, int whom);//0x2EDB50
 BOOL(__fastcall* Old_LeaderData__is_ally)(LeaderData* leaderData, int placeholder, int whom);
 void* LeaderOptions__log_dataAddr;
 void __fastcall LeaderOptions__log_data(LeaderOptions* leaderOptions, int placeholder, Log* log);//0x2F1480
 void(__fastcall* Old_LeaderOptions__log_data)(LeaderOptions* leaderOptions, int placeholder, Log* log);
 void* LeaderOptionData__log_dataAddr;
 void __fastcall LeaderOptionData__log_data(LeaderOptionData* leaderOptionData, int placeholder, Log* log);//0x2F16A0
 void(__fastcall* Old_LeaderOptionData__log_data)(LeaderOptionData* leaderOptionData, int placeholder, Log* log);
 void* LeaderOptionData__walk_dataAddr;
 void __fastcall LeaderOptionData__walk_data(LeaderOptionData* leaderOptionData, int placeholder, DataWalk* walk);//0x2F18B0
 void(__fastcall* Old_LeaderOptionData__walk_data)(LeaderOptionData* leaderOptionData, int placeholder, DataWalk* walk);
 void* LeaderOption__closeAddr;
 void __fastcall LeaderOption__close(LeaderOption* leaderOption, int placeholder, int who);//0x2F1940
 void(__fastcall* Old_LeaderOption__close)(LeaderOption* leaderOption, int placeholder, int who);
 void* LeaderOptions__walk_dataAddr;
 void __fastcall LeaderOptions__walk_data(LeaderOptions* leaderOptions, int placeholder, DataWalk* walk);//0x2F19A0
 void(__fastcall* Old_LeaderOptions__walk_data)(LeaderOptions* leaderOptions, int placeholder, DataWalk* walk);
 void* LeaderOptionOut__updateAddr;
 void __fastcall LeaderOptionOut__update(LeaderOptionOut* leaderOptionOut, int placeholder);//0x2F1A60
 void(__fastcall* Old_LeaderOptionOut__update)(LeaderOptionOut* leaderOptionOut, int placeholder);
 void* LeaderOption__synch_with_prefsAddr;
 void __fastcall LeaderOption__synch_with_prefs(LeaderOption* leaderOption, int placeholder);//0x2F1B50
 void(__fastcall* Old_LeaderOption__synch_with_prefs)(LeaderOption* leaderOption, int placeholder);
 void* LeaderOption__initAddr;
 int __fastcall LeaderOption__init(LeaderOption* leaderOption, int placeholder, int who);//0x2F1C60
 int(__fastcall* Old_LeaderOption__init)(LeaderOption* leaderOption, int placeholder, int who);
 void* LeaderOptions__closeAddr;
 void __fastcall LeaderOptions__close(LeaderOptions* leaderOptions, int placeholder);//0x2F1CD0
 void(__fastcall* Old_LeaderOptions__close)(LeaderOptions* leaderOptions, int placeholder);
 void* LeaderOptions__initAddr;
 int __fastcall LeaderOptions__init(LeaderOptions* leaderOptions, int placeholder);//0x2F1D40
 int(__fastcall* Old_LeaderOptions__init)(LeaderOptions* leaderOptions, int placeholder);
 void* LeaderOption__LeaderOptionAddr;
 void __fastcall LeaderOption__LeaderOption(LeaderOption* leaderOption, int placeholder);//0x2F1DB0
 void(__fastcall* Old_LeaderOption__LeaderOption)(LeaderOption* leaderOption, int placeholder);
 void* LeaderOptions__LeaderOptionsAddr;
 void __fastcall LeaderOptions__LeaderOptions(LeaderOptions* leaderOptions, int placeholder);//0x2F1DD0
 void(__fastcall* Old_LeaderOptions__LeaderOptions)(LeaderOptions* leaderOptions, int placeholder);



 void* String__StringAddr;
 void __fastcall String__String(String* string, int placeholder, const char* s);//0x61D660
 void(__fastcall* Old_String__String)(String* string, int placeholder, const char* s);
 void* GameLog__say_checksumAddr;
 void __fastcall GameLog__say_checksum(GameLog* gameLog, int placeholder, int detail, const String* file, int line);//0x530B30
 void(__fastcall* Old_GameLog__say_checksum)(GameLog* gameLog, int placeholder, int detail, const String* file, int line);
 void* String__closeAddr;
 void __fastcall String__close(String* string, int placeholder);//0x61CF40
 void(__fastcall* Old_String__close)(String* string, int placeholder);
 void* Random__getAddr;
 int __fastcall Random__get(Random* random, int placeholder, int min, int max);//0x639D70
 int(__fastcall* Old_Random__get)(Random* random, int placeholder, int min, int max);
 void* Game__init_tribesAddr;
 void __fastcall Game__init_tribes(Game* game, int placeholder);//0x18A600
 void(__fastcall* Old_Game__init_tribes)(Game* game, int placeholder);



  void* ScenarioFuncSet__init_funcsAddr;
  void __fastcall ScenarioFuncSet__init_funcs(ScenarioFuncSet* scenarioFuncSet, int placeholder);//0x5C7570
  void(__fastcall* Old_ScenarioFuncSet__init_funcs)(ScenarioFuncSet* scenarioFuncSet, int placeholder);
  void* ScriptFuncSet__add_new_funcAddr;
  ScriptFunc* __fastcall ScriptFuncSet__add_new_func(ScriptFuncSet* scriptFuncSet, int placeholder, int ret_type, const wchar_t* name, int addr, unsigned __int8 num);//0x5D4DA0
  ScriptFunc* (__fastcall* Old_ScriptFuncSet__add_new_func)(ScriptFuncSet* scriptFuncSet, int placeholder, int ret_type, const wchar_t* name, int addr, unsigned __int8 num);
  void* ScriptFunc__add_paramAddr;
  void (__fastcall* ScriptFunc__add_param)(ScriptFunc* scriptFuncSet, int placeholder, int type, wchar_t* name, StringGuts* validation, unsigned __int8 param_flags, const wchar_t* def_value);//0x5D4F20


   void* CityData__pop_capAddr;
   int __fastcall CityData__pop_cap(CityData* CityDataData, int placeholder);//0x337D40
   int(__fastcall* Old_CityData__pop_cap)(CityData* CityDataData, int placeholder);


 template<typename T>
 T& gameaddr(int addr) {
     static int hExeBase = (int)GetModuleHandle(NULL);
     return *(T*)(hExeBase + addr);
 }


 Game* GameAccessConst__gamec;//0x8061E8
 Leaders* GameAccessConst__leadersc;//0x8061E0
 Random* GameAccess__game_random;//0x806184
 Constants* GameAccess__constants;//0x8061F0

 GameLog& game_log = gameaddr<GameLog>(0xAB1360);
 Coord& GameAccess__game = gameaddr<Coord>(0x8061EC);
 Tribes& tribes = gameaddr<Tribes>(0xA7FA20);
 StringTable& loc_str_array_orig = gameaddr<StringTable>(0x88CCF0);
 PlayerProfile& player_profile = gameaddr<PlayerProfile>(0x88D150);
 Leaders& leaders = gameaddr<Leaders>(0xA3A390);
 int (*ScenarioData__pop_cap)[8] = &gameaddr<int[8]>(0x8C21F0);
 Coord& GameAccess__objects = gameaddr<Coord>(0x80618C);//0x80618C
 Categories& pop_limits = gameaddr<Categories>(0xA80020);//0xA80020
 Cities& cities = gameaddr<Cities>(0x809960);//0x809960
namespace Main
{

    




   

    void init_hook()
    {
        HMODULE hExeBase = GetModuleHandle(NULL);
 
    

        LeaderData__is_teamAddr = (BYTE*)hExeBase + 0x2EBD30;
		LeaderData__get_playerAddr = (BYTE*)hExeBase + 0x2EC0F0;
		LeaderData__is_allyAddr = (BYTE*)hExeBase + 0x2EDB50;
		String__StringAddr = (BYTE*)hExeBase + 0x61D660;
		GameLog__say_checksumAddr = (BYTE*)hExeBase + 0x530B30;
		String__closeAddr = (BYTE*)hExeBase + 0x61CF40;
		Random__getAddr = (BYTE*)hExeBase + 0x639D70;
		Game__init_tribesAddr = (BYTE*)hExeBase + 0x18A600;

		Leader__DeleteLeaderAddr = (BYTE*)hExeBase + 0x2DE10;
		LeaderOut__DeleteLeaderOutAddr = (BYTE*)hExeBase + 0x2DE50;
		LeaderData__get_ageAddr = (BYTE*)hExeBase + 0x3ECD0;
		LeaderData__bucket_setAddr = (BYTE*)hExeBase + 0x3ECF0;
		LeaderData__bucket_addAddr = (BYTE*)hExeBase + 0x3ED10;
		LeaderData__income_getAddr = (BYTE*)hExeBase + 0x6EE60;
		LeaderData__resource_cap_getAddr = (BYTE*)hExeBase + 0x6EE80;
		LeaderData__get_epochAddr = (BYTE*)hExeBase + 0x6F1E0;
		LeaderData__bucket_getAddr = (BYTE*)hExeBase + 0x6F200;
		LeaderData__epochs_getAddr = (BYTE*)hExeBase + 0x70F10;
		Leader__gain_techAddr = (BYTE*)hExeBase + 0x2DCB60;
		LeaderData__support_getAddr = (BYTE*)hExeBase + 0x7DA00;
		LeaderData__resources_getAddr = (BYTE*)hExeBase + 0x7DA20;
		LeaderData__resource_cap_addAddr = (BYTE*)hExeBase + 0x7DA40;
		Leader__closeAddr = (BYTE*)hExeBase + 0x2B7F80;
		Leaders__best_human_age_stampAddr = (BYTE*)hExeBase + 0x2B81E0;
		Leaders__max_enemy_ageAddr = (BYTE*)hExeBase + 0x2B8300;
		Leaders__max_ageAddr = (BYTE*)hExeBase + 0x2B8370;
		Leaders__max_human_ageAddr = (BYTE*)hExeBase + 0x2B8470;
		Leaders__max_human_citiesAddr = (BYTE*)hExeBase + 0x2B8580;
		Leader__end_processAddr = (BYTE*)hExeBase + 0x2B8690;
		Leader__processAddr = (BYTE*)hExeBase + 0x2B88B0;
		Leader__process_eliminationAddr = (BYTE*)hExeBase + 0x2B8A20;
		Leader__receive_chatAddr = (BYTE*)hExeBase + 0x2B8AB0;
		Leader__process_tauntsAddr = (BYTE*)hExeBase + 0x2B8BA0;
		Leader__receive_tauntAddr = (BYTE*)hExeBase + 0x2B8BF0;
		Leader__process_tauntAddr = (BYTE*)hExeBase + 0x2B8CC0;
		Leader__receive_pingAddr = (BYTE*)hExeBase + 0x2B95F0;
		Leader__compute_pop_scoreAddr = (BYTE*)hExeBase + 0x2BC190;
		Leader__compute_unit_upgrades_scoreAddr = (BYTE*)hExeBase + 0x2BC1A0;
		Leader__compute_economy_scoreAddr = (BYTE*)hExeBase + 0x2BC270;
		Leader__compute_research_scoreAddr = (BYTE*)hExeBase + 0x2BC360;
		Leader__compute_build_scoreAddr = (BYTE*)hExeBase + 0x2BC3F0;
		Leader__compute_unit_scoreAddr = (BYTE*)hExeBase + 0x2BC500;
		Leader__compute_explore_scoreAddr = (BYTE*)hExeBase + 0x2BC5E0;
		Leader__check_transportAddr = (BYTE*)hExeBase + 0x2BC5F0;
		Leader__check_exploreAddr = (BYTE*)hExeBase + 0x2BC860;
		Leader__diplomacyAddr = (BYTE*)hExeBase + 0x2BC950;
		LeaderData__resource_valueAddr = (BYTE*)hExeBase + 0x2C18D0;
		Leader__create_buildingsAddr = (BYTE*)hExeBase + 0x2C1BE0;
		Leader__create_unitsAddr = (BYTE*)hExeBase + 0x2C40A0;
		Leader__upgrade_unitsAddr = (BYTE*)hExeBase + 0x2C6430;
		Leader__research_techsAddr = (BYTE*)hExeBase + 0x2C6BA0;
		Leader__found_citiesAddr = (BYTE*)hExeBase + 0x2C7A60;
		Leader__market_speculationAddr = (BYTE*)hExeBase + 0x2C8110;
		Leader__production_ai_setupAddr = (BYTE*)hExeBase + 0x2C83E0;
		Leader__make_stuffAddr = (BYTE*)hExeBase + 0x2C8AF0;
		Leader__use_marketAddr = (BYTE*)hExeBase + 0x2C91C0;
		Leader__make_thisAddr = (BYTE*)hExeBase + 0x2C94F0;
		Leader__say_payAddr = (BYTE*)hExeBase + 0x2C9A10;
		Leader__can_payAddr = (BYTE*)hExeBase + 0x2C9B90;
		Leader__check_orphaned_buildingsAddr = (BYTE*)hExeBase + 0x2C9F20;
		Leader__produce_spellAddr = (BYTE*)hExeBase + 0x2CA720;
		Leader__produce_techAddr = (BYTE*)hExeBase + 0x2CA980;
		Leader__produce_cityAddr = (BYTE*)hExeBase + 0x2CB120;
		Leader__produce_upgradeAddr = (BYTE*)hExeBase + 0x2CB5D0;
		Leader__produce_unitAddr = (BYTE*)hExeBase + 0x2CB9E0;
		Leader__unit_prod_valueAddr = (BYTE*)hExeBase + 0x2CC580;
		Leader__check_incomeAddr = (BYTE*)hExeBase + 0x2CC800;
		Leader__compute_sitesAddr = (BYTE*)hExeBase + 0x2CC950;
		Leader__compute_site_statsAddr = (BYTE*)hExeBase + 0x2CD040;
		Leader__get_needAddr = (BYTE*)hExeBase + 0x2CDC80;
		Leader__calc_anti_attritionAddr = (BYTE*)hExeBase + 0x2CDCC0;
		Leader__calc_attritionAddr = (BYTE*)hExeBase + 0x2CDEA0;
		Leader__calc_miseryAddr = (BYTE*)hExeBase + 0x2CDFF0;
		Leader__queued_unitsAddr = (BYTE*)hExeBase + 0x2CE000;
		Leader__verify_spell_flagsAddr = (BYTE*)hExeBase + 0x2CE190;
		Leader__gatherAddr = (BYTE*)hExeBase + 0x2CE280;
		Leader__do_gatherAddr = (BYTE*)hExeBase + 0x2CE450;
		Leader__calc_resource_capsAddr = (BYTE*)hExeBase + 0x2CE900;
		Leader__calc_supportAddr = (BYTE*)hExeBase + 0x2CEEA0;
		Leader__calc_gatherAddr = (BYTE*)hExeBase + 0x2CEEE0;
		Leader__calc_wall_statsAddr = (BYTE*)hExeBase + 0x2CF7C0;
		Leader__calc_unit_statsAddr = (BYTE*)hExeBase + 0x2CF970;
		Leader__action_buyAddr = (BYTE*)hExeBase + 0x2CFA20;
		Leader__action_sellAddr = (BYTE*)hExeBase + 0x2CFA90;
		Leader__tell_embargoAddr = (BYTE*)hExeBase + 0x2CFAF0;
		Leader__do_buyAddr = (BYTE*)hExeBase + 0x2CFBD0;
		Leader__do_sellAddr = (BYTE*)hExeBase + 0x2CFC60;
		Leader__random_personalityAddr = (BYTE*)hExeBase + 0x2CFD00;
		Leader__ally_diploAddr = (BYTE*)hExeBase + 0x2D0120;
		Leader__eject_my_shit_from_his_assAddr = (BYTE*)hExeBase + 0x2D0220;
		Leader__has_agendaAddr = (BYTE*)hExeBase + 0x2D0330;
		Leader__agenda_offAddr = (BYTE*)hExeBase + 0x2D0350;
		Leader__treaty_offAddr = (BYTE*)hExeBase + 0x2D0370;
		Leader__action_rejectAddr = (BYTE*)hExeBase + 0x2D0390;
		Leader__action_agreeAddr = (BYTE*)hExeBase + 0x2D03B0;
		Leader__action_respondAddr = (BYTE*)hExeBase + 0x2D03C0;
		Leader__consider_tributeAddr = (BYTE*)hExeBase + 0x2D1360;
		Leader__notify_dealAddr = (BYTE*)hExeBase + 0x2D13F0;
		Leader__action_attackAddr = (BYTE*)hExeBase + 0x2D14E0;
		Leader__action_treatyAddr = (BYTE*)hExeBase + 0x2D1570;
		Leader__action_clear_allAddr = (BYTE*)hExeBase + 0x2D15E0;
		Leader__action_clear_tributesAddr = (BYTE*)hExeBase + 0x2D1690;
		Leader__action_demand_tributeAddr = (BYTE*)hExeBase + 0x2D1750;
		Leader__action_offerAddr = (BYTE*)hExeBase + 0x2D1780;
		Leader__action_splineAddr = (BYTE*)hExeBase + 0x2D1850;
		Leader__action_pingAddr = (BYTE*)hExeBase + 0x2D18A0;
		Leader__clear_agreeAddr = (BYTE*)hExeBase + 0x2D1AF0;
		Leader__recapture_capitalAddr = (BYTE*)hExeBase + 0x2D1BA0;
		Leader__defeat_byAddr = (BYTE*)hExeBase + 0x2D1C80;
		Leader__blow_up_unitsAddr = (BYTE*)hExeBase + 0x2D2170;
		Leader__blow_up_buildingsAddr = (BYTE*)hExeBase + 0x2D22B0;
		Leader__blow_up_towersAddr = (BYTE*)hExeBase + 0x2D2310;
		Leader__set_diffAddr = (BYTE*)hExeBase + 0x2D2470;
		Leader__fix_tech_flagsAddr = (BYTE*)hExeBase + 0x2D2480;
		Leader__set_ageAddr = (BYTE*)hExeBase + 0x2D25A0;
		Leader__set_epochAddr = (BYTE*)hExeBase + 0x2D26F0;
		Leader__lose_techAddr = (BYTE*)hExeBase + 0x2D2850;
		Leader__pay_dowAddr = (BYTE*)hExeBase + 0x2D2B10;
		Leader__LeaderAddr = (BYTE*)hExeBase + 0x2D2BF0;
		LeaderOut__issue_chatAddr = (BYTE*)hExeBase + 0x2D2C50;
		LeaderOut__issue_pingAddr = (BYTE*)hExeBase + 0x2D3240;
		LeaderOut__display_chatAddr = (BYTE*)hExeBase + 0x2D3320;
		LeaderOut__say_meetAddr = (BYTE*)hExeBase + 0x2D3570;
		LeaderOut__warn_resourcesAddr = (BYTE*)hExeBase + 0x2D3650;
		LeaderOut__issue_sellAddr = (BYTE*)hExeBase + 0x2D3EB0;
		LeaderOut__issue_buyAddr = (BYTE*)hExeBase + 0x2D3EF0;
		LeaderOut__issue_propose_attackAddr = (BYTE*)hExeBase + 0x2D3F30;
		LeaderOut__issue_demand_tributeAddr = (BYTE*)hExeBase + 0x2D3F60;
		LeaderOut__issue_tributeAddr = (BYTE*)hExeBase + 0x2D3F90;
		LeaderOut__issue_rejectAddr = (BYTE*)hExeBase + 0x2D3FF0;
		LeaderOut__issue_acceptAddr = (BYTE*)hExeBase + 0x2D4010;
		LeaderOut__issue_clear_allAddr = (BYTE*)hExeBase + 0x2D4040;
		LeaderOut__issue_clear_tributesAddr = (BYTE*)hExeBase + 0x2D4060;
		LeaderOut__issue_declareAddr = (BYTE*)hExeBase + 0x2D4080;
		LeaderOut__issue_treatyAddr = (BYTE*)hExeBase + 0x2D40F0;
		LeaderData__strong_vsAddr = (BYTE*)hExeBase + 0x2D4110;
		LeaderData__weak_vsAddr = (BYTE*)hExeBase + 0x2D4760;
		LeaderData__counter_unitAddr = (BYTE*)hExeBase + 0x2D4CB0;
		LeaderData__care_if_cost_discoveredAddr = (BYTE*)hExeBase + 0x2D51A0;
		LeaderData__locked_transportAddr = (BYTE*)hExeBase + 0x2D5230;
		LeaderData__scale_tributeAddr = (BYTE*)hExeBase + 0x2D5240;
		LeaderData__get_nuke_embargoAddr = (BYTE*)hExeBase + 0x2D52C0;
		LeaderData__get_my_nuke_embargoAddr = (BYTE*)hExeBase + 0x2D5350;
		LeaderData__can_nukeAddr = (BYTE*)hExeBase + 0x2D53C0;
		LeaderData__can_buy_sellAddr = (BYTE*)hExeBase + 0x2D53E0;
		LeaderData__has_marketAddr = (BYTE*)hExeBase + 0x2D5410;
		LeaderData__get_reg_buildingsAddr = (BYTE*)hExeBase + 0x2D5470;
		LeaderData__has_capitalAddr = (BYTE*)hExeBase + 0x2D54C0;
		LeaderData__calc_city_resourcesAddr = (BYTE*)hExeBase + 0x2D5530;
		LeaderData__any_proposalsAddr = (BYTE*)hExeBase + 0x2D5AD0;
		LeaderData__is_rejectAddr = (BYTE*)hExeBase + 0x2D5B30;
		LeaderData__is_any_offerAddr = (BYTE*)hExeBase + 0x2D5B50;
		LeaderData__is_agreeAddr = (BYTE*)hExeBase + 0x2D5B70;
		LeaderData__is_tribute_periodAddr = (BYTE*)hExeBase + 0x2D5B90;
		LeaderData__afford_dowAddr = (BYTE*)hExeBase + 0x2D5CE0;
		LeaderData__get_mvp_scoreAddr = (BYTE*)hExeBase + 0x2D5DE0;
		LeaderData__get_enemy_unbuilt_wonder_valueAddr = (BYTE*)hExeBase + 0x2D5E40;
		LeaderData__get_unbuilt_wonder_valueAddr = (BYTE*)hExeBase + 0x2D5EE0;
		LeaderData__can_see_bordersAddr = (BYTE*)hExeBase + 0x2D5F60;
		LeaderData__get_total_citiesAddr = (BYTE*)hExeBase + 0x2D6060;
		LeaderData__get_city_limitAddr = (BYTE*)hExeBase + 0x2D6130;
		LeaderData__is_boomerAddr = (BYTE*)hExeBase + 0x2D6190;
		LeaderData__is_rusherAddr = (BYTE*)hExeBase + 0x2D61F0;
		LeaderData__num_alliesAddr = (BYTE*)hExeBase + 0x2D6250;
		LeaderData__get_team_terrAddr = (BYTE*)hExeBase + 0x2D62E0;
		LeaderData__get_team_economicAddr = (BYTE*)hExeBase + 0x2D6400;
		LeaderData__get_economicAddr = (BYTE*)hExeBase + 0x2D6490;
		LeaderData__get_team_scoreAddr = (BYTE*)hExeBase + 0x2D6520;
		LeaderData__get_mod_resource_capAddr = (BYTE*)hExeBase + 0x2D65B0;
		LeaderData__get_econ_modAddr = (BYTE*)hExeBase + 0x2D6660;
		LeaderData__get_gather_handicapAddr = (BYTE*)hExeBase + 0x2D66A0;
		LeaderData__get_handicap_levelAddr = (BYTE*)hExeBase + 0x2D6740;
		LeaderData__walk_dataAddr = (BYTE*)hExeBase + 0x2D6750;
		LeaderData__get_govs_takenAddr = (BYTE*)hExeBase + 0x2D69F0;
		LeaderData__get_govAddr = (BYTE*)hExeBase + 0x2D6A20;
		LeaderData__get_key_typeAddr = (BYTE*)hExeBase + 0x2D6AC0;
		LeaderData__get_city_upgrade_levelAddr = (BYTE*)hExeBase + 0x2D6D90;
		LeaderData__get_merchants_levelAddr = (BYTE*)hExeBase + 0x2D6DC0;
		LeaderData__get_taxationAddr = (BYTE*)hExeBase + 0x2D6E20;
		LeaderData__get_fishermenAddr = (BYTE*)hExeBase + 0x2D6E80;
		LeaderData__get_lowest_epochAddr = (BYTE*)hExeBase + 0x2D6ED0;
		LeaderData__get_highest_epochAddr = (BYTE*)hExeBase + 0x2D6F30;
		LeaderData__compute_epochAddr = (BYTE*)hExeBase + 0x2D6F80;
		LeaderData__get_epoch_baseAddr = (BYTE*)hExeBase + 0x2D6FF0;
		LeaderData__special_preqAddr = (BYTE*)hExeBase + 0x2D7030;
		LeaderData__techs_per_ageAddr = (BYTE*)hExeBase + 0x2D7280;
		LeaderData__starting_ageAddr = (BYTE*)hExeBase + 0x2D7320;
		LeaderData__all_techsAddr = (BYTE*)hExeBase + 0x2D7370;
		LeaderData__LeaderDataAddr = (BYTE*)hExeBase + 0x2D7540;
		LeaderData__has_rare_conquestAddr = (BYTE*)hExeBase + 0x2D9320;
		LeaderData__is_shared_teamAddr = (BYTE*)hExeBase + 0x2D9360;
		LeaderData__tribe_can_typeAddr = (BYTE*)hExeBase + 0x2D9410;
		LeaderDataEncrypt__log_dataAddr = (BYTE*)hExeBase + 0x2D94B0;
		LeaderDataEncrypt__initAddr = (BYTE*)hExeBase + 0x2D9C60;
		Leader__new_rareAddr = (BYTE*)hExeBase + 0x2D9E70;
		LeaderData__get_fort_bordersAddr = (BYTE*)hExeBase + 0x2D9FB0;
		LeaderData__get_targetAddr = (BYTE*)hExeBase + 0x2DA000;
		Leader__tech_availAddr = (BYTE*)hExeBase + 0x2DA060;
		LeaderData__get_support_countAddr = (BYTE*)hExeBase + 0x2DA110;
		LeaderData__get_unbuilt_wondersAddr = (BYTE*)hExeBase + 0x2DA290;
		LeaderData__get_team_wondersAddr = (BYTE*)hExeBase + 0x2DA2D0;
		LeaderData__get_team_unbuilt_wondersAddr = (BYTE*)hExeBase + 0x2DA3A0;
		LeaderData__has_unbuilt_wonderAddr = (BYTE*)hExeBase + 0x2DA470;
		LeaderData__team_has_unbuilt_wonderAddr = (BYTE*)hExeBase + 0x2DA4F0;
		LeaderData__cost_factor_dowAddr = (BYTE*)hExeBase + 0x2DA590;
		LeaderData__calc_science_discountAddr = (BYTE*)hExeBase + 0x2DA630;
		LeaderData__get_handicapAddr = (BYTE*)hExeBase + 0x2DA740;
		LeaderData__get_ships_speed_upgradeAddr = (BYTE*)hExeBase + 0x2DA800;
		LeaderData__get_troops_speed_upgradeAddr = (BYTE*)hExeBase + 0x2DA850;
		LeaderData__get_vehicle_speed_upgradeAddr = (BYTE*)hExeBase + 0x2DA8A0;
		LeaderData__get_enemy_wonder_valueAddr = (BYTE*)hExeBase + 0x2DA8F0;
		LeaderData__get_team_wonder_valueAddr = (BYTE*)hExeBase + 0x2DA990;
		Leader__inc_hit_eventAddr = (BYTE*)hExeBase + 0x2DAA30;
		Leader__inc_damage_eventAddr = (BYTE*)hExeBase + 0x2DAA50;
		LeaderData__get_nameAddr = (BYTE*)hExeBase + 0x2DAA70;
		Leader__inc_kill_eventAddr = (BYTE*)hExeBase + 0x2DAB10;
		Leader__inc_death_eventAddr = (BYTE*)hExeBase + 0x2DAB30;
		Leader__action_declareAddr = (BYTE*)hExeBase + 0x2DAB50;
		LeaderData__get_building_speed_upgradeAddr = (BYTE*)hExeBase + 0x2DAE90;
		LeaderData__get_building_hp_upgradeAddr = (BYTE*)hExeBase + 0x2DAEE0;
		LeaderData__get_fort_losAddr = (BYTE*)hExeBase + 0x2DAF30;
		LeaderData__get_tower_fort_losAddr = (BYTE*)hExeBase + 0x2DAF80;
		LeaderData__get_fort_rangeAddr = (BYTE*)hExeBase + 0x2DAFB0;
		LeaderData__get_tower_fort_rangeAddr = (BYTE*)hExeBase + 0x2DB000;
		LeaderData__calc_resource_bonusesAddr = (BYTE*)hExeBase + 0x2DB030;
		LeaderData__get_universityAddr = (BYTE*)hExeBase + 0x2DB1F0;
		LeaderData__get_farm_limitAddr = (BYTE*)hExeBase + 0x2DB270;
		LeaderData__get_fort_garrisonAddr = (BYTE*)hExeBase + 0x2DB2F0;
		LeaderData__get_granaryAddr = (BYTE*)hExeBase + 0x2DB340;
		LeaderData__get_lumbermillAddr = (BYTE*)hExeBase + 0x2DB3A0;
		LeaderData__get_smelterAddr = (BYTE*)hExeBase + 0x2DB3F0;
		LeaderData__get_temple_bordersAddr = (BYTE*)hExeBase + 0x2DB440;
		LeaderData__get_temple_hpAddr = (BYTE*)hExeBase + 0x2DB470;
		LeaderData__get_temple_rangeAddr = (BYTE*)hExeBase + 0x2DB4A0;
		LeaderData__researchingAddr = (BYTE*)hExeBase + 0x711F0;
		LeaderData__get_wondersAddr = (BYTE*)hExeBase + 0x2DB680;
		LeaderData__get_first_libraryAddr = (BYTE*)hExeBase + 0x2DB6C0;
		LeaderData__get_radiusAddr = (BYTE*)hExeBase + 0x2DB790;
		LeaderData__has_preqAddr = (BYTE*)hExeBase + 0x2DB810;
		LeaderData__check_predecessorAddr = (BYTE*)hExeBase + 0x2DBCB0;
		LeaderData__type_eligibleAddr = (BYTE*)hExeBase + 0x2DBD10;
		LeaderData__calc_market_pricesAddr = (BYTE*)hExeBase + 0x2DC2A0;
		Leader__calc_pop_capAddr = (BYTE*)hExeBase + 0x2DC490;
		Leader__lost_a_cityAddr = (BYTE*)hExeBase + 0x2DC6D0;
		Leader__lost_capitalAddr = (BYTE*)hExeBase + 0x2DC870;
		Leader__lose_buildingAddr = (BYTE*)hExeBase + 0x2DCA20;
		LeaderData__get_caravan_limitAddr = (BYTE*)hExeBase + 0x2DCA50;
		LeaderData__get_gov_heroAddr = (BYTE*)hExeBase + 0x2E0600;
		LeaderData__get_buildingsAddr = (BYTE*)hExeBase + 0x2E0680;
		Leader__gain_buildingAddr = (BYTE*)hExeBase + 0x2E06C0;
		LeaderData__get_building_citiesAddr = (BYTE*)hExeBase + 0x2E06F0;
		LeaderData__get_decoy_timeAddr = (BYTE*)hExeBase + 0x2E0750;
		LeaderData__has_rareAddr = (BYTE*)hExeBase + 0x2E0770;
		LeaderData__get_unitsAddr = (BYTE*)hExeBase + 0x2E07D0;
		LeaderData__get_general_upgradeAddr = (BYTE*)hExeBase + 0x2E0830;
		LeaderData__get_supply_upgradeAddr = (BYTE*)hExeBase + 0x2E0880;
		LeaderData__calc_rareAddr = (BYTE*)hExeBase + 0x2E08D0;
		LeaderData__get_attritionAddr = (BYTE*)hExeBase + 0x2E0B60;
		LeaderData__get_anti_attritionAddr = (BYTE*)hExeBase + 0x2E0B70;
		LeaderData__has_bonusAddr = (BYTE*)hExeBase + 0x2E0B80;
		LeaderData__has_spellAddr = (BYTE*)hExeBase + 0x2E0BC0;
		LeaderData__can_transportAddr = (BYTE*)hExeBase + 0x2E0C60;
		LeaderData__has_techAddr = (BYTE*)hExeBase + 0x2E0C80;
		LeaderData__at_city_limitAddr = (BYTE*)hExeBase + 0x2E0D30;
		LeaderData__get_queuedAddr = (BYTE*)hExeBase + 0x2E0D50;
		Leader__track_unit_typeAddr = (BYTE*)hExeBase + 0x2E0DD0;
		LeaderData__is_coopAddr = (BYTE*)hExeBase + 0x2E0F20;
		Leader__track_queuedAddr = (BYTE*)hExeBase + 0x2E0F30;
		LeaderData__has_generalAddr = (BYTE*)hExeBase + 0x2E1050;
		LeaderData__get_spy_upgradeAddr = (BYTE*)hExeBase + 0x2E1090;
		LeaderData__has_upgradeAddr = (BYTE*)hExeBase + 0x2E10E0;
		LeaderData__get_troops_los_upgradeAddr = (BYTE*)hExeBase + 0x2E1110;
		LeaderData__has_conquest_bonusAddr = (BYTE*)hExeBase + 0x2E1160;
		Leader__treaty_onAddr = (BYTE*)hExeBase + 0x2E1190;
		Leader__agenda_onAddr = (BYTE*)hExeBase + 0x2E11C0;
		LeaderData__has_treatyAddr = (BYTE*)hExeBase + 0x2E11E0;
		LeaderData__is_peaceAddr = (BYTE*)hExeBase + 0x2E1200;
		Leader__meetAddr = (BYTE*)hExeBase + 0x2E1250;
		LeaderData__is_targetAddr = (BYTE*)hExeBase + 0x2E12C0;
		LeaderData__get_heal_levelAddr = (BYTE*)hExeBase + 0x2E12E0;
		LeaderData__check_populationAddr = (BYTE*)hExeBase + 0x2E1330;
		LeaderData__has_tribe_bonusAddr = (BYTE*)hExeBase + 0x2E1370;
		Leader__produce_buildingAddr = (BYTE*)hExeBase + 0x2E1400;
		LeaderData__get_graftAddr = (BYTE*)hExeBase + 0x2E30F0;
		LeaderData__current_upgradeAddr = (BYTE*)hExeBase + 0x2E3140;
		Leader__reset_obs_flagsAddr = (BYTE*)hExeBase + 0x2E32A0;
		LeaderData__type_availAddr = (BYTE*)hExeBase + 0x2E33A0;
		Leader__reset_scoreAddr = (BYTE*)hExeBase + 0x2E37F0;
		Leaders__walk_dataAddr = (BYTE*)hExeBase + 0x2E38E0;
		Leader__initAddr = (BYTE*)hExeBase + 0x2E3930;
		LeaderData__log_dataAddr = (BYTE*)hExeBase + 0x2E5110;
		LeaderData__find_capitalAddr = (BYTE*)hExeBase + 0x2EB930;
		LeaderData__get_diploAddr = (BYTE*)hExeBase + 0x2EBA50;
		LeaderData__is_enemyAddr = (BYTE*)hExeBase + 0x2EBAA0;
		LeaderData__is_neutralAddr = (BYTE*)hExeBase + 0x2EBAE0;
		LeaderData__get_wonder_netAddr = (BYTE*)hExeBase + 0x2EBB10;
		LeaderData__get_wonder_valueAddr = (BYTE*)hExeBase + 0x2EBB90;
		LeaderData__has_wonderAddr = (BYTE*)hExeBase + 0x2EBC10;
		LeaderData__get_nukesAddr = (BYTE*)hExeBase + 0x2EBE50;
		LeaderData__say_full_nameAddr = (BYTE*)hExeBase + 0x2EBE90;
		LeaderData__num_team_membersAddr = (BYTE*)hExeBase + 0x2EBF90;
		LeaderData__get_diffAddr = (BYTE*)hExeBase + 0x2EC000;
		LeaderData__get_teamAddr = (BYTE*)hExeBase + 0x2EC040;
		LeaderData__get_playerAddr = (BYTE*)hExeBase + 0x2EC0F0;
		LeaderData__any_humansAddr = (BYTE*)hExeBase + 0x2EC130;
		LeaderData__is_humanAddr = (BYTE*)hExeBase + 0x2EC170;
		Leader__chat_to_localAddr = (BYTE*)hExeBase + 0x2EC520;
		Leader__compute_scoreAddr = (BYTE*)hExeBase + 0x2EC560;
		Leader__set_diploAddr = (BYTE*)hExeBase + 0x2EC6A0;
		Leader__victoryAddr = (BYTE*)hExeBase + 0x2EC9B0;
		Leaders__end_process_allAddr = (BYTE*)hExeBase + 0x2ED070;
		Leaders__process_allAddr = (BYTE*)hExeBase + 0x2ED2A0;
		Leaders__clearAddr = (BYTE*)hExeBase + 0x2ED5D0;
		Leaders__initAddr = (BYTE*)hExeBase + 0x2ED850;
		Leaders__LeadersAddr = (BYTE*)hExeBase + 0x2ED900;
		LeaderData__DeleteLeaderDataAddr = (BYTE*)hExeBase + 0x2ED9A0;
		LeaderData__is_allyAddr = (BYTE*)hExeBase + 0x2EDB50;
		LeaderOptions__log_dataAddr = (BYTE*)hExeBase + 0x2F1480;
		LeaderOptionData__log_dataAddr = (BYTE*)hExeBase + 0x2F16A0;
		LeaderOptionData__walk_dataAddr = (BYTE*)hExeBase + 0x2F18B0;
		LeaderOption__closeAddr = (BYTE*)hExeBase + 0x2F1940;
		LeaderOptions__walk_dataAddr = (BYTE*)hExeBase + 0x2F19A0;
		LeaderOptionOut__updateAddr = (BYTE*)hExeBase + 0x2F1A60;
		LeaderOption__synch_with_prefsAddr = (BYTE*)hExeBase + 0x2F1B50;
		LeaderOption__initAddr = (BYTE*)hExeBase + 0x2F1C60;
		LeaderOptions__closeAddr = (BYTE*)hExeBase + 0x2F1CD0;
		LeaderOptions__initAddr = (BYTE*)hExeBase + 0x2F1D40;
		LeaderOption__LeaderOptionAddr = (BYTE*)hExeBase + 0x2F1DB0;
		LeaderOptions__LeaderOptionsAddr = (BYTE*)hExeBase + 0x2F1DD0;

		


		


		ScenarioFuncSet__init_funcsAddr = (BYTE*)hExeBase + 0x5C7570;
		ScriptFuncSet__add_new_funcAddr = (BYTE*)hExeBase + 0x5D4DA0;
		ScriptFunc__add_paramAddr = (BYTE*)hExeBase + 0x5D4F20;

		CityData__pop_capAddr = (BYTE*)hExeBase + 0x337D40;



        GameAccessConst__gamec = *(reinterpret_cast<Game**>(reinterpret_cast<BYTE*>(hExeBase) + 0x8061E8));
		GameAccessConst__leadersc = *(reinterpret_cast< Leaders**>(reinterpret_cast<BYTE*>(hExeBase) + 0x8061E0));
		GameAccess__game_random = *(reinterpret_cast<Random**>(reinterpret_cast<BYTE*>(hExeBase) + 0x806184));
		GameAccess__constants = *(reinterpret_cast<Constants**>(reinterpret_cast<BYTE*>(hExeBase) + 0x8061F0));

        
       

        

        HookFunctionBegin(LeaderData__is_team, &LeaderData__is_teamAddr);
        HookFunctionBegin(LeaderData__get_player, &LeaderData__get_playerAddr);
        HookFunctionBegin(LeaderData__is_ally, &LeaderData__is_allyAddr);
		HookFunctionBegin(String__String, &String__StringAddr);
		HookFunctionBegin(GameLog__say_checksum, &GameLog__say_checksumAddr);
		HookFunctionBegin(String__close, &String__closeAddr);
		HookFunctionBegin(Random__get, &Random__getAddr);
		HookFunctionBegin(Game__init_tribes, &Game__init_tribesAddr);

		HookFunctionBegin(Leader__DeleteLeader, &Leader__DeleteLeaderAddr);
		HookFunctionBegin(LeaderOut__DeleteLeaderOut, &LeaderOut__DeleteLeaderOutAddr);
		HookFunctionBegin(LeaderData__get_age, &LeaderData__get_ageAddr);
		HookFunctionBegin(LeaderData__bucket_set, &LeaderData__bucket_setAddr);
		HookFunctionBegin(LeaderData__bucket_add, &LeaderData__bucket_addAddr);
		HookFunctionBegin(LeaderData__income_get, &LeaderData__income_getAddr);
		HookFunctionBegin(LeaderData__resource_cap_get, &LeaderData__resource_cap_getAddr);
		HookFunctionBegin(LeaderData__get_epoch, &LeaderData__get_epochAddr);
		HookFunctionBegin(LeaderData__bucket_get, &LeaderData__bucket_getAddr);
		HookFunctionBegin(LeaderData__epochs_get, &LeaderData__epochs_getAddr);
		HookFunctionBegin(Leader__gain_tech, &Leader__gain_techAddr);
		HookFunctionBegin(LeaderData__support_get, &LeaderData__support_getAddr);
		HookFunctionBegin(LeaderData__resources_get, &LeaderData__resources_getAddr);
		HookFunctionBegin(LeaderData__resource_cap_add, &LeaderData__resource_cap_addAddr);
		HookFunctionBegin(Leader__close, &Leader__closeAddr);
		HookFunctionBegin(Leaders__best_human_age_stamp, &Leaders__best_human_age_stampAddr);
		HookFunctionBegin(Leaders__max_enemy_age, &Leaders__max_enemy_ageAddr);
		HookFunctionBegin(Leaders__max_age, &Leaders__max_ageAddr);
		HookFunctionBegin(Leaders__max_human_age, &Leaders__max_human_ageAddr);
		HookFunctionBegin(Leaders__max_human_cities, &Leaders__max_human_citiesAddr);
		HookFunctionBegin(Leader__end_process, &Leader__end_processAddr);
		HookFunctionBegin(Leader__process, &Leader__processAddr);
		HookFunctionBegin(Leader__process_elimination, &Leader__process_eliminationAddr);
		HookFunctionBegin(Leader__receive_chat, &Leader__receive_chatAddr);
		HookFunctionBegin(Leader__process_taunts, &Leader__process_tauntsAddr);
		HookFunctionBegin(Leader__receive_taunt, &Leader__receive_tauntAddr);
		HookFunctionBegin(Leader__process_taunt, &Leader__process_tauntAddr);
		HookFunctionBegin(Leader__receive_ping, &Leader__receive_pingAddr);
		HookFunctionBegin(Leader__compute_pop_score, &Leader__compute_pop_scoreAddr);
		HookFunctionBegin(Leader__compute_unit_upgrades_score, &Leader__compute_unit_upgrades_scoreAddr);
		HookFunctionBegin(Leader__compute_economy_score, &Leader__compute_economy_scoreAddr);
		HookFunctionBegin(Leader__compute_research_score, &Leader__compute_research_scoreAddr);
		HookFunctionBegin(Leader__compute_build_score, &Leader__compute_build_scoreAddr);
		HookFunctionBegin(Leader__compute_unit_score, &Leader__compute_unit_scoreAddr);
		HookFunctionBegin(Leader__compute_explore_score, &Leader__compute_explore_scoreAddr);
		HookFunctionBegin(Leader__check_transport, &Leader__check_transportAddr);
		HookFunctionBegin(Leader__check_explore, &Leader__check_exploreAddr);
		HookFunctionBegin(Leader__diplomacy, &Leader__diplomacyAddr);
		HookFunctionBegin(LeaderData__resource_value, &LeaderData__resource_valueAddr);
		HookFunctionBegin(Leader__create_buildings, &Leader__create_buildingsAddr);
		HookFunctionBegin(Leader__create_units, &Leader__create_unitsAddr);
		HookFunctionBegin(Leader__upgrade_units, &Leader__upgrade_unitsAddr);
		HookFunctionBegin(Leader__research_techs, &Leader__research_techsAddr);
		HookFunctionBegin(Leader__found_cities, &Leader__found_citiesAddr);
		HookFunctionBegin(Leader__market_speculation, &Leader__market_speculationAddr);
		HookFunctionBegin(Leader__production_ai_setup, &Leader__production_ai_setupAddr);
		HookFunctionBegin(Leader__make_stuff, &Leader__make_stuffAddr);
		HookFunctionBegin(Leader__use_market, &Leader__use_marketAddr);
		HookFunctionBegin(Leader__make_this, &Leader__make_thisAddr);
		HookFunctionBegin(Leader__say_pay, &Leader__say_payAddr);
		HookFunctionBegin(Leader__can_pay, &Leader__can_payAddr);
		HookFunctionBegin(Leader__check_orphaned_buildings, &Leader__check_orphaned_buildingsAddr);
		HookFunctionBegin(Leader__produce_spell, &Leader__produce_spellAddr);
		HookFunctionBegin(Leader__produce_tech, &Leader__produce_techAddr);
		HookFunctionBegin(Leader__produce_city, &Leader__produce_cityAddr);
		HookFunctionBegin(Leader__produce_upgrade, &Leader__produce_upgradeAddr);
		HookFunctionBegin(Leader__produce_unit, &Leader__produce_unitAddr);
		HookFunctionBegin(Leader__unit_prod_value, &Leader__unit_prod_valueAddr);
		HookFunctionBegin(Leader__check_income, &Leader__check_incomeAddr);
		HookFunctionBegin(Leader__compute_sites, &Leader__compute_sitesAddr);
		HookFunctionBegin(Leader__compute_site_stats, &Leader__compute_site_statsAddr);
		HookFunctionBegin(Leader__get_need, &Leader__get_needAddr);
		HookFunctionBegin(Leader__calc_anti_attrition, &Leader__calc_anti_attritionAddr);
		HookFunctionBegin(Leader__calc_attrition, &Leader__calc_attritionAddr);
		HookFunctionBegin(Leader__calc_misery, &Leader__calc_miseryAddr);
		HookFunctionBegin(Leader__queued_units, &Leader__queued_unitsAddr);
		HookFunctionBegin(Leader__verify_spell_flags, &Leader__verify_spell_flagsAddr);
		HookFunctionBegin(Leader__gather, &Leader__gatherAddr);
		HookFunctionBegin(Leader__do_gather, &Leader__do_gatherAddr);
		HookFunctionBegin(Leader__calc_resource_caps, &Leader__calc_resource_capsAddr);
		HookFunctionBegin(Leader__calc_support, &Leader__calc_supportAddr);
		HookFunctionBegin(Leader__calc_gather, &Leader__calc_gatherAddr);
		HookFunctionBegin(Leader__calc_wall_stats, &Leader__calc_wall_statsAddr);
		HookFunctionBegin(Leader__calc_unit_stats, &Leader__calc_unit_statsAddr);
		HookFunctionBegin(Leader__action_buy, &Leader__action_buyAddr);
		HookFunctionBegin(Leader__action_sell, &Leader__action_sellAddr);
		HookFunctionBegin(Leader__tell_embargo, &Leader__tell_embargoAddr);
		HookFunctionBegin(Leader__do_buy, &Leader__do_buyAddr);
		HookFunctionBegin(Leader__do_sell, &Leader__do_sellAddr);
		HookFunctionBegin(Leader__random_personality, &Leader__random_personalityAddr);
		HookFunctionBegin(Leader__ally_diplo, &Leader__ally_diploAddr);
		HookFunctionBegin(Leader__eject_my_shit_from_his_ass, &Leader__eject_my_shit_from_his_assAddr);
		HookFunctionBegin(Leader__has_agenda, &Leader__has_agendaAddr);
		HookFunctionBegin(Leader__agenda_off, &Leader__agenda_offAddr);
		HookFunctionBegin(Leader__treaty_off, &Leader__treaty_offAddr);
		HookFunctionBegin(Leader__action_reject, &Leader__action_rejectAddr);
		HookFunctionBegin(Leader__action_agree, &Leader__action_agreeAddr);
		HookFunctionBegin(Leader__action_respond, &Leader__action_respondAddr);
		HookFunctionBegin(Leader__consider_tribute, &Leader__consider_tributeAddr);
		HookFunctionBegin(Leader__notify_deal, &Leader__notify_dealAddr);
		HookFunctionBegin(Leader__action_attack, &Leader__action_attackAddr);
		HookFunctionBegin(Leader__action_treaty, &Leader__action_treatyAddr);
		HookFunctionBegin(Leader__action_clear_all, &Leader__action_clear_allAddr);
		HookFunctionBegin(Leader__action_clear_tributes, &Leader__action_clear_tributesAddr);
		HookFunctionBegin(Leader__action_demand_tribute, &Leader__action_demand_tributeAddr);
		HookFunctionBegin(Leader__action_offer, &Leader__action_offerAddr);
		HookFunctionBegin(Leader__action_spline, &Leader__action_splineAddr);
		HookFunctionBegin(Leader__action_ping, &Leader__action_pingAddr);
		HookFunctionBegin(Leader__clear_agree, &Leader__clear_agreeAddr);
		HookFunctionBegin(Leader__recapture_capital, &Leader__recapture_capitalAddr);
		HookFunctionBegin(Leader__defeat_by, &Leader__defeat_byAddr);
		HookFunctionBegin(Leader__blow_up_units, &Leader__blow_up_unitsAddr);
		HookFunctionBegin(Leader__blow_up_buildings, &Leader__blow_up_buildingsAddr);
		HookFunctionBegin(Leader__blow_up_towers, &Leader__blow_up_towersAddr);
		HookFunctionBegin(Leader__set_diff, &Leader__set_diffAddr);
		HookFunctionBegin(Leader__fix_tech_flags, &Leader__fix_tech_flagsAddr);
		HookFunctionBegin(Leader__set_age, &Leader__set_ageAddr);
		HookFunctionBegin(Leader__set_epoch, &Leader__set_epochAddr);
		HookFunctionBegin(Leader__lose_tech, &Leader__lose_techAddr);
		HookFunctionBegin(Leader__pay_dow, &Leader__pay_dowAddr);
		HookFunctionBegin(Leader__Leader, &Leader__LeaderAddr);
		HookFunctionBegin(LeaderOut__issue_chat, &LeaderOut__issue_chatAddr);
		HookFunctionBegin(LeaderOut__issue_ping, &LeaderOut__issue_pingAddr);
		HookFunctionBegin(LeaderOut__display_chat, &LeaderOut__display_chatAddr);
		HookFunctionBegin(LeaderOut__say_meet, &LeaderOut__say_meetAddr);
		HookFunctionBegin(LeaderOut__warn_resources, &LeaderOut__warn_resourcesAddr);
		HookFunctionBegin(LeaderOut__issue_sell, &LeaderOut__issue_sellAddr);
		HookFunctionBegin(LeaderOut__issue_buy, &LeaderOut__issue_buyAddr);
		HookFunctionBegin(LeaderOut__issue_propose_attack, &LeaderOut__issue_propose_attackAddr);
		HookFunctionBegin(LeaderOut__issue_demand_tribute, &LeaderOut__issue_demand_tributeAddr);
		HookFunctionBegin(LeaderOut__issue_tribute, &LeaderOut__issue_tributeAddr);
		HookFunctionBegin(LeaderOut__issue_reject, &LeaderOut__issue_rejectAddr);
		HookFunctionBegin(LeaderOut__issue_accept, &LeaderOut__issue_acceptAddr);
		HookFunctionBegin(LeaderOut__issue_clear_all, &LeaderOut__issue_clear_allAddr);
		HookFunctionBegin(LeaderOut__issue_clear_tributes, &LeaderOut__issue_clear_tributesAddr);
		HookFunctionBegin(LeaderOut__issue_declare, &LeaderOut__issue_declareAddr);
		HookFunctionBegin(LeaderOut__issue_treaty, &LeaderOut__issue_treatyAddr);
		HookFunctionBegin(LeaderData__strong_vs, &LeaderData__strong_vsAddr);
		HookFunctionBegin(LeaderData__weak_vs, &LeaderData__weak_vsAddr);
		HookFunctionBegin(LeaderData__counter_unit, &LeaderData__counter_unitAddr);
		HookFunctionBegin(LeaderData__care_if_cost_discovered, &LeaderData__care_if_cost_discoveredAddr);
		HookFunctionBegin(LeaderData__locked_transport, &LeaderData__locked_transportAddr);
		HookFunctionBegin(LeaderData__scale_tribute, &LeaderData__scale_tributeAddr);
		HookFunctionBegin(LeaderData__get_nuke_embargo, &LeaderData__get_nuke_embargoAddr);
		HookFunctionBegin(LeaderData__get_my_nuke_embargo, &LeaderData__get_my_nuke_embargoAddr);
		HookFunctionBegin(LeaderData__can_nuke, &LeaderData__can_nukeAddr);
		HookFunctionBegin(LeaderData__can_buy_sell, &LeaderData__can_buy_sellAddr);
		HookFunctionBegin(LeaderData__has_market, &LeaderData__has_marketAddr);
		HookFunctionBegin(LeaderData__get_reg_buildings, &LeaderData__get_reg_buildingsAddr);
		HookFunctionBegin(LeaderData__has_capital, &LeaderData__has_capitalAddr);
		HookFunctionBegin(LeaderData__calc_city_resources, &LeaderData__calc_city_resourcesAddr);
		HookFunctionBegin(LeaderData__any_proposals, &LeaderData__any_proposalsAddr);
		HookFunctionBegin(LeaderData__is_reject, &LeaderData__is_rejectAddr);
		HookFunctionBegin(LeaderData__is_any_offer, &LeaderData__is_any_offerAddr);
		HookFunctionBegin(LeaderData__is_agree, &LeaderData__is_agreeAddr);
		HookFunctionBegin(LeaderData__is_tribute_period, &LeaderData__is_tribute_periodAddr);
		HookFunctionBegin(LeaderData__afford_dow, &LeaderData__afford_dowAddr);
		HookFunctionBegin(LeaderData__get_mvp_score, &LeaderData__get_mvp_scoreAddr);
		HookFunctionBegin(LeaderData__get_enemy_unbuilt_wonder_value, &LeaderData__get_enemy_unbuilt_wonder_valueAddr);
		HookFunctionBegin(LeaderData__get_unbuilt_wonder_value, &LeaderData__get_unbuilt_wonder_valueAddr);
		HookFunctionBegin(LeaderData__can_see_borders, &LeaderData__can_see_bordersAddr);
		HookFunctionBegin(LeaderData__get_total_cities, &LeaderData__get_total_citiesAddr);
		HookFunctionBegin(LeaderData__get_city_limit, &LeaderData__get_city_limitAddr);
		HookFunctionBegin(LeaderData__is_boomer, &LeaderData__is_boomerAddr);
		HookFunctionBegin(LeaderData__is_rusher, &LeaderData__is_rusherAddr);
		HookFunctionBegin(LeaderData__num_allies, &LeaderData__num_alliesAddr);
		HookFunctionBegin(LeaderData__get_team_terr, &LeaderData__get_team_terrAddr);
		HookFunctionBegin(LeaderData__get_team_economic, &LeaderData__get_team_economicAddr);
		HookFunctionBegin(LeaderData__get_economic, &LeaderData__get_economicAddr);
		HookFunctionBegin(LeaderData__get_team_score, &LeaderData__get_team_scoreAddr);
		HookFunctionBegin(LeaderData__get_mod_resource_cap, &LeaderData__get_mod_resource_capAddr);
		HookFunctionBegin(LeaderData__get_econ_mod, &LeaderData__get_econ_modAddr);
		HookFunctionBegin(LeaderData__get_gather_handicap, &LeaderData__get_gather_handicapAddr);
		HookFunctionBegin(LeaderData__get_handicap_level, &LeaderData__get_handicap_levelAddr);
		HookFunctionBegin(LeaderData__walk_data, &LeaderData__walk_dataAddr);
		HookFunctionBegin(LeaderData__get_govs_taken, &LeaderData__get_govs_takenAddr);
		HookFunctionBegin(LeaderData__get_gov, &LeaderData__get_govAddr);
		HookFunctionBegin(LeaderData__get_key_type, &LeaderData__get_key_typeAddr);
		HookFunctionBegin(LeaderData__get_city_upgrade_level, &LeaderData__get_city_upgrade_levelAddr);
		HookFunctionBegin(LeaderData__get_merchants_level, &LeaderData__get_merchants_levelAddr);
		HookFunctionBegin(LeaderData__get_taxation, &LeaderData__get_taxationAddr);
		HookFunctionBegin(LeaderData__get_fishermen, &LeaderData__get_fishermenAddr);
		HookFunctionBegin(LeaderData__get_lowest_epoch, &LeaderData__get_lowest_epochAddr);
		HookFunctionBegin(LeaderData__get_highest_epoch, &LeaderData__get_highest_epochAddr);
		HookFunctionBegin(LeaderData__compute_epoch, &LeaderData__compute_epochAddr);
		HookFunctionBegin(LeaderData__get_epoch_base, &LeaderData__get_epoch_baseAddr);
		HookFunctionBegin(LeaderData__special_preq, &LeaderData__special_preqAddr);
		HookFunctionBegin(LeaderData__techs_per_age, &LeaderData__techs_per_ageAddr);
		HookFunctionBegin(LeaderData__starting_age, &LeaderData__starting_ageAddr);
		HookFunctionBegin(LeaderData__all_techs, &LeaderData__all_techsAddr);
		HookFunctionBegin(LeaderData__LeaderData, &LeaderData__LeaderDataAddr);
		HookFunctionBegin(LeaderData__has_rare_conquest, &LeaderData__has_rare_conquestAddr);
		HookFunctionBegin(LeaderData__is_shared_team, &LeaderData__is_shared_teamAddr);
		HookFunctionBegin(LeaderData__tribe_can_type, &LeaderData__tribe_can_typeAddr);
		HookFunctionBegin(LeaderDataEncrypt__log_data, &LeaderDataEncrypt__log_dataAddr);
		HookFunctionBegin(LeaderDataEncrypt__init, &LeaderDataEncrypt__initAddr);
		HookFunctionBegin(Leader__new_rare, &Leader__new_rareAddr);
		HookFunctionBegin(LeaderData__get_fort_borders, &LeaderData__get_fort_bordersAddr);
		HookFunctionBegin(LeaderData__get_target, &LeaderData__get_targetAddr);
		HookFunctionBegin(Leader__tech_avail, &Leader__tech_availAddr);
		HookFunctionBegin(LeaderData__get_support_count, &LeaderData__get_support_countAddr);
		HookFunctionBegin(LeaderData__get_unbuilt_wonders, &LeaderData__get_unbuilt_wondersAddr);
		HookFunctionBegin(LeaderData__get_team_wonders, &LeaderData__get_team_wondersAddr);
		HookFunctionBegin(LeaderData__get_team_unbuilt_wonders, &LeaderData__get_team_unbuilt_wondersAddr);
		HookFunctionBegin(LeaderData__has_unbuilt_wonder, &LeaderData__has_unbuilt_wonderAddr);
		HookFunctionBegin(LeaderData__team_has_unbuilt_wonder, &LeaderData__team_has_unbuilt_wonderAddr);
		HookFunctionBegin(LeaderData__cost_factor_dow, &LeaderData__cost_factor_dowAddr);
		HookFunctionBegin(LeaderData__calc_science_discount, &LeaderData__calc_science_discountAddr);
		HookFunctionBegin(LeaderData__get_handicap, &LeaderData__get_handicapAddr);
		HookFunctionBegin(LeaderData__get_ships_speed_upgrade, &LeaderData__get_ships_speed_upgradeAddr);
		HookFunctionBegin(LeaderData__get_troops_speed_upgrade, &LeaderData__get_troops_speed_upgradeAddr);
		HookFunctionBegin(LeaderData__get_vehicle_speed_upgrade, &LeaderData__get_vehicle_speed_upgradeAddr);
		HookFunctionBegin(LeaderData__get_enemy_wonder_value, &LeaderData__get_enemy_wonder_valueAddr);
		HookFunctionBegin(LeaderData__get_team_wonder_value, &LeaderData__get_team_wonder_valueAddr);
		HookFunctionBegin(Leader__inc_hit_event, &Leader__inc_hit_eventAddr);
		HookFunctionBegin(Leader__inc_damage_event, &Leader__inc_damage_eventAddr);
		HookFunctionBegin(LeaderData__get_name, &LeaderData__get_nameAddr);
		HookFunctionBegin(Leader__inc_kill_event, &Leader__inc_kill_eventAddr);
		HookFunctionBegin(Leader__inc_death_event, &Leader__inc_death_eventAddr);
		HookFunctionBegin(Leader__action_declare, &Leader__action_declareAddr);
		HookFunctionBegin(LeaderData__get_building_speed_upgrade, &LeaderData__get_building_speed_upgradeAddr);
		HookFunctionBegin(LeaderData__get_building_hp_upgrade, &LeaderData__get_building_hp_upgradeAddr);
		HookFunctionBegin(LeaderData__get_fort_los, &LeaderData__get_fort_losAddr);
		HookFunctionBegin(LeaderData__get_tower_fort_los, &LeaderData__get_tower_fort_losAddr);
		HookFunctionBegin(LeaderData__get_fort_range, &LeaderData__get_fort_rangeAddr);
		HookFunctionBegin(LeaderData__get_tower_fort_range, &LeaderData__get_tower_fort_rangeAddr);
		HookFunctionBegin(LeaderData__calc_resource_bonuses, &LeaderData__calc_resource_bonusesAddr);
		HookFunctionBegin(LeaderData__get_university, &LeaderData__get_universityAddr);
		HookFunctionBegin(LeaderData__get_farm_limit, &LeaderData__get_farm_limitAddr);
		HookFunctionBegin(LeaderData__get_fort_garrison, &LeaderData__get_fort_garrisonAddr);
		HookFunctionBegin(LeaderData__get_granary, &LeaderData__get_granaryAddr);
		HookFunctionBegin(LeaderData__get_lumbermill, &LeaderData__get_lumbermillAddr);
		HookFunctionBegin(LeaderData__get_smelter, &LeaderData__get_smelterAddr);
		HookFunctionBegin(LeaderData__get_temple_borders, &LeaderData__get_temple_bordersAddr);
		HookFunctionBegin(LeaderData__get_temple_hp, &LeaderData__get_temple_hpAddr);
		HookFunctionBegin(LeaderData__get_temple_range, &LeaderData__get_temple_rangeAddr);
		HookFunctionBegin(LeaderData__researching, &LeaderData__researchingAddr);
		HookFunctionBegin(LeaderData__get_wonders, &LeaderData__get_wondersAddr);
		HookFunctionBegin(LeaderData__get_first_library, &LeaderData__get_first_libraryAddr);
		HookFunctionBegin(LeaderData__get_radius, &LeaderData__get_radiusAddr);
		HookFunctionBegin(LeaderData__has_preq, &LeaderData__has_preqAddr);
		HookFunctionBegin(LeaderData__check_predecessor, &LeaderData__check_predecessorAddr);
		HookFunctionBegin(LeaderData__type_eligible, &LeaderData__type_eligibleAddr);
		HookFunctionBegin(LeaderData__calc_market_prices, &LeaderData__calc_market_pricesAddr);
		HookFunctionBegin(Leader__calc_pop_cap, &Leader__calc_pop_capAddr);
		HookFunctionBegin(Leader__lost_a_city, &Leader__lost_a_cityAddr);
		HookFunctionBegin(Leader__lost_capital, &Leader__lost_capitalAddr);
		HookFunctionBegin(Leader__lose_building, &Leader__lose_buildingAddr);
		HookFunctionBegin(LeaderData__get_caravan_limit, &LeaderData__get_caravan_limitAddr);
		HookFunctionBegin(LeaderData__get_gov_hero, &LeaderData__get_gov_heroAddr);
		HookFunctionBegin(LeaderData__get_buildings, &LeaderData__get_buildingsAddr);
		HookFunctionBegin(Leader__gain_building, &Leader__gain_buildingAddr);
		HookFunctionBegin(LeaderData__get_building_cities, &LeaderData__get_building_citiesAddr);
		HookFunctionBegin(LeaderData__get_decoy_time, &LeaderData__get_decoy_timeAddr);
		HookFunctionBegin(LeaderData__has_rare, &LeaderData__has_rareAddr);
		HookFunctionBegin(LeaderData__get_units, &LeaderData__get_unitsAddr);
		HookFunctionBegin(LeaderData__get_general_upgrade, &LeaderData__get_general_upgradeAddr);
		HookFunctionBegin(LeaderData__get_supply_upgrade, &LeaderData__get_supply_upgradeAddr);
		HookFunctionBegin(LeaderData__calc_rare, &LeaderData__calc_rareAddr);
		HookFunctionBegin(LeaderData__get_attrition, &LeaderData__get_attritionAddr);
		HookFunctionBegin(LeaderData__get_anti_attrition, &LeaderData__get_anti_attritionAddr);
		HookFunctionBegin(LeaderData__has_bonus, &LeaderData__has_bonusAddr);
		HookFunctionBegin(LeaderData__has_spell, &LeaderData__has_spellAddr);
		HookFunctionBegin(LeaderData__can_transport, &LeaderData__can_transportAddr);
		HookFunctionBegin(LeaderData__has_tech, &LeaderData__has_techAddr);
		HookFunctionBegin(LeaderData__at_city_limit, &LeaderData__at_city_limitAddr);
		HookFunctionBegin(LeaderData__get_queued, &LeaderData__get_queuedAddr);
		HookFunctionBegin(Leader__track_unit_type, &Leader__track_unit_typeAddr);
		HookFunctionBegin(LeaderData__is_coop, &LeaderData__is_coopAddr);
		HookFunctionBegin(Leader__track_queued, &Leader__track_queuedAddr);
		HookFunctionBegin(LeaderData__has_general, &LeaderData__has_generalAddr);
		HookFunctionBegin(LeaderData__get_spy_upgrade, &LeaderData__get_spy_upgradeAddr);
		HookFunctionBegin(LeaderData__has_upgrade, &LeaderData__has_upgradeAddr);
		HookFunctionBegin(LeaderData__get_troops_los_upgrade, &LeaderData__get_troops_los_upgradeAddr);
		HookFunctionBegin(LeaderData__has_conquest_bonus, &LeaderData__has_conquest_bonusAddr);
		HookFunctionBegin(Leader__treaty_on, &Leader__treaty_onAddr);
		HookFunctionBegin(Leader__agenda_on, &Leader__agenda_onAddr);
		HookFunctionBegin(LeaderData__has_treaty, &LeaderData__has_treatyAddr);
		HookFunctionBegin(LeaderData__is_peace, &LeaderData__is_peaceAddr);
		HookFunctionBegin(Leader__meet, &Leader__meetAddr);
		HookFunctionBegin(LeaderData__is_target, &LeaderData__is_targetAddr);
		HookFunctionBegin(LeaderData__get_heal_level, &LeaderData__get_heal_levelAddr);
		HookFunctionBegin(LeaderData__check_population, &LeaderData__check_populationAddr);
		HookFunctionBegin(LeaderData__has_tribe_bonus, &LeaderData__has_tribe_bonusAddr);
		HookFunctionBegin(Leader__produce_building, &Leader__produce_buildingAddr);
		HookFunctionBegin(LeaderData__get_graft, &LeaderData__get_graftAddr);
		HookFunctionBegin(LeaderData__current_upgrade, &LeaderData__current_upgradeAddr);
		HookFunctionBegin(Leader__reset_obs_flags, &Leader__reset_obs_flagsAddr);
		HookFunctionBegin(LeaderData__type_avail, &LeaderData__type_availAddr);
		HookFunctionBegin(Leader__reset_score, &Leader__reset_scoreAddr);
		HookFunctionBegin(Leaders__walk_data, &Leaders__walk_dataAddr);
		HookFunctionBegin(Leader__init, &Leader__initAddr);
		HookFunctionBegin(LeaderData__log_data, &LeaderData__log_dataAddr);
		HookFunctionBegin(LeaderData__find_capital, &LeaderData__find_capitalAddr);
		HookFunctionBegin(LeaderData__get_diplo, &LeaderData__get_diploAddr);
		HookFunctionBegin(LeaderData__is_enemy, &LeaderData__is_enemyAddr);
		HookFunctionBegin(LeaderData__is_neutral, &LeaderData__is_neutralAddr);
		HookFunctionBegin(LeaderData__get_wonder_net, &LeaderData__get_wonder_netAddr);
		HookFunctionBegin(LeaderData__get_wonder_value, &LeaderData__get_wonder_valueAddr);
		HookFunctionBegin(LeaderData__has_wonder, &LeaderData__has_wonderAddr);
		HookFunctionBegin(LeaderData__get_nukes, &LeaderData__get_nukesAddr);
		HookFunctionBegin(LeaderData__say_full_name, &LeaderData__say_full_nameAddr);
		HookFunctionBegin(LeaderData__num_team_members, &LeaderData__num_team_membersAddr);
		HookFunctionBegin(LeaderData__get_diff, &LeaderData__get_diffAddr);
		HookFunctionBegin(LeaderData__get_team, &LeaderData__get_teamAddr);
		HookFunctionBegin(LeaderData__get_player, &LeaderData__get_playerAddr);
		HookFunctionBegin(LeaderData__any_humans, &LeaderData__any_humansAddr);
		HookFunctionBegin(LeaderData__is_human, &LeaderData__is_humanAddr);
		HookFunctionBegin(Leader__chat_to_local, &Leader__chat_to_localAddr);
		HookFunctionBegin(Leader__compute_score, &Leader__compute_scoreAddr);
		HookFunctionBegin(Leader__set_diplo, &Leader__set_diploAddr);
		HookFunctionBegin(Leader__victory, &Leader__victoryAddr);
		HookFunctionBegin(Leaders__end_process_all, &Leaders__end_process_allAddr);
		HookFunctionBegin(Leaders__process_all, &Leaders__process_allAddr);
		HookFunctionBegin(Leaders__clear, &Leaders__clearAddr);
		HookFunctionBegin(Leaders__init, &Leaders__initAddr);
		HookFunctionBegin(Leaders__Leaders, &Leaders__LeadersAddr);
		HookFunctionBegin(LeaderData__DeleteLeaderData, &LeaderData__DeleteLeaderDataAddr);
		HookFunctionBegin(LeaderData__is_ally, &LeaderData__is_allyAddr);
		HookFunctionBegin(LeaderOptions__log_data, &LeaderOptions__log_dataAddr);
		HookFunctionBegin(LeaderOptionData__log_data, &LeaderOptionData__log_dataAddr);
		HookFunctionBegin(LeaderOptionData__walk_data, &LeaderOptionData__walk_dataAddr);
		HookFunctionBegin(LeaderOption__close, &LeaderOption__closeAddr);
		HookFunctionBegin(LeaderOptions__walk_data, &LeaderOptions__walk_dataAddr);
		HookFunctionBegin(LeaderOptionOut__update, &LeaderOptionOut__updateAddr);
		HookFunctionBegin(LeaderOption__synch_with_prefs, &LeaderOption__synch_with_prefsAddr);
		HookFunctionBegin(LeaderOption__init, &LeaderOption__initAddr);
		HookFunctionBegin(LeaderOptions__close, &LeaderOptions__closeAddr);
		HookFunctionBegin(LeaderOptions__init, &LeaderOptions__initAddr);
		HookFunctionBegin(LeaderOption__LeaderOption, &LeaderOption__LeaderOptionAddr);
		HookFunctionBegin(LeaderOptions__LeaderOptions, &LeaderOptions__LeaderOptionsAddr);


        


        HookFunctionBegin(ScenarioFuncSet__init_funcs, &ScenarioFuncSet__init_funcsAddr);
		HookFunctionBegin(ScriptFuncSet__add_new_func, &ScriptFuncSet__add_new_funcAddr);

		HookFunctionBegin(CityData__pop_cap, &CityData__pop_capAddr);



        
        Old_LeaderData__is_team = (decltype(Old_LeaderData__is_team))LeaderData__is_teamAddr;
        Old_LeaderData__get_player = (decltype(Old_LeaderData__get_player))LeaderData__get_playerAddr;
        Old_LeaderData__is_ally = (decltype(Old_LeaderData__is_ally))LeaderData__is_allyAddr;
		Old_String__String = (decltype(Old_String__String))String__StringAddr;
		Old_GameLog__say_checksum = (decltype(Old_GameLog__say_checksum))GameLog__say_checksumAddr;
		Old_String__close = (decltype(Old_String__close))String__closeAddr;
		Old_Random__get = (decltype(Old_Random__get))Random__getAddr;
		Old_Game__init_tribes = (decltype(Old_Game__init_tribes))Game__init_tribesAddr;


		Old_Leader__DeleteLeader = (decltype(Old_Leader__DeleteLeader))Leader__DeleteLeaderAddr;
		Old_LeaderOut__DeleteLeaderOut = (decltype(Old_LeaderOut__DeleteLeaderOut))LeaderOut__DeleteLeaderOutAddr;
		Old_LeaderData__get_age = (decltype(Old_LeaderData__get_age))LeaderData__get_ageAddr;
		Old_LeaderData__bucket_set = (decltype(Old_LeaderData__bucket_set))LeaderData__bucket_setAddr;
		Old_LeaderData__bucket_add = (decltype(Old_LeaderData__bucket_add))LeaderData__bucket_addAddr;
		Old_LeaderData__income_get = (decltype(Old_LeaderData__income_get))LeaderData__income_getAddr;
		Old_LeaderData__resource_cap_get = (decltype(Old_LeaderData__resource_cap_get))LeaderData__resource_cap_getAddr;
		Old_LeaderData__get_epoch = (decltype(Old_LeaderData__get_epoch))LeaderData__get_epochAddr;
		Old_LeaderData__bucket_get = (decltype(Old_LeaderData__bucket_get))LeaderData__bucket_getAddr;
		Old_LeaderData__epochs_get = (decltype(Old_LeaderData__epochs_get))LeaderData__epochs_getAddr;
		Old_Leader__gain_tech = (decltype(Old_Leader__gain_tech))Leader__gain_techAddr;
		Old_LeaderData__support_get = (decltype(Old_LeaderData__support_get))LeaderData__support_getAddr;
		Old_LeaderData__resources_get = (decltype(Old_LeaderData__resources_get))LeaderData__resources_getAddr;
		Old_LeaderData__resource_cap_add = (decltype(Old_LeaderData__resource_cap_add))LeaderData__resource_cap_addAddr;
		Old_Leader__close = (decltype(Old_Leader__close))Leader__closeAddr;
		Old_Leaders__best_human_age_stamp = (decltype(Old_Leaders__best_human_age_stamp))Leaders__best_human_age_stampAddr;
		Old_Leaders__max_enemy_age = (decltype(Old_Leaders__max_enemy_age))Leaders__max_enemy_ageAddr;
		Old_Leaders__max_age = (decltype(Old_Leaders__max_age))Leaders__max_ageAddr;
		Old_Leaders__max_human_age = (decltype(Old_Leaders__max_human_age))Leaders__max_human_ageAddr;
		Old_Leaders__max_human_cities = (decltype(Old_Leaders__max_human_cities))Leaders__max_human_citiesAddr;
		Old_Leader__end_process = (decltype(Old_Leader__end_process))Leader__end_processAddr;
		Old_Leader__process = (decltype(Old_Leader__process))Leader__processAddr;
		Old_Leader__process_elimination = (decltype(Old_Leader__process_elimination))Leader__process_eliminationAddr;
		Old_Leader__receive_chat = (decltype(Old_Leader__receive_chat))Leader__receive_chatAddr;
		Old_Leader__process_taunts = (decltype(Old_Leader__process_taunts))Leader__process_tauntsAddr;
		Old_Leader__receive_taunt = (decltype(Old_Leader__receive_taunt))Leader__receive_tauntAddr;
		Old_Leader__process_taunt = (decltype(Old_Leader__process_taunt))Leader__process_tauntAddr;
		Old_Leader__receive_ping = (decltype(Old_Leader__receive_ping))Leader__receive_pingAddr;
		Old_Leader__compute_pop_score = (decltype(Old_Leader__compute_pop_score))Leader__compute_pop_scoreAddr;
		Old_Leader__compute_unit_upgrades_score = (decltype(Old_Leader__compute_unit_upgrades_score))Leader__compute_unit_upgrades_scoreAddr;
		Old_Leader__compute_economy_score = (decltype(Old_Leader__compute_economy_score))Leader__compute_economy_scoreAddr;
		Old_Leader__compute_research_score = (decltype(Old_Leader__compute_research_score))Leader__compute_research_scoreAddr;
		Old_Leader__compute_build_score = (decltype(Old_Leader__compute_build_score))Leader__compute_build_scoreAddr;
		Old_Leader__compute_unit_score = (decltype(Old_Leader__compute_unit_score))Leader__compute_unit_scoreAddr;
		Old_Leader__compute_explore_score = (decltype(Old_Leader__compute_explore_score))Leader__compute_explore_scoreAddr;
		Old_Leader__check_transport = (decltype(Old_Leader__check_transport))Leader__check_transportAddr;
		Old_Leader__check_explore = (decltype(Old_Leader__check_explore))Leader__check_exploreAddr;
		Old_Leader__diplomacy = (decltype(Old_Leader__diplomacy))Leader__diplomacyAddr;
		Old_LeaderData__resource_value = (decltype(Old_LeaderData__resource_value))LeaderData__resource_valueAddr;
		Old_Leader__create_buildings = (decltype(Old_Leader__create_buildings))Leader__create_buildingsAddr;
		Old_Leader__create_units = (decltype(Old_Leader__create_units))Leader__create_unitsAddr;
		Old_Leader__upgrade_units = (decltype(Old_Leader__upgrade_units))Leader__upgrade_unitsAddr;
		Old_Leader__research_techs = (decltype(Old_Leader__research_techs))Leader__research_techsAddr;
		Old_Leader__found_cities = (decltype(Old_Leader__found_cities))Leader__found_citiesAddr;
		Old_Leader__market_speculation = (decltype(Old_Leader__market_speculation))Leader__market_speculationAddr;
		Old_Leader__production_ai_setup = (decltype(Old_Leader__production_ai_setup))Leader__production_ai_setupAddr;
		Old_Leader__make_stuff = (decltype(Old_Leader__make_stuff))Leader__make_stuffAddr;
		Old_Leader__use_market = (decltype(Old_Leader__use_market))Leader__use_marketAddr;
		Old_Leader__make_this = (decltype(Old_Leader__make_this))Leader__make_thisAddr;
		Old_Leader__say_pay = (decltype(Old_Leader__say_pay))Leader__say_payAddr;
		Old_Leader__can_pay = (decltype(Old_Leader__can_pay))Leader__can_payAddr;
		Old_Leader__check_orphaned_buildings = (decltype(Old_Leader__check_orphaned_buildings))Leader__check_orphaned_buildingsAddr;
		Old_Leader__produce_spell = (decltype(Old_Leader__produce_spell))Leader__produce_spellAddr;
		Old_Leader__produce_tech = (decltype(Old_Leader__produce_tech))Leader__produce_techAddr;
		Old_Leader__produce_city = (decltype(Old_Leader__produce_city))Leader__produce_cityAddr;
		Old_Leader__produce_upgrade = (decltype(Old_Leader__produce_upgrade))Leader__produce_upgradeAddr;
		Old_Leader__produce_unit = (decltype(Old_Leader__produce_unit))Leader__produce_unitAddr;
		Old_Leader__unit_prod_value = (decltype(Old_Leader__unit_prod_value))Leader__unit_prod_valueAddr;
		Old_Leader__check_income = (decltype(Old_Leader__check_income))Leader__check_incomeAddr;
		Old_Leader__compute_sites = (decltype(Old_Leader__compute_sites))Leader__compute_sitesAddr;
		Old_Leader__compute_site_stats = (decltype(Old_Leader__compute_site_stats))Leader__compute_site_statsAddr;
		Old_Leader__get_need = (decltype(Old_Leader__get_need))Leader__get_needAddr;
		Old_Leader__calc_anti_attrition = (decltype(Old_Leader__calc_anti_attrition))Leader__calc_anti_attritionAddr;
		Old_Leader__calc_attrition = (decltype(Old_Leader__calc_attrition))Leader__calc_attritionAddr;
		Old_Leader__calc_misery = (decltype(Old_Leader__calc_misery))Leader__calc_miseryAddr;
		Old_Leader__queued_units = (decltype(Old_Leader__queued_units))Leader__queued_unitsAddr;
		Old_Leader__verify_spell_flags = (decltype(Old_Leader__verify_spell_flags))Leader__verify_spell_flagsAddr;
		Old_Leader__gather = (decltype(Old_Leader__gather))Leader__gatherAddr;
		Old_Leader__do_gather = (decltype(Old_Leader__do_gather))Leader__do_gatherAddr;
		Old_Leader__calc_resource_caps = (decltype(Old_Leader__calc_resource_caps))Leader__calc_resource_capsAddr;
		Old_Leader__calc_support = (decltype(Old_Leader__calc_support))Leader__calc_supportAddr;
		Old_Leader__calc_gather = (decltype(Old_Leader__calc_gather))Leader__calc_gatherAddr;
		Old_Leader__calc_wall_stats = (decltype(Old_Leader__calc_wall_stats))Leader__calc_wall_statsAddr;
		Old_Leader__calc_unit_stats = (decltype(Old_Leader__calc_unit_stats))Leader__calc_unit_statsAddr;
		Old_Leader__action_buy = (decltype(Old_Leader__action_buy))Leader__action_buyAddr;
		Old_Leader__action_sell = (decltype(Old_Leader__action_sell))Leader__action_sellAddr;
		Old_Leader__tell_embargo = (decltype(Old_Leader__tell_embargo))Leader__tell_embargoAddr;
		Old_Leader__do_buy = (decltype(Old_Leader__do_buy))Leader__do_buyAddr;
		Old_Leader__do_sell = (decltype(Old_Leader__do_sell))Leader__do_sellAddr;
		Old_Leader__random_personality = (decltype(Old_Leader__random_personality))Leader__random_personalityAddr;
		Old_Leader__ally_diplo = (decltype(Old_Leader__ally_diplo))Leader__ally_diploAddr;
		Old_Leader__eject_my_shit_from_his_ass = (decltype(Old_Leader__eject_my_shit_from_his_ass))Leader__eject_my_shit_from_his_assAddr;
		Old_Leader__has_agenda = (decltype(Old_Leader__has_agenda))Leader__has_agendaAddr;
		Old_Leader__agenda_off = (decltype(Old_Leader__agenda_off))Leader__agenda_offAddr;
		Old_Leader__treaty_off = (decltype(Old_Leader__treaty_off))Leader__treaty_offAddr;
		Old_Leader__action_reject = (decltype(Old_Leader__action_reject))Leader__action_rejectAddr;
		Old_Leader__action_agree = (decltype(Old_Leader__action_agree))Leader__action_agreeAddr;
		Old_Leader__action_respond = (decltype(Old_Leader__action_respond))Leader__action_respondAddr;
		Old_Leader__consider_tribute = (decltype(Old_Leader__consider_tribute))Leader__consider_tributeAddr;
		Old_Leader__notify_deal = (decltype(Old_Leader__notify_deal))Leader__notify_dealAddr;
		Old_Leader__action_attack = (decltype(Old_Leader__action_attack))Leader__action_attackAddr;
		Old_Leader__action_treaty = (decltype(Old_Leader__action_treaty))Leader__action_treatyAddr;
		Old_Leader__action_clear_all = (decltype(Old_Leader__action_clear_all))Leader__action_clear_allAddr;
		Old_Leader__action_clear_tributes = (decltype(Old_Leader__action_clear_tributes))Leader__action_clear_tributesAddr;
		Old_Leader__action_demand_tribute = (decltype(Old_Leader__action_demand_tribute))Leader__action_demand_tributeAddr;
		Old_Leader__action_offer = (decltype(Old_Leader__action_offer))Leader__action_offerAddr;
		Old_Leader__action_spline = (decltype(Old_Leader__action_spline))Leader__action_splineAddr;
		Old_Leader__action_ping = (decltype(Old_Leader__action_ping))Leader__action_pingAddr;
		Old_Leader__clear_agree = (decltype(Old_Leader__clear_agree))Leader__clear_agreeAddr;
		Old_Leader__recapture_capital = (decltype(Old_Leader__recapture_capital))Leader__recapture_capitalAddr;
		Old_Leader__defeat_by = (decltype(Old_Leader__defeat_by))Leader__defeat_byAddr;
		Old_Leader__blow_up_units = (decltype(Old_Leader__blow_up_units))Leader__blow_up_unitsAddr;
		Old_Leader__blow_up_buildings = (decltype(Old_Leader__blow_up_buildings))Leader__blow_up_buildingsAddr;
		Old_Leader__blow_up_towers = (decltype(Old_Leader__blow_up_towers))Leader__blow_up_towersAddr;
		Old_Leader__set_diff = (decltype(Old_Leader__set_diff))Leader__set_diffAddr;
		Old_Leader__fix_tech_flags = (decltype(Old_Leader__fix_tech_flags))Leader__fix_tech_flagsAddr;
		Old_Leader__set_age = (decltype(Old_Leader__set_age))Leader__set_ageAddr;
		Old_Leader__set_epoch = (decltype(Old_Leader__set_epoch))Leader__set_epochAddr;
		Old_Leader__lose_tech = (decltype(Old_Leader__lose_tech))Leader__lose_techAddr;
		Old_Leader__pay_dow = (decltype(Old_Leader__pay_dow))Leader__pay_dowAddr;
		Old_Leader__Leader = (decltype(Old_Leader__Leader))Leader__LeaderAddr;
		Old_LeaderOut__issue_chat = (decltype(Old_LeaderOut__issue_chat))LeaderOut__issue_chatAddr;
		Old_LeaderOut__issue_ping = (decltype(Old_LeaderOut__issue_ping))LeaderOut__issue_pingAddr;
		Old_LeaderOut__display_chat = (decltype(Old_LeaderOut__display_chat))LeaderOut__display_chatAddr;
		Old_LeaderOut__say_meet = (decltype(Old_LeaderOut__say_meet))LeaderOut__say_meetAddr;
		Old_LeaderOut__warn_resources = (decltype(Old_LeaderOut__warn_resources))LeaderOut__warn_resourcesAddr;
		Old_LeaderOut__issue_sell = (decltype(Old_LeaderOut__issue_sell))LeaderOut__issue_sellAddr;
		Old_LeaderOut__issue_buy = (decltype(Old_LeaderOut__issue_buy))LeaderOut__issue_buyAddr;
		Old_LeaderOut__issue_propose_attack = (decltype(Old_LeaderOut__issue_propose_attack))LeaderOut__issue_propose_attackAddr;
		Old_LeaderOut__issue_demand_tribute = (decltype(Old_LeaderOut__issue_demand_tribute))LeaderOut__issue_demand_tributeAddr;
		Old_LeaderOut__issue_tribute = (decltype(Old_LeaderOut__issue_tribute))LeaderOut__issue_tributeAddr;
		Old_LeaderOut__issue_reject = (decltype(Old_LeaderOut__issue_reject))LeaderOut__issue_rejectAddr;
		Old_LeaderOut__issue_accept = (decltype(Old_LeaderOut__issue_accept))LeaderOut__issue_acceptAddr;
		Old_LeaderOut__issue_clear_all = (decltype(Old_LeaderOut__issue_clear_all))LeaderOut__issue_clear_allAddr;
		Old_LeaderOut__issue_clear_tributes = (decltype(Old_LeaderOut__issue_clear_tributes))LeaderOut__issue_clear_tributesAddr;
		Old_LeaderOut__issue_declare = (decltype(Old_LeaderOut__issue_declare))LeaderOut__issue_declareAddr;
		Old_LeaderOut__issue_treaty = (decltype(Old_LeaderOut__issue_treaty))LeaderOut__issue_treatyAddr;
		Old_LeaderData__strong_vs = (decltype(Old_LeaderData__strong_vs))LeaderData__strong_vsAddr;
		Old_LeaderData__weak_vs = (decltype(Old_LeaderData__weak_vs))LeaderData__weak_vsAddr;
		Old_LeaderData__counter_unit = (decltype(Old_LeaderData__counter_unit))LeaderData__counter_unitAddr;
		Old_LeaderData__care_if_cost_discovered = (decltype(Old_LeaderData__care_if_cost_discovered))LeaderData__care_if_cost_discoveredAddr;
		Old_LeaderData__locked_transport = (decltype(Old_LeaderData__locked_transport))LeaderData__locked_transportAddr;
		Old_LeaderData__scale_tribute = (decltype(Old_LeaderData__scale_tribute))LeaderData__scale_tributeAddr;
		Old_LeaderData__get_nuke_embargo = (decltype(Old_LeaderData__get_nuke_embargo))LeaderData__get_nuke_embargoAddr;
		Old_LeaderData__get_my_nuke_embargo = (decltype(Old_LeaderData__get_my_nuke_embargo))LeaderData__get_my_nuke_embargoAddr;
		Old_LeaderData__can_nuke = (decltype(Old_LeaderData__can_nuke))LeaderData__can_nukeAddr;
		Old_LeaderData__can_buy_sell = (decltype(Old_LeaderData__can_buy_sell))LeaderData__can_buy_sellAddr;
		Old_LeaderData__has_market = (decltype(Old_LeaderData__has_market))LeaderData__has_marketAddr;
		Old_LeaderData__get_reg_buildings = (decltype(Old_LeaderData__get_reg_buildings))LeaderData__get_reg_buildingsAddr;
		Old_LeaderData__has_capital = (decltype(Old_LeaderData__has_capital))LeaderData__has_capitalAddr;
		Old_LeaderData__calc_city_resources = (decltype(Old_LeaderData__calc_city_resources))LeaderData__calc_city_resourcesAddr;
		Old_LeaderData__any_proposals = (decltype(Old_LeaderData__any_proposals))LeaderData__any_proposalsAddr;
		Old_LeaderData__is_reject = (decltype(Old_LeaderData__is_reject))LeaderData__is_rejectAddr;
		Old_LeaderData__is_any_offer = (decltype(Old_LeaderData__is_any_offer))LeaderData__is_any_offerAddr;
		Old_LeaderData__is_agree = (decltype(Old_LeaderData__is_agree))LeaderData__is_agreeAddr;
		Old_LeaderData__is_tribute_period = (decltype(Old_LeaderData__is_tribute_period))LeaderData__is_tribute_periodAddr;
		Old_LeaderData__afford_dow = (decltype(Old_LeaderData__afford_dow))LeaderData__afford_dowAddr;
		Old_LeaderData__get_mvp_score = (decltype(Old_LeaderData__get_mvp_score))LeaderData__get_mvp_scoreAddr;
		Old_LeaderData__get_enemy_unbuilt_wonder_value = (decltype(Old_LeaderData__get_enemy_unbuilt_wonder_value))LeaderData__get_enemy_unbuilt_wonder_valueAddr;
		Old_LeaderData__get_unbuilt_wonder_value = (decltype(Old_LeaderData__get_unbuilt_wonder_value))LeaderData__get_unbuilt_wonder_valueAddr;
		Old_LeaderData__can_see_borders = (decltype(Old_LeaderData__can_see_borders))LeaderData__can_see_bordersAddr;
		Old_LeaderData__get_total_cities = (decltype(Old_LeaderData__get_total_cities))LeaderData__get_total_citiesAddr;
		Old_LeaderData__get_city_limit = (decltype(Old_LeaderData__get_city_limit))LeaderData__get_city_limitAddr;
		Old_LeaderData__is_boomer = (decltype(Old_LeaderData__is_boomer))LeaderData__is_boomerAddr;
		Old_LeaderData__is_rusher = (decltype(Old_LeaderData__is_rusher))LeaderData__is_rusherAddr;
		Old_LeaderData__num_allies = (decltype(Old_LeaderData__num_allies))LeaderData__num_alliesAddr;
		Old_LeaderData__get_team_terr = (decltype(Old_LeaderData__get_team_terr))LeaderData__get_team_terrAddr;
		Old_LeaderData__get_team_economic = (decltype(Old_LeaderData__get_team_economic))LeaderData__get_team_economicAddr;
		Old_LeaderData__get_economic = (decltype(Old_LeaderData__get_economic))LeaderData__get_economicAddr;
		Old_LeaderData__get_team_score = (decltype(Old_LeaderData__get_team_score))LeaderData__get_team_scoreAddr;
		Old_LeaderData__get_mod_resource_cap = (decltype(Old_LeaderData__get_mod_resource_cap))LeaderData__get_mod_resource_capAddr;
		Old_LeaderData__get_econ_mod = (decltype(Old_LeaderData__get_econ_mod))LeaderData__get_econ_modAddr;
		Old_LeaderData__get_gather_handicap = (decltype(Old_LeaderData__get_gather_handicap))LeaderData__get_gather_handicapAddr;
		Old_LeaderData__get_handicap_level = (decltype(Old_LeaderData__get_handicap_level))LeaderData__get_handicap_levelAddr;
		Old_LeaderData__walk_data = (decltype(Old_LeaderData__walk_data))LeaderData__walk_dataAddr;
		Old_LeaderData__get_govs_taken = (decltype(Old_LeaderData__get_govs_taken))LeaderData__get_govs_takenAddr;
		Old_LeaderData__get_gov = (decltype(Old_LeaderData__get_gov))LeaderData__get_govAddr;
		Old_LeaderData__get_key_type = (decltype(Old_LeaderData__get_key_type))LeaderData__get_key_typeAddr;
		Old_LeaderData__get_city_upgrade_level = (decltype(Old_LeaderData__get_city_upgrade_level))LeaderData__get_city_upgrade_levelAddr;
		Old_LeaderData__get_merchants_level = (decltype(Old_LeaderData__get_merchants_level))LeaderData__get_merchants_levelAddr;
		Old_LeaderData__get_taxation = (decltype(Old_LeaderData__get_taxation))LeaderData__get_taxationAddr;
		Old_LeaderData__get_fishermen = (decltype(Old_LeaderData__get_fishermen))LeaderData__get_fishermenAddr;
		Old_LeaderData__get_lowest_epoch = (decltype(Old_LeaderData__get_lowest_epoch))LeaderData__get_lowest_epochAddr;
		Old_LeaderData__get_highest_epoch = (decltype(Old_LeaderData__get_highest_epoch))LeaderData__get_highest_epochAddr;
		Old_LeaderData__compute_epoch = (decltype(Old_LeaderData__compute_epoch))LeaderData__compute_epochAddr;
		Old_LeaderData__get_epoch_base = (decltype(Old_LeaderData__get_epoch_base))LeaderData__get_epoch_baseAddr;
		Old_LeaderData__special_preq = (decltype(Old_LeaderData__special_preq))LeaderData__special_preqAddr;
		Old_LeaderData__techs_per_age = (decltype(Old_LeaderData__techs_per_age))LeaderData__techs_per_ageAddr;
		Old_LeaderData__starting_age = (decltype(Old_LeaderData__starting_age))LeaderData__starting_ageAddr;
		Old_LeaderData__all_techs = (decltype(Old_LeaderData__all_techs))LeaderData__all_techsAddr;
		Old_LeaderData__LeaderData = (decltype(Old_LeaderData__LeaderData))LeaderData__LeaderDataAddr;
		Old_LeaderData__has_rare_conquest = (decltype(Old_LeaderData__has_rare_conquest))LeaderData__has_rare_conquestAddr;
		Old_LeaderData__is_shared_team = (decltype(Old_LeaderData__is_shared_team))LeaderData__is_shared_teamAddr;
		Old_LeaderData__tribe_can_type = (decltype(Old_LeaderData__tribe_can_type))LeaderData__tribe_can_typeAddr;
		Old_LeaderDataEncrypt__log_data = (decltype(Old_LeaderDataEncrypt__log_data))LeaderDataEncrypt__log_dataAddr;
		Old_LeaderDataEncrypt__init = (decltype(Old_LeaderDataEncrypt__init))LeaderDataEncrypt__initAddr;
		Old_Leader__new_rare = (decltype(Old_Leader__new_rare))Leader__new_rareAddr;
		Old_LeaderData__get_fort_borders = (decltype(Old_LeaderData__get_fort_borders))LeaderData__get_fort_bordersAddr;
		Old_LeaderData__get_target = (decltype(Old_LeaderData__get_target))LeaderData__get_targetAddr;
		Old_Leader__tech_avail = (decltype(Old_Leader__tech_avail))Leader__tech_availAddr;
		Old_LeaderData__get_support_count = (decltype(Old_LeaderData__get_support_count))LeaderData__get_support_countAddr;
		Old_LeaderData__get_unbuilt_wonders = (decltype(Old_LeaderData__get_unbuilt_wonders))LeaderData__get_unbuilt_wondersAddr;
		Old_LeaderData__get_team_wonders = (decltype(Old_LeaderData__get_team_wonders))LeaderData__get_team_wondersAddr;
		Old_LeaderData__get_team_unbuilt_wonders = (decltype(Old_LeaderData__get_team_unbuilt_wonders))LeaderData__get_team_unbuilt_wondersAddr;
		Old_LeaderData__has_unbuilt_wonder = (decltype(Old_LeaderData__has_unbuilt_wonder))LeaderData__has_unbuilt_wonderAddr;
		Old_LeaderData__team_has_unbuilt_wonder = (decltype(Old_LeaderData__team_has_unbuilt_wonder))LeaderData__team_has_unbuilt_wonderAddr;
		Old_LeaderData__cost_factor_dow = (decltype(Old_LeaderData__cost_factor_dow))LeaderData__cost_factor_dowAddr;
		Old_LeaderData__calc_science_discount = (decltype(Old_LeaderData__calc_science_discount))LeaderData__calc_science_discountAddr;
		Old_LeaderData__get_handicap = (decltype(Old_LeaderData__get_handicap))LeaderData__get_handicapAddr;
		Old_LeaderData__get_ships_speed_upgrade = (decltype(Old_LeaderData__get_ships_speed_upgrade))LeaderData__get_ships_speed_upgradeAddr;
		Old_LeaderData__get_troops_speed_upgrade = (decltype(Old_LeaderData__get_troops_speed_upgrade))LeaderData__get_troops_speed_upgradeAddr;
		Old_LeaderData__get_vehicle_speed_upgrade = (decltype(Old_LeaderData__get_vehicle_speed_upgrade))LeaderData__get_vehicle_speed_upgradeAddr;
		Old_LeaderData__get_enemy_wonder_value = (decltype(Old_LeaderData__get_enemy_wonder_value))LeaderData__get_enemy_wonder_valueAddr;
		Old_LeaderData__get_team_wonder_value = (decltype(Old_LeaderData__get_team_wonder_value))LeaderData__get_team_wonder_valueAddr;
		Old_Leader__inc_hit_event = (decltype(Old_Leader__inc_hit_event))Leader__inc_hit_eventAddr;
		Old_Leader__inc_damage_event = (decltype(Old_Leader__inc_damage_event))Leader__inc_damage_eventAddr;
		Old_LeaderData__get_name = (decltype(Old_LeaderData__get_name))LeaderData__get_nameAddr;
		Old_Leader__inc_kill_event = (decltype(Old_Leader__inc_kill_event))Leader__inc_kill_eventAddr;
		Old_Leader__inc_death_event = (decltype(Old_Leader__inc_death_event))Leader__inc_death_eventAddr;
		Old_Leader__action_declare = (decltype(Old_Leader__action_declare))Leader__action_declareAddr;
		Old_LeaderData__get_building_speed_upgrade = (decltype(Old_LeaderData__get_building_speed_upgrade))LeaderData__get_building_speed_upgradeAddr;
		Old_LeaderData__get_building_hp_upgrade = (decltype(Old_LeaderData__get_building_hp_upgrade))LeaderData__get_building_hp_upgradeAddr;
		Old_LeaderData__get_fort_los = (decltype(Old_LeaderData__get_fort_los))LeaderData__get_fort_losAddr;
		Old_LeaderData__get_tower_fort_los = (decltype(Old_LeaderData__get_tower_fort_los))LeaderData__get_tower_fort_losAddr;
		Old_LeaderData__get_fort_range = (decltype(Old_LeaderData__get_fort_range))LeaderData__get_fort_rangeAddr;
		Old_LeaderData__get_tower_fort_range = (decltype(Old_LeaderData__get_tower_fort_range))LeaderData__get_tower_fort_rangeAddr;
		Old_LeaderData__calc_resource_bonuses = (decltype(Old_LeaderData__calc_resource_bonuses))LeaderData__calc_resource_bonusesAddr;
		Old_LeaderData__get_university = (decltype(Old_LeaderData__get_university))LeaderData__get_universityAddr;
		Old_LeaderData__get_farm_limit = (decltype(Old_LeaderData__get_farm_limit))LeaderData__get_farm_limitAddr;
		Old_LeaderData__get_fort_garrison = (decltype(Old_LeaderData__get_fort_garrison))LeaderData__get_fort_garrisonAddr;
		Old_LeaderData__get_granary = (decltype(Old_LeaderData__get_granary))LeaderData__get_granaryAddr;
		Old_LeaderData__get_lumbermill = (decltype(Old_LeaderData__get_lumbermill))LeaderData__get_lumbermillAddr;
		Old_LeaderData__get_smelter = (decltype(Old_LeaderData__get_smelter))LeaderData__get_smelterAddr;
		Old_LeaderData__get_temple_borders = (decltype(Old_LeaderData__get_temple_borders))LeaderData__get_temple_bordersAddr;
		Old_LeaderData__get_temple_hp = (decltype(Old_LeaderData__get_temple_hp))LeaderData__get_temple_hpAddr;
		Old_LeaderData__get_temple_range = (decltype(Old_LeaderData__get_temple_range))LeaderData__get_temple_rangeAddr;
		Old_LeaderData__researching = (decltype(Old_LeaderData__researching))LeaderData__researchingAddr;
		Old_LeaderData__get_wonders = (decltype(Old_LeaderData__get_wonders))LeaderData__get_wondersAddr;
		Old_LeaderData__get_first_library = (decltype(Old_LeaderData__get_first_library))LeaderData__get_first_libraryAddr;
		Old_LeaderData__get_radius = (decltype(Old_LeaderData__get_radius))LeaderData__get_radiusAddr;
		Old_LeaderData__has_preq = (decltype(Old_LeaderData__has_preq))LeaderData__has_preqAddr;
		Old_LeaderData__check_predecessor = (decltype(Old_LeaderData__check_predecessor))LeaderData__check_predecessorAddr;
		Old_LeaderData__type_eligible = (decltype(Old_LeaderData__type_eligible))LeaderData__type_eligibleAddr;
		Old_LeaderData__calc_market_prices = (decltype(Old_LeaderData__calc_market_prices))LeaderData__calc_market_pricesAddr;
		Old_Leader__calc_pop_cap = (decltype(Old_Leader__calc_pop_cap))Leader__calc_pop_capAddr;
		Old_Leader__lost_a_city = (decltype(Old_Leader__lost_a_city))Leader__lost_a_cityAddr;
		Old_Leader__lost_capital = (decltype(Old_Leader__lost_capital))Leader__lost_capitalAddr;
		Old_Leader__lose_building = (decltype(Old_Leader__lose_building))Leader__lose_buildingAddr;
		Old_LeaderData__get_caravan_limit = (decltype(Old_LeaderData__get_caravan_limit))LeaderData__get_caravan_limitAddr;
		Old_LeaderData__get_gov_hero = (decltype(Old_LeaderData__get_gov_hero))LeaderData__get_gov_heroAddr;
		Old_LeaderData__get_buildings = (decltype(Old_LeaderData__get_buildings))LeaderData__get_buildingsAddr;
		Old_Leader__gain_building = (decltype(Old_Leader__gain_building))Leader__gain_buildingAddr;
		Old_LeaderData__get_building_cities = (decltype(Old_LeaderData__get_building_cities))LeaderData__get_building_citiesAddr;
		Old_LeaderData__get_decoy_time = (decltype(Old_LeaderData__get_decoy_time))LeaderData__get_decoy_timeAddr;
		Old_LeaderData__has_rare = (decltype(Old_LeaderData__has_rare))LeaderData__has_rareAddr;
		Old_LeaderData__get_units = (decltype(Old_LeaderData__get_units))LeaderData__get_unitsAddr;
		Old_LeaderData__get_general_upgrade = (decltype(Old_LeaderData__get_general_upgrade))LeaderData__get_general_upgradeAddr;
		Old_LeaderData__get_supply_upgrade = (decltype(Old_LeaderData__get_supply_upgrade))LeaderData__get_supply_upgradeAddr;
		Old_LeaderData__calc_rare = (decltype(Old_LeaderData__calc_rare))LeaderData__calc_rareAddr;
		Old_LeaderData__get_attrition = (decltype(Old_LeaderData__get_attrition))LeaderData__get_attritionAddr;
		Old_LeaderData__get_anti_attrition = (decltype(Old_LeaderData__get_anti_attrition))LeaderData__get_anti_attritionAddr;
		Old_LeaderData__has_bonus = (decltype(Old_LeaderData__has_bonus))LeaderData__has_bonusAddr;
		Old_LeaderData__has_spell = (decltype(Old_LeaderData__has_spell))LeaderData__has_spellAddr;
		Old_LeaderData__can_transport = (decltype(Old_LeaderData__can_transport))LeaderData__can_transportAddr;
		Old_LeaderData__has_tech = (decltype(Old_LeaderData__has_tech))LeaderData__has_techAddr;
		Old_LeaderData__at_city_limit = (decltype(Old_LeaderData__at_city_limit))LeaderData__at_city_limitAddr;
		Old_LeaderData__get_queued = (decltype(Old_LeaderData__get_queued))LeaderData__get_queuedAddr;
		Old_Leader__track_unit_type = (decltype(Old_Leader__track_unit_type))Leader__track_unit_typeAddr;
		Old_LeaderData__is_coop = (decltype(Old_LeaderData__is_coop))LeaderData__is_coopAddr;
		Old_Leader__track_queued = (decltype(Old_Leader__track_queued))Leader__track_queuedAddr;
		Old_LeaderData__has_general = (decltype(Old_LeaderData__has_general))LeaderData__has_generalAddr;
		Old_LeaderData__get_spy_upgrade = (decltype(Old_LeaderData__get_spy_upgrade))LeaderData__get_spy_upgradeAddr;
		Old_LeaderData__has_upgrade = (decltype(Old_LeaderData__has_upgrade))LeaderData__has_upgradeAddr;
		Old_LeaderData__get_troops_los_upgrade = (decltype(Old_LeaderData__get_troops_los_upgrade))LeaderData__get_troops_los_upgradeAddr;
		Old_LeaderData__has_conquest_bonus = (decltype(Old_LeaderData__has_conquest_bonus))LeaderData__has_conquest_bonusAddr;
		Old_Leader__treaty_on = (decltype(Old_Leader__treaty_on))Leader__treaty_onAddr;
		Old_Leader__agenda_on = (decltype(Old_Leader__agenda_on))Leader__agenda_onAddr;
		Old_LeaderData__has_treaty = (decltype(Old_LeaderData__has_treaty))LeaderData__has_treatyAddr;
		Old_LeaderData__is_peace = (decltype(Old_LeaderData__is_peace))LeaderData__is_peaceAddr;
		Old_Leader__meet = (decltype(Old_Leader__meet))Leader__meetAddr;
		Old_LeaderData__is_target = (decltype(Old_LeaderData__is_target))LeaderData__is_targetAddr;
		Old_LeaderData__get_heal_level = (decltype(Old_LeaderData__get_heal_level))LeaderData__get_heal_levelAddr;
		Old_LeaderData__check_population = (decltype(Old_LeaderData__check_population))LeaderData__check_populationAddr;
		Old_LeaderData__has_tribe_bonus = (decltype(Old_LeaderData__has_tribe_bonus))LeaderData__has_tribe_bonusAddr;
		Old_Leader__produce_building = (decltype(Old_Leader__produce_building))Leader__produce_buildingAddr;
		Old_LeaderData__get_graft = (decltype(Old_LeaderData__get_graft))LeaderData__get_graftAddr;
		Old_LeaderData__current_upgrade = (decltype(Old_LeaderData__current_upgrade))LeaderData__current_upgradeAddr;
		Old_Leader__reset_obs_flags = (decltype(Old_Leader__reset_obs_flags))Leader__reset_obs_flagsAddr;
		Old_LeaderData__type_avail = (decltype(Old_LeaderData__type_avail))LeaderData__type_availAddr;
		Old_Leader__reset_score = (decltype(Old_Leader__reset_score))Leader__reset_scoreAddr;
		Old_Leaders__walk_data = (decltype(Old_Leaders__walk_data))Leaders__walk_dataAddr;
		Old_Leader__init = (decltype(Old_Leader__init))Leader__initAddr;
		Old_LeaderData__log_data = (decltype(Old_LeaderData__log_data))LeaderData__log_dataAddr;
		Old_LeaderData__find_capital = (decltype(Old_LeaderData__find_capital))LeaderData__find_capitalAddr;
		Old_LeaderData__get_diplo = (decltype(Old_LeaderData__get_diplo))LeaderData__get_diploAddr;
		Old_LeaderData__is_enemy = (decltype(Old_LeaderData__is_enemy))LeaderData__is_enemyAddr;
		Old_LeaderData__is_neutral = (decltype(Old_LeaderData__is_neutral))LeaderData__is_neutralAddr;
		Old_LeaderData__get_wonder_net = (decltype(Old_LeaderData__get_wonder_net))LeaderData__get_wonder_netAddr;
		Old_LeaderData__get_wonder_value = (decltype(Old_LeaderData__get_wonder_value))LeaderData__get_wonder_valueAddr;
		Old_LeaderData__has_wonder = (decltype(Old_LeaderData__has_wonder))LeaderData__has_wonderAddr;
		Old_LeaderData__get_nukes = (decltype(Old_LeaderData__get_nukes))LeaderData__get_nukesAddr;
		Old_LeaderData__say_full_name = (decltype(Old_LeaderData__say_full_name))LeaderData__say_full_nameAddr;
		Old_LeaderData__num_team_members = (decltype(Old_LeaderData__num_team_members))LeaderData__num_team_membersAddr;
		Old_LeaderData__get_diff = (decltype(Old_LeaderData__get_diff))LeaderData__get_diffAddr;
		Old_LeaderData__get_team = (decltype(Old_LeaderData__get_team))LeaderData__get_teamAddr;
		Old_LeaderData__get_player = (decltype(Old_LeaderData__get_player))LeaderData__get_playerAddr;
		Old_LeaderData__any_humans = (decltype(Old_LeaderData__any_humans))LeaderData__any_humansAddr;
		Old_LeaderData__is_human = (decltype(Old_LeaderData__is_human))LeaderData__is_humanAddr;
		Old_Leader__chat_to_local = (decltype(Old_Leader__chat_to_local))Leader__chat_to_localAddr;
		Old_Leader__compute_score = (decltype(Old_Leader__compute_score))Leader__compute_scoreAddr;
		Old_Leader__set_diplo = (decltype(Old_Leader__set_diplo))Leader__set_diploAddr;
		Old_Leader__victory = (decltype(Old_Leader__victory))Leader__victoryAddr;
		Old_Leaders__end_process_all = (decltype(Old_Leaders__end_process_all))Leaders__end_process_allAddr;
		Old_Leaders__process_all = (decltype(Old_Leaders__process_all))Leaders__process_allAddr;
		Old_Leaders__clear = (decltype(Old_Leaders__clear))Leaders__clearAddr;
		Old_Leaders__init = (decltype(Old_Leaders__init))Leaders__initAddr;
		Old_Leaders__Leaders = (decltype(Old_Leaders__Leaders))Leaders__LeadersAddr;
		Old_LeaderData__DeleteLeaderData = (decltype(Old_LeaderData__DeleteLeaderData))LeaderData__DeleteLeaderDataAddr;
		Old_LeaderData__is_ally = (decltype(Old_LeaderData__is_ally))LeaderData__is_allyAddr;
		Old_LeaderOptions__log_data = (decltype(Old_LeaderOptions__log_data))LeaderOptions__log_dataAddr;
		Old_LeaderOptionData__log_data = (decltype(Old_LeaderOptionData__log_data))LeaderOptionData__log_dataAddr;
		Old_LeaderOptionData__walk_data = (decltype(Old_LeaderOptionData__walk_data))LeaderOptionData__walk_dataAddr;
		Old_LeaderOption__close = (decltype(Old_LeaderOption__close))LeaderOption__closeAddr;
		Old_LeaderOptions__walk_data = (decltype(Old_LeaderOptions__walk_data))LeaderOptions__walk_dataAddr;
		Old_LeaderOptionOut__update = (decltype(Old_LeaderOptionOut__update))LeaderOptionOut__updateAddr;
		Old_LeaderOption__synch_with_prefs = (decltype(Old_LeaderOption__synch_with_prefs))LeaderOption__synch_with_prefsAddr;
		Old_LeaderOption__init = (decltype(Old_LeaderOption__init))LeaderOption__initAddr;
		Old_LeaderOptions__close = (decltype(Old_LeaderOptions__close))LeaderOptions__closeAddr;
		Old_LeaderOptions__init = (decltype(Old_LeaderOptions__init))LeaderOptions__initAddr;
		Old_LeaderOption__LeaderOption = (decltype(Old_LeaderOption__LeaderOption))LeaderOption__LeaderOptionAddr;
		Old_LeaderOptions__LeaderOptions = (decltype(Old_LeaderOptions__LeaderOptions))LeaderOptions__LeaderOptionsAddr;

        
		


		Old_ScenarioFuncSet__init_funcs = (decltype(Old_ScenarioFuncSet__init_funcs))ScenarioFuncSet__init_funcsAddr;
        Old_ScriptFuncSet__add_new_func = (decltype(Old_ScriptFuncSet__add_new_func))ScriptFuncSet__add_new_funcAddr;
		ScriptFunc__add_param = (decltype(ScriptFunc__add_param))ScriptFunc__add_paramAddr;


		Old_CityData__pop_cap = (decltype(Old_CityData__pop_cap))CityData__pop_capAddr;



        //这里写初始化Hook的代码
        //例如：HookBegin((LPVOID)0x114514,Hookcallback);
    }



    void run()
    {
        //这里写运行的代码

    }

    void dll_exit()
    {
        //这里写退出Hook的代码

    }
}