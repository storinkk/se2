#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //�������

	int a, b, c, d, e ;

	cout << "������ �����" << endl;
	cin >> a;

	cout << "������ �����" << endl;
	cin >> b;

	c = a - b;
	d = a + b;
	e = a / b;

	cout << "����� = " << c << endl;
	cout << "�������� = " << d << endl;
	cout << "������������ = " << e << endl;

}