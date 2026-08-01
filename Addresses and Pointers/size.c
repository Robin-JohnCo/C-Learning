#include <stdio.h>
#include <stdint.h>

void demo_size() {

	uint32_t array[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	int* ptr = &array;

	size_t size_array = sizeof(array) / sizeof(array[0]);   // sizt_t 是符号的整数类型， 专门表示大小，长度之类的。跨平台，稳定性好
	
	
	printf("修改前的数组");
	puts("");
	for (size_t i = 0; i < size_array; ++i) {
		printf("%d ", array[i]);
	}
	puts("");
	printf("修改后的数组");
	for (size_t i = 0; i < size_array; ++i) {
		*(ptr + i) += 5;
	}
	puts("");
	for (size_t i = 0; i < size_array; ++i) {
		printf("%d ", *(ptr + i));
	}
	
	return 0;
}