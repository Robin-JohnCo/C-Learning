#include <stdio.h>
#include <stdlib.h>

int demo_ptr {
	int* ptr = (int*)malloc(sizeof(int));

	if (ptr == NULL) {
		printf("Memory mallocing failed\n");
		return EXIT_SUCCESS;
	}

	*ptr = 10;
	printf("ptr point to %d ", *ptr);
	free(ptr);

	// Dangling pointer
	printf("ptr point to %d ", *ptr);

	return 0;
}