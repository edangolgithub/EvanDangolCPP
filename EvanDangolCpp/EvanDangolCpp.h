// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the EVANDANGOLCPP_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// EVANDANGOLCPP_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef EVANDANGOLCPP_EXPORTS
#define EVANDANGOLCPP_API __declspec(dllexport)
#else
#define EVANDANGOLCPP_API __declspec(dllimport)
#endif
#include<iostream>
using namespace std;
// This class is exported from the EvanDangolCpp.dll
class EVANDANGOLCPP_API CEvanDangolCpp {
public:
	CEvanDangolCpp(void);
	// TODO: add your methods here.
	void add(int a, int b);
};

extern EVANDANGOLCPP_API int nEvanDangolCpp;

EVANDANGOLCPP_API int fnEvanDangolCpp(void);
