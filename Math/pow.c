#define _USE_MATH_DEFINES

#include <stdio.h>
#include <inttypes.h>
#include <math.h>

void demo_pow() {

	double square_size = 0.00;

	double square_area = 0.00;

	printf("请输入正方形的边长\n");
	scanf_s("%lf", &square_size);

	square_area = pow(square_size, 2);

	printf("Square area : %lf\n", square_area);

	return 0;
}