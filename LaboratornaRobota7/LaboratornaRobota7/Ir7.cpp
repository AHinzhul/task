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

	//����� �������� ������ A
	cout << "����i�� x" << endl;
	cin >> a;
	cout << "����i�� y" << endl;
	cin >> b;
	cout << "����i�� z, � ��������" << endl;
	cin >> c;
	//���, �������� ����� if
	if ((abs(1 + a * a*fabs(b - tan(c))) > 0.00000001) && (abs(cos(c*M_PI / 180)) > 0.00000001))
	{
		cout << "\t�������� ������ � ��� x = " << a << ", y = " << b << ", z = " << c << " ��������� " << fA(a, b, c) << endl;
	}
	else
	{
		cout << "\t��� �� ���������!" << endl;
	}


	//����� �������� ������ �	
	cout << "����i�� x" << endl;
	cin >> d;
	cout << "����i�� y" << endl;
	cin >> e;
	cout << "\t�������� ������ � ��� x = " << d << ", y = " << e << " ��������� " << fB(d, e) << endl;


	//����� ������� �������
	if ((abs(1 + a * a*fabs(b - tan(c))) > 0.00000001) && (abs(cos(c*M_PI / 180)) > 0.00000001))
	{
		a1 = int(fA(a, b, c));
		cout << "\t������� ������i� �������� ������ A = " << Task2(a1) << endl;
	}
	
	//����� ���� A i B
	double C;
	C = fA(a, b, c) + fB(d, e);
	cout << "A + B = " << C <<  endl;

	system("pause");
}
