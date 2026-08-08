#define _USE_MATH_DEFINES

#include <stdio.h>
#include <inttypes.h>
#include <math.h>
#include <errno.h>
#include <string.h>
#include <float.h>

void check_float_type(double number);
void float_compare_max(double num1, double num2);
void float_compare_min(double num1, double num2);
void float_dim(double num1, double num2);

void demo_float() {

	double number[] = { 1.0, -1.0, DBL_MIN / 2.0, 0.0, HUGE_VAL, -HUGE_VAL };
	
	int size = sizeof(number) / sizeof(number[0]);

	for (int i = 0; i < size; i++) {
		check_float_type(number[i]);
	}
	float_compare_max(10.0, 22.0);
	float_compare_min(10.10, 23.15);
	float_dim(10.10, 22.3);

}
void check_float_type(double number) {
	switch(fpclassify(number)){
	case FP_INFINITE: printf("%.2lf 是一个无穷大的数\n", number);break;
	case FP_NAN: printf("%.2lf 不是一个数\n", number);break;
	case FP_NORMAL: printf("%.2lf 是一个正常值\n", number);break;
	case FP_SUBNORMAL: printf("%.2lf 是一个次正规的数\n", number);break;
	case FP_ZERO: printf("%.2lf 是零\n", number);break;
	}
	if (isfinite(number))		printf("%.2lf 是一个有限数\n", number);
	if (isnan(number))			printf("%.2lf 是Nan\n", number);
	if (isnormal(number))		printf("%.2lf 是一个正常数\n", number);
	if (isinf(number))			printf("%.2lf 是一个无穷大的数\n", number);
	if (signbit(number))		printf("%.2lf 是一个有限数\n", number);
	else                        printf("%.2lf 是正或者零\n", number);
}
void float_compare_max(double num1, double num2) {
	double float_max_num1 = num1;
	double float_max_num2 = num2;

	double result = fmax(num1, num2);
	printf("%lf compare %lf, more big is : %lf\n",num1, num2, result);
}
void float_compare_min(double num1, double num2) {
	double float_min_num1 = num1;
	double float_min_num2 = num2;

	double result = fmin(num1, num2);
	printf("%lf compare %lf, more small is : %lf\n", num1, num2, result);
}
void float_dim(double num1, double num2) {
	double float_num1 = num1;
	double float_num2 = num2;

	double result = fdim(num1, num2);

	if (num1 < num2) {
		printf("When num1 < num2, result is 0\n");
	}

	printf("%lf dim %lf is : %lf\n", num1, num2, result);
}