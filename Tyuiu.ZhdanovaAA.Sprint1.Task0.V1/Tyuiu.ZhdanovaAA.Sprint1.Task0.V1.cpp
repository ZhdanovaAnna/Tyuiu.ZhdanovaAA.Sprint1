// Tyuiu.ZhdanovaAA.Sprint1.Task0.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task0.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task0.Lib.cpp"
using namespace std;
int main()
{
	ISprint1Task0V01* rezalt = new Rezalt2();
	setlocale(LC_ALL, "Russian");
	cout << "ZhdanovaAA\nTask0_V1" << endl;
	int lenght, width, height;
	cout << "¬ведите длину параллелепипеда: ";
	cin >> lenght;
	cout << "¬ведите ширину параллелепипеда: ";
	cin >> width;
	cout << "¬ведите высоту параллелепипеда: ";
	cin >> height;
	cout << "ѕлощадь боковой поверхности параллелепипеда равна " << rezalt->Rezalt(lenght, width, height) << endl;
}

