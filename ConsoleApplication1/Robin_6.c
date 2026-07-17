#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void demo_scanf_s(void) {

	printf("Please input a number:\n");

	int number_1, number_2, number_3;

	scanf_s("%d %d %d", &number_1, &number_2, &number_3);

	printf("Your number is : %d + %d + %d = %d\n",
		number_1, number_2, number_3, number_1 + number_2 + number_3);

	return 0;


}
