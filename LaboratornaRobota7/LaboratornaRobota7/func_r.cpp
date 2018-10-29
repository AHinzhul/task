#include"func.h"
#define _USE_MATH_DEFINES
#include "math.h"

double fA(float x, float y, float z)
{
	return (3 + exp(y - 1)) / (1 + x * x*fabs(y - tan(z*M_PI / 180))) - tan(155 * M_PI / 180);
}
double fB(float x, float y)
{
	return 1 + pow(y - x, 1. / 3) + (y - x)*(y - x) / 2 + fabs(y - x)*fabs(y - x)*fabs(y - x) / 3;
}

int Task2(int x)
{
	int dobutok = 1, i = 1;
	while (x != 0) {
		dobutok *= x % 10 * i;
		i *= 10;
		x /= 10;
	}
	return dobutok;
}
