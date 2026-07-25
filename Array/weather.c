#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>
#define DAY 5

void demo_weather()
{
	double temp[DAY] = { 23.5f, 25.6f, 27.5f, 32.4f, 20.3f };
	double sum = 0;
	double max_temp = temp[0];
	double min_temp = temp[0];

	for (int32_t i = 0; i < DAY; i++) {
		printf("Day : %d, Temp : %.2lf\n", i + 1, temp[i]);
		sum += temp[i];

		if (temp[i] > temp[0]) {
			max_temp = temp[i];
		}
		if (temp[i] < temp[0]) {
			min_temp = temp[i];
		}
	}
	double averge = sum / DAY;
	printf("Averge : %.2lf\n", averge);
	printf("Max_temp : %.2lf\n", max_temp);
	printf("Min_temp : %.2lf\n", min_temp);

	return 0;
}