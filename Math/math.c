#include <stdio.h>
#include <inttypes.h>
#include <math.h>

void demo_math() {

	double num_sqrt = 16.00;
	double num_fabs = -5.71;
	double num_ceil = 2.3;
	double num_floor = 2.7;
	double num_fmod1 = 5.5;
	double num_fmod2 = 2.0;

	double result_sqrt = sqrt(num_sqrt);
	double result_fabs = fabs(num_fabs);
	double result_ceil = ceil(num_ceil);
	double result_floor = floor(num_floor);
	double result_fmod = fmod(num_fmod1, num_fmod2);

	printf("%lf 的开根是 : %lf\n", num_sqrt, result_sqrt);
	printf("%lf 的绝对值是 : %lf\n", num_fabs, result_fabs);
	printf("%lf 的向上取整是 : %lf\n", num_ceil, result_ceil);
	printf("%lf 的向下取整是 : %lf\n", num_floor, result_floor);
	printf("%lf / %lf 的余数是 : %lf\n", num_fmod1, num_fmod2, result_fmod);

	return 0;
}