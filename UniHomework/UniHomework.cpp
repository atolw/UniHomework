// lr2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
int main()
{
    /*Обчислити площу бічної поверхні  та об’єм  за заданою висотою h та радіусом r.*/

	int h, r;
	double S, V;
	
	// a
	h = 5;
	r = 3;
	S = 2 * M_PI * r * h;
	V = M_PI * r * r * h;
	cout << "a) h = " << h << ", r = " << r << endl;

	cout << "S = " << fixed << setprecision(2) << S << endl;
	cout << "V = " << fixed << setprecision(2) << V << endl;
	cout << endl;

	// b
	cout << "Set h and r: ";
	cin >> h >> r;
	S = 2 * M_PI * r * h;
	V = M_PI * r * r * h;
	cout << "b) h = " << h << ", r = " << r << endl;
	cout << "S = " << fixed << setprecision(2) << S << endl;
	cout << "V = " << fixed << setprecision(2) << V << endl;
	cout << endl;

	// format output using printf and scanf

	// c

	h = 5;
	r = 3;
	S = 2 * M_PI * r * h;
	V = M_PI * r * r * h;

	printf_s("c) h = %d, r = %d\n", h, r);
	printf_s("S = %.2f\n", S);
	printf_s("V = %.2f\n", V);

	// d
	
	int height, radius;
	printf_s("Set h and r: ");
	scanf_s("%d %d", &height, &radius);
	S = 2 * M_PI * radius * height;
	V = M_PI * radius * radius * height;

	printf_s("d) h = %d, r = %d\n", height, radius);
	printf_s("S = %.2f\n", S);
	printf_s("V = %.2f\n", V);
}