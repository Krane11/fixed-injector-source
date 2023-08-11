#pragma once
#include <filesystem>
#include "api/xor.h"
#include "lazy.h"

void checkfordbg() {




	//damn i just saw this u dont wanna use this its ass they can just straight up change the exe
	LI_FN(system)(xor_a("taskkill /f /im procexp.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im procexp64.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im procexp64.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im mafiaengine-i386.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Mafia Engine.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im mafiaengine-x86_64.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Tutorial-i386.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Tutorial-x86_64.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im mafiaengine-x86_64-SSE4-AVX2.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im KsDumperClient.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im KsDumper.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im ProcessHacker.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im idaq.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im idaq64.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Wireshark.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Fiddler.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im FiddlerEverywhere.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Xenos64.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Xenos.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Xenos32.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im de4dot.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Cheat Engine.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im cheatengine-x86_64.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im cheatengine-x86_64-SSE4-AVX2.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im MugenJinFuu-x86_64-SSE4-AVX2.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im MugenJinFuu-i386.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im cheatengine-x86_64.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im cheatengine-i386.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im HTTP Debugger Windows Service (32 bit).exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im KsDumper.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im OllyDbg.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im x64dbg.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im x32dbg.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Ida64.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im OllyDbg.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Dbg64.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /f /im Dbg32.exe >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /FI \"IMAGENAME eq cheatengine*\" /IM * /F /T >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1"));
	LI_FN(system)(xor_a("taskkill /FI \"IMAGENAME eq processhacker*\" /IM * /F /T >nul 2>&1"));
}