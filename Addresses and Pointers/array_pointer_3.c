#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void demo_array_pointer_3()
{
	int department1[] = { 101, 102, 103 };

	int department2[] = { 201, 202, 203, 204 };

	int department3[] = { 301, 302 };

	int* departments_ptr[3] = {
	department1, department2, department3
	};

	int sizes[3] = {
		sizeof(department1) / sizeof(department1[0]),
		sizeof(department2) / sizeof(department2[0]),
		sizeof(department3) / sizeof(department3[0])
	};

	for (size_t i = 0; i < 3; ++i) {
		printf("Department %zu ", i + 1);

		for (size_t j = 0; j < sizes[i]; j++) {
			printf("%d ", departments_ptr[i][j]);
		}
		printf("\n");
	}

	return 0;
}