#include "HookAddr.h"
#include "Enums.h"
#include "GlobalVariable.h"

int __fastcall Random__get(Random* random, int placeholder, int min, int max)
{
	return Old_Random__get(random, placeholder, min, max);
}

void __fastcall GameLog__say_checksum(GameLog* gameLog, int placeholder, int detail, const String* file, int line) {
	Old_GameLog__say_checksum(gameLog, placeholder, detail, file, line);
}

void __fastcall Game__init_tribes(Game* game, int placeholder)
{
	Old_Game__init_tribes(game, placeholder);
}