#include "define/stdafx.h"
#include "api/xor.h"
#include "api/api.h"
#include "driver/driver.h"
#include "inject/injector.h"
#include "api/drvutils.h"
#include <Windows.h>
#include "Obsidium Sdk/obsidium64.h"
#include "lazy.h"
#include "protection.h"
#include <tchar.h>
#include "utils.hpp"
#include "XorStr.h"
#include "auth.hpp"


using namespace std;

	string random_string2()
	{
		string str = xor_a("QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890");
		string newstr;
		int pos;
		while (newstr.size() != 32)
		{
			pos = ((rand() % (str.size() + 1)));
			newstr += str.substr(pos, 1);
		}
		return newstr + "";
	}

	void randomtitle()
	{
		while (1)
		{
			LI_FN(SetConsoleTitleA)(random_string2().c_str());
		}
	}

	std::uintptr_t process_find(const std::string& name)
	{
		const auto snap = LI_FN(CreateToolhelp32Snapshot).safe()(TH32CS_SNAPPROCESS, 0);
		if (snap == INVALID_HANDLE_VALUE) {
			return 0;
		}

		PROCESSENTRY32 proc_entry{};
		proc_entry.dwSize = sizeof proc_entry;

		auto found_process = false;
		if (!!LI_FN(Process32First).safe()(snap, &proc_entry)) {
			do {
				if (name == proc_entry.szExeFile) {
					found_process = true;
					break;
				}
			} while (!!LI_FN(Process32Next).safe()(snap, &proc_entry));
		}

		LI_FN(CloseHandle).safe()(snap);
		return found_process
			? proc_entry.th32ProcessID
			: 0;
	}


	



	int thread_context()
	{
		while (1)
		{
			int found = false;
			CONTEXT ctx = { 0 };
			void* h_thread = LI_FN(GetCurrentThread).safe()();

			ctx.ContextFlags = CONTEXT_DEBUG_REGISTERS;
			if (LI_FN(GetThreadContext).safe()(h_thread, &ctx))
			{
				if ((ctx.Dr0 != 0x00) || (ctx.Dr1 != 0x00) || (ctx.Dr2 != 0x00) || (ctx.Dr3 != 0x00) || (ctx.Dr6 != 0x00) || (ctx.Dr7 != 0x00))
				{
					found = true;
				}
			}

			return found;
		}
	}
	/*
	btw u need too put ur dll byte code in dll.h
	 the dll in there is a dll that used to turn everyone into coach that i made for recroom
	 */


	string key;
	int main()
	{
		/*
		//obsidum protection it will make the program hard to stop i think
		OBSIDIUM_ENC_START;
		OBSIDIUM_LIC_START;
		OBSIDIUM_VM_START;
		*/
		LI_FN(system)(xor_a("cls"));
		//ShowWindow(GetConsoleWindow(), SW_HIDE);
		LI_FN(system)(xor_a("color 8"));
		//activate this thread if u want to change the title for a bad anti debug
		//thread(randomtitle).detach();
		start_driver();
		cout << endl;



		LI_FN(system)(xor_a("cls"));
		cout << "\n\n Waiting until RecRoom is Open... \n\n";
	a:
		//i couldve found a better way to do this ngl
		if (process_find("RecRoom.exe"))
		{
			std::cout << xor_a("\n\n  [+] Starting...");
			LI_FN(Sleep)(500);
			LI_FN(Beep)(200, 200);
			mem(xor_a("UnityWndClass"));
			MessageBoxA(NULL, xor_a("Mod Started"), xor_a("??"), MB_OK);
		}

		if (!process_find("RecRoom.exe"))
		{
			goto a;
		}
		
	}


