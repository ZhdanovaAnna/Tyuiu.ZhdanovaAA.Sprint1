// Tyuiu.ZhdanovaAA.Sprint1.Task1.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task1.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task1.Lib.cpp"
using namespace std;
int main()
{
	ISprint1Task1* logic = new Logic3();
	setlocale(LC_ALL, "Rus");
	cout << "ZhdanovaAA\nTask1_V2" << endl;
	int num;
	cout << "Введите число: ";
	cin >> num;
	if (logic->Logic(num))
	{
		cout << "Число " << num << " является четным" << endl;
	}
	if ((logic->Logic(num)) == false)
	{
		cout << "Число " << num << " является нечетным" << endl;
	} 
}
