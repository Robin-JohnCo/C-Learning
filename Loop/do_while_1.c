#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void demo_do_while_1()
{

	uint8_t TOTAL_LAPS = 10;
	uint8_t current_lap = 0;

	puts("Start running");

	do {
		current_lap ++;

		printf("Current lap : %" PRIu8 "\n", current_lap);
	
	} while (current_lap < TOTAL_LAPS);



	return 0;
}