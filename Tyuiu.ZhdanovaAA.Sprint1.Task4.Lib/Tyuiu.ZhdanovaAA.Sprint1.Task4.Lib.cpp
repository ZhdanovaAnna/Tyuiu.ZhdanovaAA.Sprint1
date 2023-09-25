// Tyuiu.ZhdanovaAA.Sprint1.Task4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <math.h>
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Service :public ISprint1Task4
{
	//Inherited via ISprint1Task4
	virtual float Vibor(float num) override
	{
		if ((num > 0) && (num != 8))
		{
			return 1 - 3 * num;
		}
		else if (num <= 1)
		{
			return pow(num, 2) - sin(num);
		}
		else
		{
			return cos(num);
		}
	}
};
