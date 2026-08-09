#include <stdio.h>
#include <stdlib.h>

void demo_malloc()
{
	int static_arr[5] = { 1, 2, 3, 4, 5 };

	puts("静态数组");

	for (size_t i = 0; i < 5; i++) {
		printf("%d ", static_arr[i]);
	}
	printf("\n");
	puts("动态数组");
	int* dynamic_arr = (int*)malloc(5*sizeof(int));

	if (dynamic_arr == NULL) {
		perror("动态数组分配失败");
		exit(EXIT_FAILURE);
	}

	for (size_t i = 0; i < 5; i++) {
		dynamic_arr[i] = 10 * (i + 1);
	}
	for (size_t i = 0; i < 5; i++) {
		printf("%d ", dynamic_arr[i]);
	}

	free(dynamic_arr);
	return 0;
}