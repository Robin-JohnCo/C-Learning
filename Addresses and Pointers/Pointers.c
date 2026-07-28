#include <stdio.h>

int main()
{
	int build_floor[5] = { 101, 102, 103, 104, 105 }; //住户

	int tar_floor = 103;								// 目标住户

	int found = 0;										// 判断是否找到了住户

	int* ptr_floor = &build_floor[2];
	// int* ptr_building_floor

	printf("住户的地址是%d\n", *ptr_floor);

	*ptr_floor = 106;

	printf("住户的地址是%d\n", *ptr_floor);

	//int* ptr_floor_106 = ptr_floor;

	//*ptr_floor_106 = 106;

	//printf("住户搬到了%d\n", *ptr_floor_106);

	return 0;
}