#pragma once
#include "../EvanDangolCpp/EvanDangolCpp.h"
using namespace System;

namespace EvanDangolCLI {
	public ref class CppBLBridge

	{

	private:

		CEvanDangolCpp * m_cppBL;

	public:

		CppBLBridge();

		~CppBLBridge();

		void add(int a, int b);
		
	};
}
