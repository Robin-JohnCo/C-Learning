#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void demo_triangle()
{
	uint32_t num;

	puts("square line");

	scanf_s("%" SCNu32, &num);


	for (uint32_t i = 0; i <= num; i++) {
		for (uint32_t j = 0; j <= i; j++) {
			printf("* ");
		}
		puts("");
	}


	return 0;
}