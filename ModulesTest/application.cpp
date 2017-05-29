#define USE_MODULES

#ifdef USE_MODULES
import api;
#endif

#ifndef USE_MODULES
void f(int) {} // EP_HACK: Stub for testing out modules vs. non-modules
#endif

int main()
{
	f(2);
}