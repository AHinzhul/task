#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include "math.h"
#include "windows.h"
#include "func.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int a1;
	float a, b, c, d, e;

	//Пошук значення виразу A
	cout << "Введiть x" << endl;
	cin >> a;
	cout << "Введiть y" << endl;
	cin >> b;
	cout << "Введiть z, в градусах" << endl;
	cin >> c;
	//ОДЗ, записане через if
	if ((abs(1 + a * a*fabs(b - tan(c))) > 0.00000001) && (abs(cos(c*M_PI / 180)) > 0.00000001))
	{
		cout << "\tЗначення виразу А при x = " << a << ", y = " << b << ", z = " << c << " становить " << fA(a, b, c) << endl;
	}
	else
	{
		cout << "\tОДЗ не дотримано!" << endl;
	}


	//Пошук значення виразу В	
	cout << "Введiть x" << endl;
	cin >> d;
	cout << "Введiть y" << endl;
	cin >> e;
	cout << "\tЗначення виразу В при x = " << d << ", y = " << e << " становить " << fB(d, e) << endl;


	//Пошук добутку розрядів
	if ((abs(1 + a * a*fabs(b - tan(c))) > 0.00000001) && (abs(cos(c*M_PI / 180)) > 0.00000001))
	{
		a1 = int(fA(a, b, c));
		cout << "\tДобуток розрядiв значення виразу A = " << Task2(a1) << endl;
	}
	
	//Пошук суми A i B
	double C;
	C = fA(a, b, c) + fB(d, e);
	cout << "A + B = " << C <<  endl;

	system("pause");
}
