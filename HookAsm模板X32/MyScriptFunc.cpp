#include "HookAddr.h"
#include "Enums.h"
#include "GlobalVariable.h"
#include "MyScriptFunc.h"

int __fastcall func_ceshi(ScenarioFuncSet* scenarioFuncSet, int placeholder, int* who);


int __fastcall func_ceshi(ScenarioFuncSet* scenarioFuncSet, int placeholder, int* who) {
	return *who * 7;
}