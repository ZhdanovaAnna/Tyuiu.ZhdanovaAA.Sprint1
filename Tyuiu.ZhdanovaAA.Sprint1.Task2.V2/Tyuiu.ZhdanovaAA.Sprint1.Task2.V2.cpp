// Tyuiu.ZhdanovaAA.Sprint1.Task2.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task2.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task2.Lib.cpp"
using namespace std;
int main()
{
    ISprint1Task2* logic = new Logic3();
    setlocale(LC_ALL, "Rus");
    cout << "ZhdanovaAA\nTask2_V2" << endl;
    int num_1, num_2;
    cout << "������� ����������� �����: ";
    cin >> num_1;
    cout << "������� ����� A, �� ������� ����� �������� ����� ����: ";
    cin >> num_2;
    cout << "����� ���� ����� ������ ����� A: " << boolalpha << logic->LogicLong(num_1, num_2) << endl;
}
