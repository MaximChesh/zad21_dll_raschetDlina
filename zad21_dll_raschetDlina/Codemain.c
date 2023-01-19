#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
#define PATH L"DLLCode21.dll"
typedef double(_cdecl* MyFunction) (double, double, double, double);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	HINSTANCE hMyDLL;
	if ((hMyDLL = LoadLibrary(PATH)) == NULL)return 1;
	MyFunction myFun = (MyFunction)GetProcAddress(hMyDLL, "MyFunc");

	double result = myFun(1, 2, 3, 4);

	FreeLibrary(hMyDLL);
	return 0;
}
