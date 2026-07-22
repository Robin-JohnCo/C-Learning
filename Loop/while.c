#include <stdio.h>
#include <stdint.h>

int main()
{

	const uint8_t TOTAL_LAPS = 10;  //  终止目标 总圈数
	uint8_t current_lap = 0;        // 当前圈数 初始化

	// while（） 括号内是布尔值的判断 false终止

	while (current_lap < TOTAL_LAPS) {
		current_lap++;  // 设置迭代点

		printf("Your current lap is : %u\n", current_lap);
	}



	return 0;
}