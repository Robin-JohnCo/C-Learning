#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <windows.h>

void demo_progress_bar()
{

	const TOTAL_STEPS = 100;

	puts("Start Loading");

	for (uint32_t i = 1; i <= TOTAL_STEPS; i++) {
		printf("\r[");
		
		for (uint32_t j = 0; j <= i; j++) {
			printf("#");
		}
		for (uint32_t j = 1; j <= TOTAL_STEPS; j++) {
			printf("");
		}
		
		printf("] % " PRIu32 "%%", (i *100) / TOTAL_STEPS);
		
		fflush(stdout);
		Sleep(100);
		
	}
	puts("Over!\n");
	return 0;




}