// Tyuiu.ZhdanovaAA.Sprint1.Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task4.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task4.Lib.cpp"
using namespace std;
int main()
{
    ISprint1Task4* service = new Service();
    setlocale(LC_ALL, "Ru");
    cout << "ZhdanovaAA\nTask4" << endl;
    float num;
    cout << "Введите число X: ";
    cin >> num;
    cout << "Функция y=f(x) равна: " << service->Vibor(num) << endl;
}
