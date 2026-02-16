#pragma once
#include "Enums.h"


extern  Game* GameAccessConst__gamec;
extern Leaders* GameAccessConst__leadersc;
extern Random* GameAccess__game_random;//0x806184
extern Constants* GameAccess__constants;//0x8061F0


extern GameLog& game_log;//0xAB1360
extern Coord& GameAccess__game;//0x8061EC
extern Tribes& tribes;
extern StringTable& loc_str_array_orig;
extern PlayerProfile& player_profile;
extern Leaders& leaders;//0xA3A390
extern int (*ScenarioData__pop_cap)[8];//008C21F0
extern Coord& GameAccess__objects;//0x80618C
extern Categories& pop_limits;//0xA80020
extern Cities& cities;//0x809960