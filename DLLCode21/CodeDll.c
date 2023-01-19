#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:

		break;

	case DLL_THREAD_ATTACH:

		break;

	case DLL_THREAD_DETACH:

		break;

	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
__declspec(dllimport) double MyFunc(double x1, double y1, double x2, double y2);

double MyFunc(double x1, double y1, double x2, double y2) {
	return (sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)));
}