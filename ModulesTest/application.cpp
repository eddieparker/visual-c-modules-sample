//#define USE_MODULES

#ifdef USE_MODULES
import api;
#endif

#define WIN32_LEAN_AND_MEAN
#include "windows.h"

#ifndef USE_MODULES

void f(int) {}

#endif

void main()
{
	f(2);
}

int CALLBACK WinMain(
	HINSTANCE   hInstance,
	HINSTANCE   hPrevInstance,
	LPSTR       lpCmdLine,
	int         nCmdShow
)
{
	return 0;
}