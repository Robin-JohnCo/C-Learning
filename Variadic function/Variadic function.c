#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double averge(int num_arg, ...);

int demo_va() {

	printf("Ave 2, 3, 4, 5 : %.2lf ", averge(4, 2, 3, 4, 5));

	return EXIT_SUCCESS;
}

double averge(int num_arg, ...) {
	double sum = 0.0;
	va_list args;

	va_start(args, num_arg);

	for (size_t i = 0; i < num_arg; i++) {
		
		sum += va_arg(args, int);
	}
	va_end(args);
	return num_arg > 0 ? sum / num_arg : 0;
}