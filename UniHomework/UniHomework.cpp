// yap yap yap 
#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>


using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    // 1

	double a, b, c, x, F;
	bool defined = false;
	cout << "Enter a, b, c, x: \n";
	cin >> a >> b >> c >> x;

	if (x < 0 && b != 0)
	{
		F = -a * pow(x, 2) + b;
		defined = true;
	}
	else if (x > 0 && b == 0 && (x - c) != 0)
	{
		F = x / (x - c) + 5.5;
		defined = true;
	}
	else if (c != 0)
	{
		F = x / -c;
		defined = true;
	}
	(defined) ? cout << "F = " << fixed << setprecision(2) << F << endl:
		cout << "F is undefined" << endl;

	// 2

	int mark;
	cout << "Enter mark: ";
	cin >> mark;
	switch (mark)
	{
	case 1:	cout << "�������.";     break;
	case 2:	cout << "�����.";	    break;
	case 3:	cout << "�����.";	    break;
	case 4:	cout << "�������.";    break;
	case 5:	cout << "�'�����.";    break;
	case 6:	cout << "س����.";	    break;
	case 7:	cout << "ѳ���.";	    break;
	case 8:	cout << "³����.";	    break;
	case 9:	cout << "���'����.";    break;
	case 10:cout << "�������.";	    break;
	case 11:cout << "�����������.";	break;
	case 12:cout << "�����������.";	break;
	default:cout << "�������� ������ �� � �������.";	break;
	}
}