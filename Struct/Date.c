#include <stdio.h>

typedef struct Date {    // 结构体里面有三个成员
	int day;
	int month;
	int year;
}Date;
typedef struct Person {
	char name[50];
	int age;
	float height;
	
}Person;
void demo_Date()
{
	Date today = {2, 8, 2026};
	Person Robin = {"Robin", 20, 170};

	printf("Today is %d-%d-%d\n", today.year, today.month, today.day);

	Date* today_ptr = &today;

	printf("Accessed via pointer %d-%d-%d\n", today_ptr->year, today_ptr->month, today_ptr->day);

	printf("%s age %d years old and height %.2f ", Robin.name, Robin.age, Robin.height);
	return 0;
}