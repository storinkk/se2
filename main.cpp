#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //русский

	int a, b, c;

	cout << "Первое число" << endl;
	cin >> a;

	cout << "Второе число" << endl;
	cin >> b;

	c = a + b;

	cout << "Сумма = " << c << endl;

}