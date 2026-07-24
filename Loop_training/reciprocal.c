#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <windows.h>

void demo_reciprocal()
{
	uint32_t number;

	puts("Reciprocal your number");

	scanf_s("%" SCNu32, &number);

	for (uint32_t index = number; index > 0; index--) {
		puts("Reciprocal is starting!");
		
		printf("%" PRIu32"\n", index);
		Sleep(1000);
	}

	puts("Over!");

	return 0;
}