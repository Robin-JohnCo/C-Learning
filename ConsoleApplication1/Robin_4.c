#include <stdio.h>
#include <stdint.h>


void demo_plicit(void) {

	//无符号到有符号 强制显示转换 （int32_t）

	uint32_t uNum = UINT32_MAX;
	int32_t sNum = (int32_t)uNum;

	printf("uint32_t : %u\n", uNum);
	printf("conversted to int32_t : %d\n", sNum);


	//大范围到小范围

	int64_t longNum = 500000;
	int16_t shortNum = (int16_t)longNum;

	printf("int64_t = %lld\n", longNum);
	printf("conversted to int16_t : %hd", shortNum);

	// 小范围到大范围（扩展负数）

	int16_t smallNum = -1;
	int32_t bigNum = (int32_t)smallNum;

	printf("int16_t : %hd\n", smallNum);
	printf("conversted to int32_t : %d\n", bigNum);

}
