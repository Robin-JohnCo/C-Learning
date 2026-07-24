#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <math.h>

void demo_prime()
{

	int32_t num;

	puts("Judge Prime number");

	scanf_s("%" PRId32, &num);

	if (num <= 1) {
		puts("Not Prime");
	}
	else {
		for (int32_t index = 2; index < sqrt(num); index ++) {
			if (num % index == 0) {
				puts("False");
				break;
			}
			else {
				puts("True");
				break;
			}
		}
	}
puts("Over!");
	return 0;
}