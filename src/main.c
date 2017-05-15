#include <stdio.h>
#include "func.h"

int main()
{
	int i, n, item;
	printf("1. Plus\n2.Minus\n3.Multiplication\n4.Division\n5.Trigonometry\n 6.Factorial \n 7.Root\n 8.Exponentation\n9. Quit");
	while (item != 9)
	{	
		printf("\nInput item:  ");
		scanf("%d", &item);
		switch(item){
		case 1:
		{
			printf("Input amout of numbers: ");
			scanf("%d", &n);
			float A[n];
			printf("Enter numbers: ");
			for (i = 0; i < n; i++)
				scanf("%f", &A[i]);
			printf("Value: %.2f\n", plus(A, n));
		}	
		case 2:
		{
			printf("Input amout of numbers: ");
			scanf("%d", &n);
			float A[n];
			printf("Enter numbers: ");
			for (i = 0; i < n; i++)
				scanf("%f", &A[i]);
			printf("Value: %.2f\n", minus(A, n));
		}
		case 3:
		{
			printf("Input amout of numbers: ");
			scanf("%d", &n);
			float A[n];
			printf("Enter numbers: ");
			for (i = 0; i < n; i++)
				scanf("%f", &A[i]);
			printf("Value: %.2f\n", multi(A, n));
		}
		case 4:
		{
			float a, b;
			printf("Enter dividend and divisor: ");
			scanf("%f %f", &a, &b);
			if (divid (a, b) == -1)
				printf("Error");
			else
				printf("Value: %.2f\n", divid(a, b));
		}
		case 5:
		{
			float angle;
			printf("Enter the angle: ");
			scanf("%f",&angle);
			printf("Sin(x) = %.3f\n", trig(angle));
		}
		case 6:
		{
			printf("Enter the number for factorial: ");
			scanf("%d", &n);
			printf("Factorial = %d", fact(n));
		}
		case 7:
		{
			float a;
			printf("Enter the coefficients a, b, c: ");
			scanf("%f", &a);
			if (root(a) != -1){
				printf("x = %d", root(a));
			}
			else
				printf("No root");
		}
		case 8:
		{
			float x, y;
			printf("Enter the number and extent: ");
			scanf("%f %f", &x, &y);
			printf("x^y = %.2f\n", expon(x,y));
		}
		}
	}
	return 0;
}
