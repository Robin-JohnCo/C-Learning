#include <stdio.h>
#include <stdint.h>

void demo_wild()
{
	uint32_t floor[] = { 103 };

	int* ptr_to_floor = &floor;

	printf("当前的楼层是%d, 地址是%p\n", *ptr_to_floor, ptr_to_floor);

	{
		
		// 创造一个新的作用域
		uint32_t floor_104 = 104; 


		ptr_to_floor = &floor_104;
	
	
	}  // floor_104 已经离开作用域，这个变量的值和地址已经消失，那么指针就指向了一个无效的地址，这就是野指针，会导致不可知的结果
	
	printf("试图访问新的楼层 %d, 可能的地址是 %p\n", &ptr_to_floor, ptr_to_floor);



	return 0;
}