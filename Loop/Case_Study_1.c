#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void demo_Case_1()
{
	// 1.初始化
	
	const uint8_t PRICE = 5;		//一瓶饮料的价格是5￥

	uint8_t balance = 0;			//你投入的总额 -> 迭代

	uint8_t coin;					//你投入的硬币面额

	puts("Please put your coin");

	while (balance < PRICE) {
		puts("Insufficient funds; please insert coins.");  

		scanf_s("%" PRIu8, &coin);

	 
	    if (coin == 1 || coin == 2 || coin == 5) {		//只接受1，3，5元的硬币
			
			// 计次

			balance += coin; // balance = balance + coin;

			printf("Your have been put $% " PRIu8 " coin\n", balance); 
		}
		else {
			puts("We reject this type of coin");  // 你的硬币面额不对

		}
	}
	
    if (balance > PRICE) {
		printf("Your coin back : % " PRIu8 "\n", balance - PRICE);  //你的找零
	}

	return 0;
}