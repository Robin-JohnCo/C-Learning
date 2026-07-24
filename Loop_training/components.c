#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <windows.h>
#include <time.h>
#include <math.h>

bool check_components_health(uint32_t components_id);

void demo_components()
{
	const uint32_t components = 5;  //五个零件

	srand(time(NULL));

	puts("Start checking");

	for (uint32_t i = 0; i < components; i++) {
		printf("Check %" PRIu32 "... ", i + 1);
		
		if (check_components_health(i + 1)) {
			printf("type %" PRIu32 " better\n", i + 1);
		
		}
		else {
			printf("type %" PRIu32 " bad\n", i + 1);
		}
	}



	return 0;
}

bool check_components_health(uint32_t components_id) {
	if (rand() %10 < 2) {
		return false;
	}
	return true;
}
