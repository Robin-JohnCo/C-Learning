#include <stdio.h>
#include <inttypes.h>
#include <math.h>

void demo_exp_log() {
	double input_exp = 2.00;
	double input_log = 2.7138;
	double input_log10 = 100;

	double result_exp = exp(input_exp);
	double result_log = log(input_log);
	double result_log10 = log10(input_log10);

	printf("exp%.2lf : %.2lf\n", input_exp, result_exp);
	printf("log%.2lf : %.2lf\n", input_log, result_log);
	printf("log10%.2lf : %.2lf\n", input_log10, result_log10);

	return 0;
}