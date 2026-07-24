#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void demo_continue()
{

	int32_t number = 1;

	while (1) {
	
		puts("Please input a number(0-100)");
	
		scanf_s("%" PRId32, &number);
	
		if (number == 0) {
			puts("Exit");
			break;
		}
		if (number > 100 || number < 0) {
			puts("baka");
			continue;
		}
		if (number % 2 == 0) {
			puts("even");
			continue;
		}
		else {
			puts("odd");
			continue;
		}

	}



	return 0;
}