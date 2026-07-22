#include <stdio.h>
#include <stdbool.h>

void demo_wei()
{
	// 租车条件 21岁以上 租车时间 一年以及一年以上

	bool age = 21;
	bool driving_car = 2;

	if (age < 21) {
		puts("年龄不够");
	}
	if (driving_car < 1) {
		puts("驾驶经验不够");
	}



	return 0;
}