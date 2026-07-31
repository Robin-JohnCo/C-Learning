#include <stdio.h>

void demo_Pointers()
{
	// 指针
	// 指针是一种特殊的变量，不存储具体的值，只储存数据的地址

	int build_floor[5] = { 101, 102, 103, 104, 105 };	//住户

	int tar_floor = 103;								// 目标住户

	int found = 0;										// 判断是否找到了住户

	// ptr_floor -> &build_floor[2]

	int* ptr_floor = &build_floor[2];
	// int* ptr_building_floor

	printf("住户的地址是%d\n", *ptr_floor);

	*ptr_floor = 106;

	printf("住户的地址是%d\n", *ptr_floor);

	// 快递员通过*（指针相当于一个地图工具）， 他带着ptr_floor这个指针变量（他存储了业主的地址）去寻找

	//int* ptr_floor_106 = ptr_floor;

	//*ptr_floor_106 = 106;

	//printf("住户搬到了%d\n", *ptr_floor_106);

	return 0;
}