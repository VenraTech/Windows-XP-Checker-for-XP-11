typedef struct IUnknown IUnknown;

#pragma once

//Include the Windows API
#include <Windows.h>

//Windows XP Checker
    WINBOOL CheckForWindowsXP() {
	OSVERSIONINFOA osvi;
	ZeroMemory(&osvi, sizeof(OSVERSIONINFOA));
	osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOA);
	GetVersionExA(&osvi);
	if (osvi.dwMajorVersion == 5) {
		return true;
	}
	return false;
}

//If detection knows your not using XP, this shows up.
void NotWindowsXP() {
  MessageBoxA(NULL, "No. You are not using XP.", "WindowsXPChecker.exe - Detection Failed", MB_ICONERROR|MB_OK); 
  exit(0);
  }


