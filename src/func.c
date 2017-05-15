#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"
#define Pi 3.14

float plus(float A[], int n)
{
	int i;
	float value = 0;
	for (i = 0; i < n; i++)
		value += A[i];
	return value;
}

float minus(float A[], int n)
{
	int i;
	float value = 0;
	for (i = 0; i < n; i++)
		value -= A[i];
	return value;
}

float multi(float A[], int n)
{
	int i;
	float value = 1;
	for (i = 0; i < n; i++)
		value *= A[i];
	return value;
}

float divid(float a, float b)
{
	float value;
	if (b == 0)
		return -1;
	else
	{
		value = a / b;
		return value;
	}
}

int root(float a)
{
	float value;
	if (a < 0)
	{
		return -1.0;
	}
	else
	{
		value = sqrt(a);
		return value;
	}
}

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n*fact(n-1);
}

float trig(float var)
{
	int item;
	printf("1. sin\n2. cos\n3. tan\n4. ctg\n5. arcsin\n6. arccos\n7. arctg\n8. arcctg");
	scanf("%d", &item);
	switch(item)
	{
		case 1:
		{
			return sin(var * Pi/180);
			break;
		}
		case 2:
		{
			return cos(var * Pi/180);
			break;
		}
		case 3:
		{
			if (var == 90 || var == 270)
			{
				return 0;
				break;
			}
			else
			{
				return tan(var * Pi/180);
				break;
			}
		}
		case 4:
		{
			if (var == 0 || var == 180 || var == 360)
			{
				return 0;
				break;
			}
			else
			{
				return 1/tan(var * Pi/180);
				break;
			}
		}
		case 5:
		{
			return asin(var) * 180/Pi;
			break;
		}
		case 6:
		{
			return acos(var) * 180/Pi;
			break;
		}
		case 7:
		{
			return atan(var) * 180/Pi;
			break;
		}
		case 8:
		{
			return (Pi/2 - atan(var)) * 180/Pi;
		}
		default: return 0;
	}
}


float expon(float x, float y)
{
	return pow(x, y);
}
