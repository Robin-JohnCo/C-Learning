#include <stdio.h>
#include <float.h>

void demo_double(void)
{
	double num1 = 132.566;
	double num2 = 445.965;
	
	double sum = num1 + num2;
	double difference = num1 - num2;
	double product = num1 * num2;
	double quotient = num1 / num2;

	printf("Sum : %lf\n", sum);
	printf("difference : %f\n", difference);
	printf("product : %f\n", product);
	printf("quotient : %f\n", quotient);

	long double Id_val = 1345465.21233L;
	printf("Id_val : %Lf\n", Id_val);

	return 0;
}
