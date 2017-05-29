//#define USE_MODULES

#ifdef USE_MODULES
import api;
#endif

#define WIN32_LEAN_AND_MEAN
#include "windows.h"

#ifndef USE_MODULES

void f(int) {}

#endif

int main()
{
	f(2);
}