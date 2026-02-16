#include "HookAddr.h"
#include "Enums.h"
#include "GlobalVariable.h"
#include "MyScriptFunc.h"

void __fastcall ScenarioFuncSet__init_funcs(ScenarioFuncSet* scenarioFuncSet, int placeholder) {
	ScriptFunc* func;
	

	func = ScriptFuncSet__add_new_func(scenarioFuncSet, placeholder, 359341, L"func_ceshi", (int)func_ceshi,1);
	ScriptFunc__add_param(func, placeholder, 1474932, (wchar_t*)L"who", NULL, NULL, NULL);

	Old_ScenarioFuncSet__init_funcs(scenarioFuncSet, placeholder);
}




ScriptFunc* __fastcall ScriptFuncSet__add_new_func(ScriptFuncSet* scriptFuncSet, int placeholder, int ret_type, const wchar_t* name, int addr, unsigned __int8 num) {

	
	return Old_ScriptFuncSet__add_new_func(scriptFuncSet, placeholder, ret_type, name, addr, num);
}