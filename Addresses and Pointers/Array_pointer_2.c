#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void demo_array_pointer_2()
{
	int number[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};

	int(*ptr)[3] = number;  // 指向一个包含3个整数的数组的数组指针
	
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}


	return 0;
}