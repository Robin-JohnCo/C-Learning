#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void print_binary(uint8_t num);

void demo_bitwise()
{
	int a = 2;
	int b = 3;

	printf("a & b : %d\n", a & b);
	printf("a | b : %d\n", a|b);
	printf("a ^ b : %d\n", a ^ b);

	// & 与运算符 确定特殊位置的值
	// | 或运算符 控制开关 组合标记位 设定特殊位
	//	^ 异或运算符 确定特殊位置 相同为零 相异为一

	//按位取反 ~

	uint8_t status = 0b00001100;
	printf("Initial binary : 0b\n");
	print_binary(status);
	printf("\t(Binary)\n");

	status = ~status;
	printf("Final : 0b");
	print_binary(status);
	printf("\t(Binary)\n");


	return 0;
}

void print_binary(uint8_t num) {
	for (int index = 7; index >= 0; index--) {
		printf("%d", (num >> index) & 1);
	}



}