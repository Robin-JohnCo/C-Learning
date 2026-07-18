#include <stdio.h>
#include <float.h>

void demo_flow(void)
{

	float max_float = FLT_MAX;
	float overflow = max_float * 1000.0f; // This will cause overflow

	float min_float = FLT_MIN;
	float underflow = min_float / 1000.0f; // This will cause underflow

	printf("Maxmum float : %e\n", max_float);
	printf("overflow : %e\n", overflow);

	printf("Minmum Positive float : %e\n", min_float);
	printf("underflow : %e\n", underflow);

	return 0;

}
