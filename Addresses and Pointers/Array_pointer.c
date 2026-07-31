#include <stdio.h>
#include <stdint.h>

void demo_array_pointer()
{
	uint32_t number[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	int* ptr = number;  // &number[0]

	// 数组在内存中是连续的，所以只需要只得到首地址，就可以得知数组的地址

	// 数组的大小

	int size = sizeof(number) / sizeof(number[0]);

	printf("size = %d\n", size);

	puts("数组原始数据 ");

	for (uint8_t i = 0; i < size; ++i) {
		printf("%d ", number[i]);
	
	}
	printf("\n");
	
	printf("使用指针加法访问第5位元素\n");

	ptr += 4;

	printf("[ptr += 4] : %d\n", *ptr);

	printf("使用指针减法回到第1位元素\n");

	ptr -= 4;

	printf("[ptr -= 4] : %d\n", *ptr);

	int* start_ptr = &number[0];
	int* final_ptr = &number[size - 1];

	printf("数组首尾距离差 %td\n", final_ptr - start_ptr);

	// 指针之间的比较

	if (final_ptr > start_ptr) {
		puts("final_per指向的元素在start_per指向的元素之前");
	}

	// 用指针遍历数组
	puts("用外部指针遍历数组");

	for (int* p = start_ptr; p <= final_ptr; p++) {
			printf("%d ", *p);
	}
	puts("");
	puts("用外部指针遍历数组，使用减法逐步访问每个元素的反向顺序");
	for (int* p = final_ptr; p >= start_ptr; p--) {
		printf("%d ", *p);
	}
	puts("");
	int offset = 3;

	printf("使用指针访问特定值,第四位的值是 %d\n", *(start_ptr + offset));
	printf("使用指针访问特定值，跳回第一位的值 %d\n", *(start_ptr + offset - 1));
	
	int middle_ptr = &number[size / 2];

	if (start_ptr < middle_ptr) {
		printf("start_ptr所指向的元素在middle_ptr之前\n");
	}
	if (final_ptr > middle_ptr) {
		printf("final_ptr所指向的元素在middle_ptr之后");
	}

	return 0;
}