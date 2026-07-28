#include <stdio.h>

void demo_Address()
{
	int building_floor[5] = { 101, 102, 103, 104, 105 }; //住户

	int target_floor = 103;								// 目标住户

	int found = 0;										// 判断是否找到了住户
	
	int *ptr_building_floor = &building_floor[2];
	// int* ptr_building_floor


	printf("103的地址是 ： %p\n", &building_floor[2]);
	printf("ptr_building_floor指针变量存储的地址是 ： %p\n", ptr_building_floor);

	puts("快递员开始寻找薛源的地址并准备狠狠雷普他......");
	puts("---------------------------------------------");

	for (int i = 0; i < 5; i++) {
		if (building_floor[i] == target_floor) {
			printf("住户%d薛源的地址是 : %p\n", building_floor[i], (void*)&building_floor[i]);

			found = 1;
			puts("快递员找到了薛源，并将他狠狠雷普，改造成了小南娘");
			break;
		}

	}
	if (!found) {
		puts("快递员没有找到薛源");
	}

	return 0;
}