#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void demo_logic()
{

	int a = 90;
	int b = 100;

	bool greater = a > b;

	printf("a > b = : %d\n", greater);

	bool less = a < b;
	printf("a < b = : %d\n", less);

	bool equal = a == b;
	printf("a == b = : %d\n", equal);

	bool not_equal = a != b;
	printf("a != b = : %d\n", not_equal);

	bool greater_equal = a >= b;
	printf("a >= b = : %d\n", greater_equal);

	bool less_equal = a <= b;
	printf("a <= b = : %d\n", less_equal);

	return 0;
}