#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void demo_for()
{
	const uint32_t TOTAL_LAPS = 10;

	uint32_t current_lap = 0;

	puts("staart running");

	for (current_lap = 0;current_lap <= TOTAL_LAPS;current_lap++) {
	
		printf("Current lap : %" PRIu32 "\n", current_lap);
	}



	return 0;
}