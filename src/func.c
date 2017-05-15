#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float plus(float A[], int n)
{
	int i;
	float value = 0;
	for (i = 0; i < n; i++)
		value += A[i];
	return value;
}

float minus(float A[], float n)
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

float div(float a, float b)
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