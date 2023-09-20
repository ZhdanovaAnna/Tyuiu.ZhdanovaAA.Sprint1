// Tyuiu.ZhdanovaAA.Sprint1.Task2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Logic3 :public ISprint1Task2
{
	//Inherited via ISprint1Task2
	virtual bool LogicLong(int num_1, int num_2) override
	{
		int digit_1 = num_1 / 100 % 10, digit_2 = num_1 / 10 % 10, digit_3 = num_1 % 10;
		bool n = (digit_1 + digit_2 + digit_3) % num_2 == 0;
		return n;
	}
};