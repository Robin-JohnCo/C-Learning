#define _USE_MATH_DEFINES

#include <stdio.h>
#include <inttypes.h>
#include <math.h>
#include <errno.h>
#include <string.h>

void demo_sqreerr() {

	double num = 0.00;
	double result = 0.00;

	printf("请输入一个数求他的平方根\n");
	scanf_s("%lf", &num);

	errno = 0;

	result = sqrt(num);


	if (errno == EDOM) {
		printf("输入的是负数，无法计算平方根！\n");
	}
	else if (errno == ERANGE) {
		printf("输入的数超出范围\n");
	}
	else if (errno == HUGE_VAL) {
		printf("输入的数超出范围！返回 HUGE_VAL\n");
	}
	else {
		printf("%.2lf的平方根是 : %.2lf\n", num, result);
	}



	return 0;
}