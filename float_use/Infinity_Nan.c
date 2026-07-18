#include <stdio.h>
#include <float.h>
#include <math.h>


void demo_inf(void)
{
	
	float positive_inf_float = INFINITY;
	printf("Positive infinity : %f\n", positive_inf_float);

	float negative_inf_float = -INFINITY;
	printf("Negative infinity : %f\n", negative_inf_float);

	float num = 1.0f;
	float infinity = num / 0.0f;
	printf("1.0 / 0.0 = %f\n", infinity);

	float negative_sqrt = sqrt(-1.0f);
	printf("sqrt(-1.0) = %f\n", negative_sqrt);

	return 0;



}
