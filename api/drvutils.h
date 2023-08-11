#pragma once

void start_driver()
{
	driver().handle_driver();

	if (!driver().is_loaded())
	{
		cout << xor_a("Welcome to Athens Mod") << endl;
		Sleep(900);
		cout << xor_a("\n\n  [+] driver Loading...") << endl;
		mmap_driver();
	}

	driver().handle_driver();
	driver().is_loaded() ? cout << xor_a("\n\n  [+] driver Loaded!") << endl << MessageBoxA(NULL, xor_a("Driver Loaded!"), xor_a("Athens Mod"), MB_OK) : cout << xor_a("  [+] driver error =<, Make Sure Antivirus Is Off") << endl << MessageBoxA(NULL, xor_a("Driver Error"), xor_a("Athens Mod"), MB_OK);
}