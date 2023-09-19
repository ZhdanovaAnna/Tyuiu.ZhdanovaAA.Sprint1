// Tyuiu.ZhdanovaAA.Sprint1.Task1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Logic3 :public ISprint1Task1
{
	//Inherited via ISprint1Task1
	virtual bool Logic(int num) override
	{
		if (num % 2 == 0)
		{
			return true;
		}
		if (num % 2 != 0)
		{
			return false;
		}
	} 
};