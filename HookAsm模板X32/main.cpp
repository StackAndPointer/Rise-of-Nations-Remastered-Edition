
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
int __fastcall Leaders__max_enemy_age(Leaders* leaders, int placeholder, int);//0x2B8300
int(__fastcall* Old_Leaders__max_enemy_age)(Leaders* leaders, int placeholder, int);
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
void __fastcall Leader__receive_taunt(Leader* leader, int placeholder, TauntRequest, int);//0x2B8BF0
void(__fastcall* Old_Leader__receive_taunt)(Leader* leader, int placeholder, TauntRequest, int);
void* Leader__process_tauntAddr;
void __fastcall Leader__process_taunt(Leader* leader, int placeholder, int, int);//0x2B8CC0
void(__fastcall* Old_Leader__process_taunt)(Leader* leader, int placeholder, int, int);
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
void __fastcall Leader__compute_sites(Leader* leader, int placeholder, int);//0x2CC950
void(__fastcall* Old_Leader__compute_sites)(Leader* leader, int placeholder, int);
void* Leader__compute_site_statsAddr;
void __fastcall Leader__compute_site_stats(Leader* leader, int placeholder, WCoord wx, WCoord wy, int city, int* o, int reg, int* this_val, int* this_dist, int nearby, unsigned int new_x, WCoord* new_y);//0x2CD040
void(__fastcall* Old_Leader__compute_site_stats)(Leader* leader, int placeholder, WCoord wx, WCoord wy, int city, int* o, int reg, int* this_val, int* this_dist, int nearby, unsigned int new_x, WCoord* new_y);
void* Leader__get_needAddr;
int __fastcall Leader__get_need(Leader* leader, int placeholder, int, int);//0x2CDC80
int(__fastcall* Old_Leader__get_need)(Leader* leader, int placeholder, int, int);
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
int __fastcall Leader__do_buy(Leader* leader, int placeholder, int);//0x2CFBD0
int(__fastcall* Old_Leader__do_buy)(Leader* leader, int placeholder, int);
void* Leader__do_sellAddr;
int __fastcall Leader__do_sell(Leader* leader, int placeholder, int);//0x2CFC60
int(__fastcall* Old_Leader__do_sell)(Leader* leader, int placeholder, int);
void* Leader__random_personalityAddr;
void __fastcall Leader__random_personality(Leader* leader, int placeholder);//0x2CFD00
void(__fastcall* Old_Leader__random_personality)(Leader* leader, int placeholder);
void* Leader__ally_diploAddr;
void __fastcall Leader__ally_diplo(Leader* leader, int placeholder, int whom, Armies* treaty);//0x2D0120
void(__fastcall* Old_Leader__ally_diplo)(Leader* leader, int placeholder, int whom, Armies* treaty);
void* Leader__eject_my_shit_from_his_assAddr;
void __fastcall Leader__eject_my_shit_from_his_ass(Leader* leader, int placeholder, int);//0x2D0220
void(__fastcall* Old_Leader__eject_my_shit_from_his_ass)(Leader* leader, int placeholder, int);
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
void __fastcall Leader__action_respond(Leader* leader, int placeholder, int, int);//0x2D03C0
void(__fastcall* Old_Leader__action_respond)(Leader* leader, int placeholder, int, int);
void* Leader__consider_tributeAddr;
void __fastcall Leader__consider_tribute(Leader* leader, int placeholder, int whom, int value, int good);//0x2D1360
void(__fastcall* Old_Leader__consider_tribute)(Leader* leader, int placeholder, int whom, int value, int good);
void* Leader__notify_dealAddr;
void __fastcall Leader__notify_deal(Leader* leader, int placeholder, int whom, int treaty);//0x2D13F0
void(__fastcall* Old_Leader__notify_deal)(Leader* leader, int placeholder, int whom, int treaty);
void* Leader__action_attackAddr;
void __fastcall Leader__action_attack(Leader* leader, int placeholder, int, int, int);//0x2D14E0
void(__fastcall* Old_Leader__action_attack)(Leader* leader, int placeholder, int, int, int);
void* Leader__action_treatyAddr;
void __fastcall Leader__action_treaty(Leader* leader, int placeholder, int, int);//0x2D1570
void(__fastcall* Old_Leader__action_treaty)(Leader* leader, int placeholder, int, int);
void* Leader__action_clear_allAddr;
void __fastcall Leader__action_clear_all(Leader* leader, int placeholder, int);//0x2D15E0
void(__fastcall* Old_Leader__action_clear_all)(Leader* leader, int placeholder, int);
void* Leader__action_clear_tributesAddr;
void __fastcall Leader__action_clear_tributes(Leader* leader, int placeholder, int);//0x2D1690
void(__fastcall* Old_Leader__action_clear_tributes)(Leader* leader, int placeholder, int);
void* Leader__action_demand_tributeAddr;
void __fastcall Leader__action_demand_tribute(Leader* leader, int placeholder, int whom, int good, int amount);//0x2D1750
void(__fastcall* Old_Leader__action_demand_tribute)(Leader* leader, int placeholder, int whom, int good, int amount);
void* Leader__action_offerAddr;
void __fastcall Leader__action_offer(Leader* leader, int placeholder, int, int, int);//0x2D1780
void(__fastcall* Old_Leader__action_offer)(Leader* leader, int placeholder, int, int, int);
void* Leader__action_splineAddr;
void __fastcall Leader__action_spline(Leader* leader, int placeholder, SoundGlobal* packet, int whom);//0x2D1850
void(__fastcall* Old_Leader__action_spline)(Leader* leader, int placeholder, SoundGlobal* packet, int whom);
void* Leader__action_pingAddr;
void __fastcall Leader__action_ping(Leader* leader, int placeholder, Coord, Coord, int);//0x2D18A0
void(__fastcall* Old_Leader__action_ping)(Leader* leader, int placeholder, Coord, Coord, int);
void* Leader__clear_agreeAddr;
void __fastcall Leader__clear_agree(Leader* leader, int placeholder, int);//0x2D1AF0
void(__fastcall* Old_Leader__clear_agree)(Leader* leader, int placeholder, int);
void* Leader__recapture_capitalAddr;
void __fastcall Leader__recapture_capital(Leader* leader, int placeholder);//0x2D1BA0
void(__fastcall* Old_Leader__recapture_capital)(Leader* leader, int placeholder);
void* Leader__defeat_byAddr;
void __fastcall Leader__defeat_by(Leader* leader, int placeholder, int a2, int whom, int defeat_type);//0x2D1C80
void(__fastcall* Old_Leader__defeat_by)(Leader* leader, int placeholder, int a2, int whom, int defeat_type);
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
void __fastcall Leader__set_age(Leader* leader, int placeholder, int);//0x2D25A0
void(__fastcall* Old_Leader__set_age)(Leader* leader, int placeholder, int);
void* Leader__set_epochAddr;
void __fastcall Leader__set_epoch(Leader* leader, int placeholder, int cat, int newepoch);//0x2D26F0
void(__fastcall* Old_Leader__set_epoch)(Leader* leader, int placeholder, int cat, int newepoch);
void* Leader__lose_techAddr;
void __fastcall Leader__lose_tech(Leader* leader, int placeholder, int);//0x2D2850
void(__fastcall* Old_Leader__lose_tech)(Leader* leader, int placeholder, int);
void* Leader__pay_dowAddr;
int __fastcall Leader__pay_dow(Leader* leader, int placeholder, int, int);//0x2D2B10
int(__fastcall* Old_Leader__pay_dow)(Leader* leader, int placeholder, int, int);
void* Leader__LeaderAddr;
void __fastcall Leader__Leader(Leader* leader, int placeholder, int a2);//0x2D2BF0
void(__fastcall* Old_Leader__Leader)(Leader* leader, int placeholder, int a2);
void* LeaderOut__issue_chatAddr;
void __fastcall LeaderOut__issue_chat(LeaderOut* leaderOut, int placeholder, String* string, int flags);//0x2D2C50
void(__fastcall* Old_LeaderOut__issue_chat)(LeaderOut* leaderOut, int placeholder, String* string, int flags);
void* LeaderOut__issue_pingAddr;
void __fastcall LeaderOut__issue_ping(LeaderOut* leaderOut, int placeholder, Coord, Coord);//0x2D3240
void(__fastcall* Old_LeaderOut__issue_ping)(LeaderOut* leaderOut, int placeholder, Coord, Coord);
void* LeaderOut__display_chatAddr;
void __fastcall LeaderOut__display_chat(LeaderOut* leaderOut, int placeholder, const String*, int, int, int);//0x2D3320
void(__fastcall* Old_LeaderOut__display_chat)(LeaderOut* leaderOut, int placeholder, const String*, int, int, int);
void* LeaderOut__say_meetAddr;
void __fastcall LeaderOut__say_meet(LeaderOut* leaderOut, int placeholder, int, Coord, Coord);//0x2D3570
void(__fastcall* Old_LeaderOut__say_meet)(LeaderOut* leaderOut, int placeholder, int, Coord, Coord);
void* LeaderOut__warn_resourcesAddr;
void __fastcall LeaderOut__warn_resources(LeaderOut* leaderOut, int placeholder, int t, int whom, String* city, int good);//0x2D3650
void(__fastcall* Old_LeaderOut__warn_resources)(LeaderOut* leaderOut, int placeholder, int t, int whom, String* city, int good);
void* LeaderOut__issue_sellAddr;
void __fastcall LeaderOut__issue_sell(LeaderOut* leaderOut, int placeholder, int, int);//0x2D3EB0
void(__fastcall* Old_LeaderOut__issue_sell)(LeaderOut* leaderOut, int placeholder, int, int);
void* LeaderOut__issue_buyAddr;
void __fastcall LeaderOut__issue_buy(LeaderOut* leaderOut, int placeholder, int, int);//0x2D3EF0
void(__fastcall* Old_LeaderOut__issue_buy)(LeaderOut* leaderOut, int placeholder, int, int);
void* LeaderOut__issue_propose_attackAddr;
void __fastcall LeaderOut__issue_propose_attack(LeaderOut* leaderOut, int placeholder, int, int, int);//0x2D3F30
void(__fastcall* Old_LeaderOut__issue_propose_attack)(LeaderOut* leaderOut, int placeholder, int, int, int);
void* LeaderOut__issue_demand_tributeAddr;
void __fastcall LeaderOut__issue_demand_tribute(LeaderOut* leaderOut, int placeholder, int, int, int);//0x2D3F60
void(__fastcall* Old_LeaderOut__issue_demand_tribute)(LeaderOut* leaderOut, int placeholder, int, int, int);
void* LeaderOut__issue_tributeAddr;
void __fastcall LeaderOut__issue_tribute(LeaderOut* leaderOut, int placeholder, int, int, int);//0x2D3F90
void(__fastcall* Old_LeaderOut__issue_tribute)(LeaderOut* leaderOut, int placeholder, int, int, int);
void* LeaderOut__issue_rejectAddr;
void __fastcall LeaderOut__issue_reject(LeaderOut* leaderOut, int placeholder, int);//0x2D3FF0
void(__fastcall* Old_LeaderOut__issue_reject)(LeaderOut* leaderOut, int placeholder, int);
void* LeaderOut__issue_acceptAddr;
void __fastcall LeaderOut__issue_accept(LeaderOut* leaderOut, int placeholder, int);//0x2D4010
void(__fastcall* Old_LeaderOut__issue_accept)(LeaderOut* leaderOut, int placeholder, int);
void* LeaderOut__issue_clear_allAddr;
void __fastcall LeaderOut__issue_clear_all(LeaderOut* leaderOut, int placeholder, int);//0x2D4040
void(__fastcall* Old_LeaderOut__issue_clear_all)(LeaderOut* leaderOut, int placeholder, int);
void* LeaderOut__issue_clear_tributesAddr;
void __fastcall LeaderOut__issue_clear_tributes(LeaderOut* leaderOut, int placeholder, int);//0x2D4060
void(__fastcall* Old_LeaderOut__issue_clear_tributes)(LeaderOut* leaderOut, int placeholder, int);
void* LeaderOut__issue_declareAddr;
void __fastcall LeaderOut__issue_declare(LeaderOut* leaderOut, int placeholder, int, int);//0x2D4080
void(__fastcall* Old_LeaderOut__issue_declare)(LeaderOut* leaderOut, int placeholder, int, int);
void* LeaderOut__issue_treatyAddr;
void __fastcall LeaderOut__issue_treaty(LeaderOut* leaderOut, int placeholder, int, int);//0x2D40F0
void(__fastcall* Old_LeaderOut__issue_treaty)(LeaderOut* leaderOut, int placeholder, int, int);
void* LeaderData__strong_vsAddr;
void __fastcall LeaderData__strong_vs(LeaderData* leaderData, int placeholder, String*, int);//0x2D4110
void(__fastcall* Old_LeaderData__strong_vs)(LeaderData* leaderData, int placeholder, String*, int);
void* LeaderData__weak_vsAddr;
void __fastcall LeaderData__weak_vs(LeaderData* leaderData, int placeholder, String*, int);//0x2D4760
void(__fastcall* Old_LeaderData__weak_vs)(LeaderData* leaderData, int placeholder, String*, int);
void* LeaderData__counter_unitAddr;
int __fastcall LeaderData__counter_unit(LeaderData* leaderData, int placeholder, int, int*);//0x2D4CB0
int(__fastcall* Old_LeaderData__counter_unit)(LeaderData* leaderData, int placeholder, int, int*);
void* LeaderData__care_if_cost_discoveredAddr;
int __fastcall LeaderData__care_if_cost_discovered(LeaderData* leaderData, int placeholder, int t);//0x2D51A0
int(__fastcall* Old_LeaderData__care_if_cost_discovered)(LeaderData* leaderData, int placeholder, int t);
void* LeaderData__locked_transportAddr;
int __fastcall LeaderData__locked_transport(LeaderData* leaderData, int placeholder);//0x2D5230
int(__fastcall* Old_LeaderData__locked_transport)(LeaderData* leaderData, int placeholder);
void* LeaderData__scale_tributeAddr;
int __fastcall LeaderData__scale_tribute(LeaderData* leaderData, int placeholder, int);//0x2D5240
int(__fastcall* Old_LeaderData__scale_tribute)(LeaderData* leaderData, int placeholder, int);
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
void __fastcall LeaderData__calc_city_resources(LeaderData* leaderData, int placeholder, int*, int*, Coord, Coord, int);//0x2D5530
void(__fastcall* Old_LeaderData__calc_city_resources)(LeaderData* leaderData, int placeholder, int*, int*, Coord, Coord, int);
void* LeaderData__any_proposalsAddr;
int __fastcall LeaderData__any_proposals(LeaderData* leaderData, int placeholder, int);//0x2D5AD0
int(__fastcall* Old_LeaderData__any_proposals)(LeaderData* leaderData, int placeholder, int);
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
int __fastcall LeaderData__is_tribute_period(LeaderData* leaderData, int placeholder, int);//0x2D5B90
int(__fastcall* Old_LeaderData__is_tribute_period)(LeaderData* leaderData, int placeholder, int);
void* LeaderData__afford_dowAddr;
int __fastcall LeaderData__afford_dow(LeaderData* leaderData, int placeholder, int, int, int*);//0x2D5CE0
int(__fastcall* Old_LeaderData__afford_dow)(LeaderData* leaderData, int placeholder, int, int, int*);
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
int __fastcall LeaderData__compute_epoch(LeaderData* leaderData, int placeholder, int);//0x2D6F80
int(__fastcall* Old_LeaderData__compute_epoch)(LeaderData* leaderData, int placeholder, int);
void* LeaderData__get_epoch_baseAddr;
int __fastcall LeaderData__get_epoch_base(LeaderData* leaderData, int placeholder, int tech_cat);//0x2D6FF0
int(__fastcall* Old_LeaderData__get_epoch_base)(LeaderData* leaderData, int placeholder, int tech_cat);
void* LeaderData__special_preqAddr;
int __fastcall LeaderData__special_preq(LeaderData* leaderData, int placeholder, int, int*);//0x2D7030
int(__fastcall* Old_LeaderData__special_preq)(LeaderData* leaderData, int placeholder, int, int*);
void* LeaderData__techs_per_ageAddr;
int __fastcall LeaderData__techs_per_age(LeaderData* leaderData, int placeholder, int);//0x2D7280
int(__fastcall* Old_LeaderData__techs_per_age)(LeaderData* leaderData, int placeholder, int);
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
int __fastcall LeaderData__tribe_can_type(LeaderData* leaderData, int placeholder, const Type*);//0x2D9410
int(__fastcall* Old_LeaderData__tribe_can_type)(LeaderData* leaderData, int placeholder, const Type*);
void* LeaderDataEncrypt__log_dataAddr;
void __fastcall LeaderDataEncrypt__log_data(LeaderDataEncrypt* leaderDataEncrypt, int placeholder, Log*);//0x2D94B0
void(__fastcall* Old_LeaderDataEncrypt__log_data)(LeaderDataEncrypt* leaderDataEncrypt, int placeholder, Log*);
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
int __fastcall LeaderData__has_unbuilt_wonder(LeaderData* leaderData, int placeholder, int);//0x2DA470
int(__fastcall* Old_LeaderData__has_unbuilt_wonder)(LeaderData* leaderData, int placeholder, int);
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
int __fastcall LeaderData__researching(LeaderData* leaderData, int placeholder, int t, int ox);//0x2DB510
int(__fastcall* Old_LeaderData__researching)(LeaderData* leaderData, int placeholder, int t, int ox);
void* LeaderData__get_wondersAddr;
int __fastcall LeaderData__get_wonders(LeaderData* leaderData, int placeholder);//0x2DB680
int(__fastcall* Old_LeaderData__get_wonders)(LeaderData* leaderData, int placeholder);
void* LeaderData__get_first_libraryAddr;
int __fastcall LeaderData__get_first_library(LeaderData* leaderData, int placeholder);//0x2DB6C0
int(__fastcall* Old_LeaderData__get_first_library)(LeaderData* leaderData, int placeholder);
void* LeaderData__get_radiusAddr;
int __fastcall LeaderData__get_radius(LeaderData* leaderData, int placeholder, int);//0x2DB790
int(__fastcall* Old_LeaderData__get_radius)(LeaderData* leaderData, int placeholder, int);
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
void __fastcall LeaderData__calc_market_prices(LeaderData* leaderData, int placeholder, int, int*, int*);//0x2DC2A0
void(__fastcall* Old_LeaderData__calc_market_prices)(LeaderData* leaderData, int placeholder, int, int*, int*);
void* Leader__calc_pop_capAddr;
int __fastcall Leader__calc_pop_cap(Leader* leader, int placeholder);//0x2DC490
int(__fastcall* Old_Leader__calc_pop_cap)(Leader* leader, int placeholder);
void* Leader__lost_a_cityAddr;
void __fastcall Leader__lost_a_city(Leader* leader, int placeholder, int, int, int);//0x2DC6D0
void(__fastcall* Old_Leader__lost_a_city)(Leader* leader, int placeholder, int, int, int);
void* Leader__lost_capitalAddr;
void __fastcall Leader__lost_capital(Leader* leader, int placeholder, int);//0x2DC870
void(__fastcall* Old_Leader__lost_capital)(Leader* leader, int placeholder, int);
void* Leader__lose_buildingAddr;
void __fastcall Leader__lose_building(Leader* leader, int placeholder, TypeIndex t);//0x2DCA20
void(__fastcall* Old_Leader__lose_building)(Leader* leader, int placeholder, TypeIndex t);
void* LeaderData__get_caravan_limitAddr;
int __fastcall LeaderData__get_caravan_limit(LeaderData* leaderData, int placeholder, int);//0x2DCA50
int(__fastcall* Old_LeaderData__get_caravan_limit)(LeaderData* leaderData, int placeholder, int);
void* LeaderData__get_gov_heroAddr;
int __fastcall LeaderData__get_gov_hero(LeaderData* leaderData, int placeholder, int);//0x2E0600
int(__fastcall* Old_LeaderData__get_gov_hero)(LeaderData* leaderData, int placeholder, int);
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
int __fastcall LeaderData__get_units(LeaderData* leaderData, int placeholder, int, int);//0x2E07D0
int(__fastcall* Old_LeaderData__get_units)(LeaderData* leaderData, int placeholder, int, int);
void* LeaderData__get_general_upgradeAddr;
int __fastcall LeaderData__get_general_upgrade(LeaderData* leaderData, int placeholder);//0x2E0830
int(__fastcall* Old_LeaderData__get_general_upgrade)(LeaderData* leaderData, int placeholder);
void* LeaderData__get_supply_upgradeAddr;
int __fastcall LeaderData__get_supply_upgrade(LeaderData* leaderData, int placeholder);//0x2E0880
int(__fastcall* Old_LeaderData__get_supply_upgrade)(LeaderData* leaderData, int placeholder);
void* LeaderData__calc_rareAddr;
void __fastcall LeaderData__calc_rare(LeaderData* leaderData, int placeholder, int, int*, int);//0x2E08D0
void(__fastcall* Old_LeaderData__calc_rare)(LeaderData* leaderData, int placeholder, int, int*, int);
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
int __fastcall LeaderData__has_conquest_bonus(LeaderData* leaderData, int placeholder, int);//0x2E1160
int(__fastcall* Old_LeaderData__has_conquest_bonus)(LeaderData* leaderData, int placeholder, int);
void* Leader__treaty_onAddr;
void __fastcall Leader__treaty_on(Leader* leader, int placeholder, int, int);//0x2E1190
void(__fastcall* Old_Leader__treaty_on)(Leader* leader, int placeholder, int, int);
void* Leader__agenda_onAddr;
void __fastcall Leader__agenda_on(Leader* leader, int placeholder, int whom, int agenda);//0x2E11C0
void(__fastcall* Old_Leader__agenda_on)(Leader* leader, int placeholder, int whom, int agenda);
void* LeaderData__has_treatyAddr;
int __fastcall LeaderData__has_treaty(LeaderData* leaderData, int placeholder, int, int);//0x2E11E0
int(__fastcall* Old_LeaderData__has_treaty)(LeaderData* leaderData, int placeholder, int, int);
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
int __fastcall Leader__produce_building(Leader* leader, int placeholder, int, int, int);//0x2E1400
int(__fastcall* Old_Leader__produce_building)(Leader* leader, int placeholder, int, int, int);
void* LeaderData__get_graftAddr;
int __fastcall LeaderData__get_graft(LeaderData* leaderData, int placeholder, int);//0x2E30F0
int(__fastcall* Old_LeaderData__get_graft)(LeaderData* leaderData, int placeholder, int);
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
void __fastcall LeaderData__log_data(LeaderData* leaderData, int placeholder, Log*);//0x2E5110
void(__fastcall* Old_LeaderData__log_data)(LeaderData* leaderData, int placeholder, Log*);
void* LeaderData__find_capitalAddr;
void __fastcall LeaderData__find_capital(LeaderData* leaderData, int placeholder, int*, int*, int, int);//0x2EB930
void(__fastcall* Old_LeaderData__find_capital)(LeaderData* leaderData, int placeholder, int*, int*, int, int);
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
int __fastcall LeaderData__has_wonder(LeaderData* leaderData, int placeholder, int);//0x2EBC10
int(__fastcall* Old_LeaderData__has_wonder)(LeaderData* leaderData, int placeholder, int);

void* LeaderData__get_nukesAddr;
int __fastcall LeaderData__get_nukes(LeaderData* leaderData, int placeholder);//0x2EBE50
int(__fastcall* Old_LeaderData__get_nukes)(LeaderData* leaderData, int placeholder);
void* LeaderData__say_full_nameAddr;
String* __fastcall LeaderData__say_full_name(LeaderData* leaderData, int placeholder, String* result);//0x2EBE90
String* (__fastcall* Old_LeaderData__say_full_name)(LeaderData* leaderData, int placeholder, String* result);
void* LeaderData__num_team_membersAddr;
int __fastcall LeaderData__num_team_members(LeaderData* leaderData, int placeholder, int);//0x2EBF90
int(__fastcall* Old_LeaderData__num_team_members)(LeaderData* leaderData, int placeholder, int);
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
void __fastcall Leader__compute_score(Leader* leader, int placeholder, int);//0x2EC560
void(__fastcall* Old_Leader__compute_score)(Leader* leader, int placeholder, int);
void* Leader__set_diploAddr;
void __fastcall Leader__set_diplo(Leader* leader, int placeholder, int whom, Armies* diplo);//0x2EC6A0
void(__fastcall* Old_Leader__set_diplo)(Leader* leader, int placeholder, int whom, Armies* diplo);
void* Leader__victoryAddr;
void __fastcall Leader__victory(Leader* leader, int placeholder, int, int);//0x2EC9B0
void(__fastcall* Old_Leader__victory)(Leader* leader, int placeholder, int, int);
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
void __fastcall LeaderOptions__walk_data(LeaderOptions* leaderOptions, int placeholder, DataWalk*);//0x2F19A0
void(__fastcall* Old_LeaderOptions__walk_data)(LeaderOptions* leaderOptions, int placeholder, DataWalk*);
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


 template<typename T>
 T& gameaddr(int addr) {
     static int hExeBase = (int)GetModuleHandle(NULL);
     return *(T*)(hExeBase + addr);
 }


 Game* GameAccessConst__gamec;//0x8061E8
 Leaders* GameAccessConst__leadersc;//0x8061E0
 Random* GameAccess__game_random;//0x806184

 GameLog& game_log = gameaddr<GameLog>(0xAB1360);
 Coord& GameAccess__game = gameaddr<Coord>(0x8061EC);
 Tribes& tribes = gameaddr<Tribes>(0xA7FA20);
 StringTable& loc_str_array_orig = gameaddr<StringTable>(0x88CCF0);
 PlayerProfile& player_profile = gameaddr<PlayerProfile>(0x88D150);
 Leaders& leaders = gameaddr<Leaders>(0xA3A390);

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


        GameAccessConst__gamec = *(reinterpret_cast<Game**>(reinterpret_cast<BYTE*>(hExeBase) + 0x8061E8));
		GameAccessConst__leadersc = *(reinterpret_cast< Leaders**>(reinterpret_cast<BYTE*>(hExeBase) + 0x8061E0));
		GameAccess__game_random = *(reinterpret_cast<Random**>(reinterpret_cast<BYTE*>(hExeBase) + 0x806184));


        
       

        

        HookFunctionBegin(LeaderData__is_team, &LeaderData__is_teamAddr);
        HookFunctionBegin(LeaderData__get_player, &LeaderData__get_playerAddr);
        HookFunctionBegin(LeaderData__is_ally, &LeaderData__is_allyAddr);
		HookFunctionBegin(String__String, &String__StringAddr);
		HookFunctionBegin(GameLog__say_checksum, &GameLog__say_checksumAddr);
		HookFunctionBegin(String__close, &String__closeAddr);
		HookFunctionBegin(Random__get, &Random__getAddr);
		HookFunctionBegin(Game__init_tribes, &Game__init_tribesAddr);


        
        Old_LeaderData__is_team = (decltype(Old_LeaderData__is_team))LeaderData__is_teamAddr;
        Old_LeaderData__get_player = (decltype(Old_LeaderData__get_player))LeaderData__get_playerAddr;
        Old_LeaderData__is_ally = (decltype(Old_LeaderData__is_ally))LeaderData__is_allyAddr;
		Old_String__String = (decltype(Old_String__String))String__StringAddr;
		Old_GameLog__say_checksum = (decltype(Old_GameLog__say_checksum))GameLog__say_checksumAddr;
		Old_String__close = (decltype(Old_String__close))String__closeAddr;
		Old_Random__get = (decltype(Old_Random__get))Random__getAddr;
		Old_Game__init_tribes = (decltype(Old_Game__init_tribes))Game__init_tribesAddr;

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