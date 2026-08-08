#define _USE_MATH_DEFINES

#include <stdio.h>
#include <inttypes.h>
#include <math.h>

void demo_Tri()
{
	double input_angle_degrees = 0.00;
	double input_angle_radians = 0.00;
	double sin_value = 0.00;
	double cos_value = 0.00;
	double tan_value = 0.00;

	printf("请输入角度\n");
	scanf_s("%lf", &input_angle_degrees);

	input_angle_degrees = input_angle_degrees * (M_PI / 180);

	sin_value = sin(input_angle_degrees);
	cos_value = cos(input_angle_degrees);
	tan_value = tan(input_angle_degrees);

	printf("The sin degress is : %lf, value : %lf\n", input_angle_degrees, sin_value);
	printf("The cos degress is : %lf, value : %lf\n", input_angle_degrees, cos_value);
	printf("The atan degress is : %lf, value : %lf\n", input_angle_degrees, tan_value);

	return 0;
}