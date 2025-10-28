#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>


using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    
	float a = 2, b = 3, y, step = 0.1;	 
	cout << "range [" << a << "; " << b << "]\nx\t y\t " << endl;
	while (a <= b)
	{
		y = pow(log10(a), 2) + pow(a, 2) + 2;
		cout << "x = " << showpoint << setprecision(2) << a << "\t y = " << setprecision(4) << y << endl;
		a += step;
	}
}


