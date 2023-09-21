// Tyuiu.ZhdanovaAA.Sprint1.Task3.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Service :public ISprint0Task3V0
{
	//Inherited via ISprint0Task3V0
	virtual float Uslovie(int num) override
	{
		if ((num > 999) && ( num < 10000) && (num % 2 == 0) && (num != 1000) && (num % 4 == 0))
		{	
			return float(num * 2);
		}
		else
		{
			return float(num / 5.0f);
		}
	}
};
