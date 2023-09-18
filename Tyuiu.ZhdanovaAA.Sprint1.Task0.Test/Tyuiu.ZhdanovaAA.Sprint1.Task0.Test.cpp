#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task0.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest10
{
	TEST_CLASS(UnitTest10)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			//Unit
			ISprint1Task0V01* rezalt = new Rezalt1();
			int lenght = 4, width = 3, height = 5;
			float total;

			total = rezalt->Rezalt(lenght, width, height);

			//Valid
			Assert::AreEqual(60.0f, total);
		}
		TEST_METHOD(TestMethod2)
		{
			//Unit
			ISprint1Task0V01* rezalt = new Rezalt2();
			int lenght = 4, width = 4, height = 5;
			float total;

			total = rezalt->Rezalt(lenght, width, height);

			//Valid
			Assert::AreEqual(112.0f, total);
		}
		TEST_METHOD(TestMethod3)
		{
			//Unit
			ISprint1Task0V00* calculate = new Calculate3();
			int num_1 = 3, num_2 = 4, total;

			total = calculate->Calculate(num_1, num_2);

			//Valid 
			Assert::AreEqual(25, total);
		}
		TEST_METHOD(TestMethod5)
		{
			//Unit
			ISprint1Task0V01* rezalt = new Rezalt5();
			int num_1 = 3, num_2 = 4, num_3 = 5;
			float total;

			total = rezalt->Rezalt(num_1, num_2, num_3);

			//Valid 
			Assert::AreEqual(4.0f, total);
		}
	};

}