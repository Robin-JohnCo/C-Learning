#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void demo_pyramid()
{

	uint32_t num;

	puts("Pyramid line");

	scanf_s("%" SCNu32, &num);

	for (uint32_t i = 1; i <= num; i++) {
		
		for (uint32_t j = 1; j <= num - i; j++) {
			printf("  ");
		}
		for (uint32_t j = 1; j <= i; j++) {
			printf("%" PRIu32 " " "", j);
		}
		for (uint32_t j = i - 1; j >= 1; j--) {
			printf("%" PRIu32 " " "", j);
		}
		printf("\n");
	}


	printf("Over!");

	return 0;
}