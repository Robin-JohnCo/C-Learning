#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void) {

	int a = 5;

	assert(a == 5);

	a = 10;

	assert(a == 5);

	printf("Hello");


	return EXIT_SUCCESS;
}