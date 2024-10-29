//
// This program is just an example one under VCS.
// Author: Shichaleev Vladimir, KE-217
//
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //ðóññêèé

	int a, b, c, d, e;

	cout << "Ïåðâîå ÷èñëî" << endl;
	cin >> a;

	cout << "Âòîðîå ÷èñëî" << endl;
	cin >> b;

	c = a - b;
	d = a + b;
	e = a / b;

	cout << "Ñóììà = " << c << endl;
	cout << "Ðàçíîñòü = " << d << endl;
	cout << "Ïðîèçâåäåíèå = " << e << endl;

}
