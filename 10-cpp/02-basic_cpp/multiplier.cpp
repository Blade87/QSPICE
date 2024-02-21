// Automatically generated C++ file on Wed Feb 21 15:45:12 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD multiplier.cpp kernel32.lib

union uData
{
   bool b;
   char c;
   unsigned char uc;
   short s;
   unsigned short us;
   int i;
   unsigned int ui;
   float f;
   double d;
   long long int i64;
   unsigned long long int ui64;
   char *str;
   unsigned char *bytes;
};

// int DllMain() must exist and return 1 for a process to load the .DLL
// See https://docs.microsoft.com/en-us/windows/win32/dlls/dllmain for more information.
int __stdcall DllMain(void *module, unsigned int reason, void *reserved) { return 1; }

// #undef pin names lest they collide with names in any header file(s) you might include.
#undef in0
#undef out0

extern "C" __declspec(dllexport) void multiplier(void **opaque, double t, union uData *data)
{
   double  in0  = data[0].d; // input
   double &out0 = data[1].d; // output

// Implement module evaluation code here:
   out0 = in0 + in0;

}
