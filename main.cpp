#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //русский

	int a, b, c, d, e ;

	cout << "Первое число" << endl;
	cin >> a;

	cout << "Второе число" << endl;
	cin >> b;

	c = a - b;
	d = a + b;
	e = a / b;

	cout << "Сумма = " << c << endl;
	cout << "Разность = " << d << endl;
	cout << "Произведение = " << e << endl;

}