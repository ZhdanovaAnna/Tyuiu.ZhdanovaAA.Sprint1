// Tyuiu.ZhdanovaAA.Sprint1.Task0.V4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task0.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task0.Lib.cpp"
using namespace std;
int main()
{
    ISprint1Task0V01* rezalt = new Rezalt5();
    setlocale(LC_ALL, "Russian");
    cout << "ZhdanovaAA\nTask0_V4" << endl;
    int num_1, num_2, num_3;
    cout << "������� ������ �����: ";
    cin >> num_1;
    cout << "������� ������ �����: ";
    cin >> num_2;
    cout << "������� ������ �����: ";
    cin >> num_3;
    cout << "������� �������� ��������� ����� ����� " << rezalt->Rezalt(num_1, num_2, num_3) << endl;

}
