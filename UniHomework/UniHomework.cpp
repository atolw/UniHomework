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
	case 1:	cout << "Одиниця.";     break;
	case 2:	cout << "Двійка.";	    break;
	case 3:	cout << "Трійка.";	    break;
	case 4:	cout << "Четвірка.";    break;
	case 5:	cout << "П'ятірка.";    break;
	case 6:	cout << "Шістка.";	    break;
	case 7:	cout << "Сімка.";	    break;
	case 8:	cout << "Вісімка.";	    break;
	case 9:	cout << "Дев'ятка.";    break;
	case 10:cout << "Десятка.";	    break;
	case 11:cout << "Одинадцятка.";	break;
	case 12:cout << "Дванадцятка.";	break;
	default:cout << "Значення оцінки не в діапазоні.";	break;
	}
}