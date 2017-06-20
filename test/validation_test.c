#include <ctest.h>
#include "func.h"

CTEST(check_input_data, division)
{
	const float result = divis(123, 0);
	const float expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(check_input_data, root)
{
	float result = root(-100);
    float expected = -1;
    ASSERT_EQUAL_U(expected, result);

}

CTEST(check_input_data, tg)
{
	float result = trig(3, 90);
	float expected = -1;
	ASSERT_EQUAL(expected,result);
}

CTEST(check_input_data, ctg)
{
	float result = trig(4, 0);
	float expected = -1;
	ASSERT_EQUAL(expected, result);
}
