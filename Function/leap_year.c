#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year);

int main()
{

	int year = 2024;

	printf("%d年是%s: ", year, (is_leap_year) ? "是闰年" : "不是闰年");



	return 0;
}

bool is_leap_year(int year) {
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}



