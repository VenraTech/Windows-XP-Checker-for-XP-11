typedef struct IUnknown IUnknown;

#include "WindowsXPChecker.h"

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR cmdParam, int cmdShow)
{
	//DETECTOR 1ST PHASE
	MessageBoxA(NULL, "We are checking to see if you are using XP, This should take a little", "WindowsXPChecker.exe - Detection Starting", MB_ICONWARNING|MB_OK);
	
	//SLEEP
	Sleep(1000 * 5); //5 SECONDS
	
	//DETECTOR 2ND PHASE
        if (!CheckForWindowsXP()) NotWindowsXP();
	MessageBoxA(NULL, "You are currently using XP.\r\nYou may proceed to exit the program", "WindowsXPChecker.exe - Detection Successful", MB_ICONWARNING|MB_OK);
}
