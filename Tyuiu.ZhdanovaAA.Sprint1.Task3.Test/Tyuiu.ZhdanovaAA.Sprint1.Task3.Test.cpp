#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task3.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task3.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Unit
			ISprint0Task3V0* service = new Service();
			int num = 1675;
			float total;

			total = service->Uslovie(num);

			//Valid
			Assert::AreEqual(335.0f, total);

		}
	};
}
