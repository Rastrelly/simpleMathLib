#define EXPORTING_DLL
#include "simpleMathLib.h"

int CalcSum(int a, int b, bool &err)
{
	err = false;
	return a + b;
}

int CalcDiff(int a, int b, bool &err)
{
	err = false;
	return a - b;
}

int CalcMult(int a, int b, bool &err)
{
	err = false;
	return a * b;
}

float CalcDiv(int a, int b, bool &err)
{
	err = false;
	if (b != 0)
	{
		return (float)a / (float)b;
	}
	else
	{
		err = true;
		return 0;
	}
}

float CalcPower(int base, int powr, bool &err)
{
	err = false;
	float res = base;
	if (powr>0)
	for (int i = 1; i < powr; i++)
	{
		res *= base;
	}

	if (powr == 0) res = 1;

	if (powr < 0)
	{
		for (int i = 1; i < powr; i++)
		{
			res *= base;
		}
		res = 1 / res;
	}
	return res;
}