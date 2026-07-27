#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>

int get_factorial(int n);

void demo_factorial()
{
	int num = 5;

	int factorial = get_factorial(num);

	printf("%d's factorial is : %d", num, factorial);


	return 0;
}
int get_factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * get_factorial(n - 1);
	}
}