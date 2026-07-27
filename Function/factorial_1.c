#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>

int get_factorial_1_1(int n, int ass);

void demo_factorial_1()
{
	int num = 5;

	int factorial = get_factorial_1(num, 1);

	printf("%d's factorial is : %d", num, factorial);


	return 0;
}
int get_factorial_1(int n, int ass) {
	if (n == 0) {
		return ass;
	}
	else {
		return get_factorial_1(n - 1, n * ass);
	}
}