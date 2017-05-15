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

float minus(float A[], float b)
{
	int i;
	float value = 0;
	for (i = 0; i < n; i++)
		value -= A[i];
	return value;
}

