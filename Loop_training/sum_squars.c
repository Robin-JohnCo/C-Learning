#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void demo_sum_squars()
{

	int32_t number;

	int32_t sum_of_squars = 0;  //初始化求和

	puts("请输入一个数字N，我们将会计算从1到N的平方和");

	scanf_s("%" SCNd32, &number);

	for (int32_t index = 1; index <= number; index++) {
		sum_of_squars += index * index;
	
	}

	printf("Sum is : %" PRId32 "\n", sum_of_squars);


	return 0;
}