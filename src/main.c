#include <stdio.h>
#include "func.h"

int main()
{
	int i, n, item;
	while (item != 9) {
	printf("Calculator menu\n");
	printf("1.Plus\n2.Minus\n3.Multiplication\n4.Division\n5.Trigonometry\n6.Factorial \n7.Root\n8.Exponentation\n9. Quit");
		printf("\nInput item:  ");
		scanf("%d", &item);
		switch (item) {
		case 1:
		{
			printf("Input amout of numbers: ");
			scanf("%d", &n);
			float A[n];
			printf("Enter numbers: ");
			for (i = 0; i < n; i++)
				scanf("%f", &A[i]);
			printf("Value: %.4f\n", plus(A, n));
		}
		break;
		case 2:
		{
			printf("Input amout of numbers: ");
			scanf("%d", &n);
			float A[n];
			printf("Enter numbers: ");
			for (i = 0; i < n; i++)
				scanf("%f", &A[i]);
			printf("Value: %.4f\n", minus(A, n));
		}
		break;
		case 3:
		{
			printf("Input amout of numbers: ");
			scanf("%d", &n);
			float A[n];
			printf("Enter numbers: ");
			for (i = 0; i < n; i++)
				scanf("%f", &A[i]);
			printf("Value: %.4f\n", multi(A, n));
		}
		break;
		case 4:
		{
			float a, b, c, f;
			printf("Enter dividend and divisor: ");
			scanf("%f %f", &a, &b);
			f = divis(a, b, &c);
			if(f == 0){
				printf("Value: %.4f\n", c);
			}
			else{
				printf("Invalid value");
			}
		}
		break;
		case 5:
		{
			int item = 0;
			printf("Trigonometry\n");
			printf("1. sin\n2. cos\n3. tan\n4. ctg\n5. arcsin\n6. arccos\n7. arctg\n8. arcctg\n");
			printf("Input item: ");
			scanf("%d", &item);
			float angle;
			printf("Enter the angle: ");
			scanf("%f",&angle);
			if ((item == 3 || item == 4) && trig(item, angle) == -1){
				printf("Invalid value of angle");
			}
			else{
				printf("%.4f\n", trig(item, angle));
			}
		}
		break;
		case 6:
		{
			printf("Enter the number for factorial: ");
			scanf("%d", &n);
			printf("Factorial = %d", fact(n));
		}
		break;
		case 7:
		{
			float a;
			printf("Enter the number to extract the root: ");
			scanf("%f", &a);
			if (root(a) != -1){
				printf("Root = %d", root(a));
			}
			else
				printf("Negative value");
		}
		break;
		case 8:
		{
			float x, y;
			printf("Enter the number and extent: ");
			scanf("%f %f", &x, &y);
			printf("x^y = %.4f\n", expon(x,y));
		}
		default:
			break;
		}
	}
	return 0;
}
