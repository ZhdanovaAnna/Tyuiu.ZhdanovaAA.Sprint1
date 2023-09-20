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
    cout << "Введите трехзначное число: ";
    cin >> num_1;
    cout << "Введите число A, на которое нужно поделить сумму цифр: ";
    cin >> num_2;
    cout << "Сумма цифр числа кратна числу A: " << boolalpha << logic->LogicLong(num_1, num_2) << endl;
}
