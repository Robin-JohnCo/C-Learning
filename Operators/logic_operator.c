#include <stdio.h>
#include <stdint.h>

void demo_logic_operator()
{
	uint8_t a = 10;
	uint8_t b = 20;
	uint8_t c = 30;

	printf("a > b && b < c : %u\n", a > b && b < c);
	printf("a > b || b < c : %u\n", a > b || b < c);

	return 0;
}