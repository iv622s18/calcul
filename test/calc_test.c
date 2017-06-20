#include <ctest.h>
#include "func.h"

CTEST(operation, summ)
{
	float A[3] = {23, -13, 25};
	float result = plus(A,3);
	float expected = 35;
	ASSERT_EQUAL(expected, result);

	float B[2] = {45,  0};
	result = plus(B,2);
	expected = 45;
	ASSERT_EQUAL(expected, result);

	float C[2] = {-7, -16};
	result = plus(C, 2);
	expected = -23;
	ASSERT_EQUAL(expected, result);
}

CTEST(operation, subtractin)
{
	float A[3] = {23, -13, 25};
	float result = minus(A, 3);
	float expected = 11;
	ASSERT_EQUAL(expected, result);

	float B[2] = {45,  0};
	result = minus(B,2);
	expected = 45;
	ASSERT_EQUAL(expected, result);

	float C[2] = {-7, -16};
	result = minus(C, 2);
	expected = 9;
	ASSERT_EQUAL(expected, result);
}

CTEST (operation, multi)
{
    float A[2] = {5, 4};
    float result = multi(A, 2); 
    float expected = 20; 
    ASSERT_EQUAL(expected, result);

    float B[2] = {-25, -3};
    result = multi(B,2); 
    expected = 75; 
    ASSERT_EQUAL(expected, result);

    float C[3] = {-2.25, 5, 3};
    result = multi(C, 3); 
    expected = -33.75; 
    ASSERT_EQUAL(expected, result);
}

CTEST (operation, divis)
{
	float c;
	divis(10, 5, &c);
    float result = c;
    float expected = 2; 
    ASSERT_EQUAL(expected, result);
	
	divis(-12, 5, &c);
    result = c;
    expected = -2.4; 
    ASSERT_EQUAL(expected, result);

	divis(-81, -9, &c);
    result = c;
    expected = 9; 
    ASSERT_EQUAL(expected, result);
}

CTEST (operation, factorial)
{
    float result = fact(5); 
    float expected = 120; 
    ASSERT_EQUAL(expected, result);


    result = fact(8); 
    expected = 40320; 
    ASSERT_EQUAL(expected, result);
}

CTEST (operation, root)
{
    float result = root(121);
    float expected = 11;
    ASSERT_EQUAL(expected, result);
}

CTEST (trigonometric_operation, sin)
{
    float result = trig(1, 30);
    float expected = 0.5;
    ASSERT_EQUAL(expected, result);

    result = trig(1, 90);
    expected = 0;
    ASSERT_EQUAL(expected, result);

    result = trig(1, 45);
    expected = 0.707;
    ASSERT_EQUAL(expected, result);
}

CTEST (trigonometric_operation, cos)
{
    float result = trig(2, 30);
    float expected = 0.866;
    ASSERT_EQUAL(expected, result);
    
    result = trig(2, 90);
    expected = 0;
    ASSERT_EQUAL(expected, result);

    result = trig(2, 45);
    expected = 0.707;
    ASSERT_EQUAL(expected, result);
}

CTEST (trigonometric_operation, tg)
{
    float result = trig(3, 30);
    float expected = 0.577;
    ASSERT_EQUAL(expected, result);

    result = trig(3,39);
    expected = 0.81;
    ASSERT_EQUAL(expected, result);

}

CTEST (trigonometric_operation, ctg)
{
    float result = trig(4,68);
    float expected = 0.404;
    ASSERT_EQUAL(expected, result);

    result = trig(4, 45);
    expected = 1;
    ASSERT_EQUAL(expected, result);

    result = trig(4, 90);
    expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST (trigonometric_operation, arcsin)
{
    float result = trig(5, 1);
    float expected = 90;
    ASSERT_EQUAL(expected, result);

    result = trig(5, 0.5);
    expected = 30;
    ASSERT_EQUAL(expected, result);

    result = trig(5, 0.789);
    expected = 52.09;
    ASSERT_EQUAL(expected, result);
}

CTEST (trigonometric_operation, arccos)
{
    float result = trig(6, 0.356);
    float expected = 69.15;
    ASSERT_EQUAL(expected, result);

    result = trig(6, 0.5);
    expected = 60;
    ASSERT_EQUAL(expected, result);

    result = trig(6, 0.25);
    expected = 75.52;
    ASSERT_EQUAL(expected, result);
}

CTEST (trigonometric_operation, arctg)
{
    float result = trig(7, 7.69);
    float expected = 82.59;
    ASSERT_EQUAL(expected, result);

    result = trig(7, 0.8);
    expected = 38.66;
    ASSERT_EQUAL(expected, result);

    result = trig(7, 1);
    expected = 45;
    ASSERT_EQUAL(expected, result);
}

CTEST (trigonometric_operation, arcctg)
{
    float result = trig(8, 5.35);
    float expected = 10.58;
    ASSERT_EQUAL(expected, result);

    result = trig(8, 0.5);
    expected = 63.43;
    ASSERT_EQUAL(expected, result);

    result = trig(8, 30);
    expected = 1.91;
    ASSERT_EQUAL(expected, result);
}


CTEST (arithmetic_operation_16, exponentation)
{
    float result = expon(2, 5);
    float expected = 32;
    ASSERT_EQUAL(expected, result);

    result = expon(8, 4);
    expected = 4096;
    ASSERT_EQUAL(expected, result);

    result = expon(5, -1);
    expected = 0.2;
    ASSERT_EQUAL(expected, result);
}

