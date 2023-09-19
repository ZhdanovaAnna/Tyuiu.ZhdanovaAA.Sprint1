#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task1.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task1.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* logic = new Logic3();
			//Unit
			int num = 5;
			bool n;

			n = logic->Logic(num);

			//Valid 
			Assert::AreEqual(false, n);
		}
	};
}
