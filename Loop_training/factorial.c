#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void demo_factorial()
{

	uint32_t number;

	uint32_t factorial = 1;

	puts("Please input number, it will be factorial");

	scanf_s("%" SCNu32, &number);

	for (uint32_t index = 1; index <= number; index++) {
		
		factorial *= index;
		
	}

	printf("%" PRIu32 "! Factorial is : %"PRIu32"\n", number,factorial);


	return 0;
}