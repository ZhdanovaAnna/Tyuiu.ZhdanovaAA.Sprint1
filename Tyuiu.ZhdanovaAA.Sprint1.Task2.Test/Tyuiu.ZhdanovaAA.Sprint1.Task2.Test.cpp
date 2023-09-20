#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task2.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Unit
			ISprint1Task2* logic = new Logic3();
			int num_1 = 345, num_2 = 7;
			bool n;

			n = logic->LogicLong(num_1, num_2);

			//Valid 
			Assert::AreEqual(false, n);
		}
	};
}
