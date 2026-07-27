#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>

uint32_t fbnc(uint32_t n);

void demo_factorial_2()
{
	uint32_t number = 10;

	uint32_t fbnc_1 = fbnc(number);

	printf("Number's fbnc is : %u\n", fbnc_1);

	return 0;
}

uint32_t fbnc(uint32_t n) {
	if (n <= 1) {
		return n;
	}

	uint32_t fbnc_2 = 0;
	uint32_t fbnc_1 = 1;

	uint32_t fbnc = 0;

	for (uint32_t i = 2; i <= n; ++i) {
		fbnc = fbnc_1 + fbnc_2;
		fbnc_2 = fbnc_1;
		fbnc_1 = fbnc;
	}
	return fbnc;
}