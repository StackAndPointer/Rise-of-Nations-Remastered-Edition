#include "HookAddr.h"
#include "Enums.h"
#include "GlobalVariable.h"

	void __fastcall String__String(String* string, int placeholder, const char* s)
	{
		Old_String__String(string, placeholder, s);
	}
	void __fastcall String__close(String* string, int placeholder)
	{
		Old_String__close(string, placeholder);
	}
