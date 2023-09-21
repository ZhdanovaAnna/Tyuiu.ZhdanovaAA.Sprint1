// Tyuiu.ZhdanovaAA.Sprint1.Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task3.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task3.Lib.cpp"
using namespace std;
int main()
{
	ISprint0Task3V0* service = new Service();
	setlocale(LC_ALL, "Rus");
	cout << "ZhdanovaAA\nTask3" << endl;
	int num;
	cout << "Введите число: ";
	cin >> num;
	cout << "Число после преображений равно " << service->Uslovie(num) << endl;
}

