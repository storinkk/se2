#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //ðóññêèé

	int a, b, c;

	cout << "Ïåðâîå ÷èñëî" << endl;
	cin >> a;

	cout << "Âòîðîå ÷èñëî" << endl;
	cin >> b;

	c = a + b;

	cout << "Ñóììà = " << c << endl;

}
