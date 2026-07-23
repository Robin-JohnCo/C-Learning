#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void demo_death_loop_1()
{

	uint8_t sum = 0; //求总

	uint8_t num = 100;



	while (true) {
		
		puts("Please input your number :");

		scanf_s("%" PRIu8, &num);

		sum += num;

		if (num == 0) {
			break;
		}
	}

	printf("Sum : % " PRIu8 "\n", sum);

	return 0;
}