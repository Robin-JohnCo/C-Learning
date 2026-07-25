#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>
#define GIRL 5

void demo_girl()
{
		uint32_t hour[GIRL] = { 5, 6, 3, 4, 7 };
		uint32_t sum = 0;
		uint32_t max_girl = hour[0];
		uint32_t min_girl = hour[0];

		for (uint8_t i = 0; i < GIRL; i++) {
			printf("Girl%" PRIu32 ", FuckHour : %" PRIu32 "\n", i + 1, hour[i]);
			sum += hour[i];

			if (hour[i] > hour[0]) {
				max_girl = hour[i];
			}
			if (hour[i] > hour[0]) {
				min_girl = hour[0];
			}
		}
	double ave = (double)sum / GIRL;
	printf("Ave : %.2lf\n", ave);
	printf("Sum : %u\n", sum);
	printf("Beatuiful girl : %u\n", max_girl);
	printf("Ugly girl : %u\n", min_girl);

	return 0;
}