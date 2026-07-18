#include <stdio.h>
#include <float.h>

void demo_precision(void) {

	float num_float = 1.0 / 3.0f;
	double num_double = 1.0 / 3.0;

	printf("Float precision : %.20f\n", num_float);
	printf("Double precision : %.20lf\n", num_double);

	printf("Defined precision for float : %d\n", FLT_DIG);
	printf("Defined precision for double : %d\n", DBL_DIG);

	return 0;
}
