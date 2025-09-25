// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    // Задано три цілих числа: A, B, C. Перевірити істинність висловлювання: «Хоча б одне з чисел A, B, C позитивне». 

    int a, b, c;

    cout << boolalpha << "Enter a, b, c in order: ";
    cin >> a >> b >> c;
    cout << "The statement is ";
        (a > 0 || b > 0 || c >> 0) ? cout << true : cout << false;
    cout << endl;

    cout << "The statement is " << (a > 0 || b > 0 || c >> 0);
}
