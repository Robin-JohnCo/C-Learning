#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>

#define MONTH_COUNT 12

int32_t month_count(int32_t month, int32_t year);
int is_leap_year(int year);
int get_day_in_month(int month, int year);


void demo_months()
{
	// 表驱动法
	// 使用数据结构
	// 使用数组
	// 来代替复杂的逻辑语句

	// 核心思想 ： 许多程序行为可以通过查表来确定，而不是通过复杂的条件语句。

	// 1. 识别： 确定程序中可以用查表代替逻辑的部分
	// 2. 设计： 创建包含所有可能输入和对应输出的表
	// 3. 实现： 编写代码，使用输入作为索引或者建来查找照表中的对应输出
	// 4. 优化： 根据需要， 调整表的结构以提高效率或者可读性

	int32_t month = get_day_in_month(2, 2025);
	printf("The Month Day is : %u", month );

	return 0;
}
int32_t month_count(int32_t month, int32_t year) {
	if (month < 1 || month > 12) {
		puts("Error Number");
	}
	else if (month == 1) {
		return 31;
	}
	else if (month == 2) {
		if (is_leap_year(year)) {
			return 29;
		}
		else {
			return 28;
		}
	}
	else if (month == 3) {
		return 31;
	}
	else if (month == 4) {
		return 30;
	}
	else if (month == 5) {
		return 31;
	}
	else if (month == 6) {
		return 30;
	}
	else if (month == 7) {
		return 31;
	}
	else if (month == 8) {
		return 31;
	}
	else if (month == 9) {
		return 30;
	}
	else if (month == 10) {
		return 31;
	}
	else if (month == 11) {
		return 30;
	}
	else if (month == 12) {
		return 31;
	}
}

int get_day_in_month(int month, int year) {
	const is_day_month[MONTH_COUNT] = { 31, is_leap_year(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return is_day_month[month - 1];
}
	int is_leap_year(int year) {
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
