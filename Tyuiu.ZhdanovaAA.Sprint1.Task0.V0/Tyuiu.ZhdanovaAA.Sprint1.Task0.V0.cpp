// Tyuiu.ZhdanovaAA.Sprint1.Task0.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint1.Task0.Lib/Tyuiu.ZhdanovaAA.Sprint1.Task0.Lib.cpp"
using namespace std;
int main()
{
    ISprint1Task0V01* rezalt = new Rezalt1();
    setlocale(LC_ALL, "Russian");
    cout << "ZhdanovaAA\nTask0_V0" << endl;
    int lenght, width, height;
    cout << "¬ведите длину параллелепипеда: ";
    cin >> lenght;
    cout << "¬ведите ширину параллелепипеда: ";
    cin >> width;
    cout << "¬ведите высоту параллелепипеда: ";
    cin >> height;
    cout << "ќбъем параллелепипеда равен " << rezalt->Rezalt(lenght, width, height) << endl;

}
