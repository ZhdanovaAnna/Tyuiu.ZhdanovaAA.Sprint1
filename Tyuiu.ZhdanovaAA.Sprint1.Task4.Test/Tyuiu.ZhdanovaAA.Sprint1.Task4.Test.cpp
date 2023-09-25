#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task4.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task4.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest14
{
	TEST_CLASS(UnitTest14)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Unit
			ISprint1Task4* service = new Service();
			float num = 8, total;
			
			total = service->Vibor(num);

			//Valid
			Assert::AreEqual(-0.1455f, total);
		}
	};
}
