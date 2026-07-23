#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void demo_death_loop_2()
{

	uint8_t sum = 0; //求总

	char input;



	while (true) {

		puts("Please input your number :");

		scanf_s (" %c", &input, 1);

		sum += input;

		if (input == 'q') {
			break;
		}
	}

	printf("Sum : % " PRIu8 "\n", sum);

	return 0;
}