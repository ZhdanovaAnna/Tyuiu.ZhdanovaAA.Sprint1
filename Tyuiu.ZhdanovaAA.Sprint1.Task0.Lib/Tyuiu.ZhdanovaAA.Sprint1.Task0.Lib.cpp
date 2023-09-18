// Tyuiu.ZhdanovaAA.Sprint1.Task0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Rezalt1 :public ISprint1Task0V01
{
	//inherited via ISprint1Task0V01
	virtual float Rezalt(int lenght, int width, int height) override
	{
		return lenght * width * height;
	}
};
class Rezalt2 :public ISprint1Task0V01
{
	//inherited via ISprint1Task0V01
	virtual float Rezalt(int lenght, int width, int height) override
	{
		return 2 * (lenght * width + width * height + lenght * height);
	}
};
class Calculate3 :public ISprint1Task0V00
{
	//inherited via ISprint1Task0V01
	virtual int Calculate(int num_1, int num_2) override
	{
		return pow(num_1, 2) + pow(num_2, 2);
	}
};
class Rezalt5 :public ISprint1Task0V01
{
	//inherited via ISprint1Task0V01
	virtual float Rezalt(int num_1, int num_2, int num_3) override
	{
		return (num_1 + num_2 + num_3) / 3.0f;
	}

};