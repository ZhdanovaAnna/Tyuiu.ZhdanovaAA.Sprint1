// Tyuiu.ZhdanovaAA.Sprint1.Task0.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task0.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task0.Lib.cpp"
using namespace std;
int main()
{
	ISprint1Task0V00* calculate = new Calculate3();
	setlocale(LC_ALL, "Russian");
	cout << "ZhdanovaAA\nTask0_v2" << endl;
	int num_1, num_2;
	cout << "������� ������ �����: ";
	cin >> num_1;
	cout << "������� ������ �����: ";
	cin >> num_2;
	cout << "����� ��������� ��������� ����� ����� " << calculate->Calculate(num_1, num_2) << endl;

}
