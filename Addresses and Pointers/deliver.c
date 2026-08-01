#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void add_my_value(int32_t* value);

void demo_deliver()
{
	int my_value = 10;

	printf("Original value %d\n", my_value);

	add_my_value(&my_value);

	printf("After value %d\n", my_value);



	return 0;
}

void add_my_value(int32_t* value) {
	*value += 10;
}