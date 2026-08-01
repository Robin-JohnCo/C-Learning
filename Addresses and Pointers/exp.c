#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define COUNT 5

void print_emp(int* salary);
void add_salary(int* salary, int increasement);
int32_t final_salary(int salary);
uint32_t* find_highesrt_salary(const int* salary);

void demo_exp()
{
	int salary[] = { 5000, 4500, 3000, 6500, 4000 };

	int increasement = 10000;

	puts("先前的工资");
	print_emp(salary);

	add_salary(salary, increasement);

	puts("之后的工资");
	print_emp(salary);


	uint32_t* highest = find_highesrt_salary(salary);

	printf("年终奖%d \n", final_salary(*highest));
	printf("最高薪资者%d ", *highest);

	return 0;
}
void print_emp(int* salary) {
	for (size_t i = 0; i < COUNT; ++i) {
		printf("%d ", salary[i]);
	}
	printf("\n");
}
void add_salary(int* salary, int increasement) {
	for (size_t i = 0; i < COUNT; ++i) {
		salary[i] += increasement;  // salary[i] = *(salary + i)
									// salary[i] = salary[i] + increasement; 
	}
}
int32_t final_salary(int salary) {
	return salary / 10;
	
}
uint32_t* find_highesrt_salary(const int* salary) {
	const int* highest = salary;
	for (size_t i = 1; i < COUNT; i++) {
		if (*highest < salary[i]) {
			highest = &salary[i];
		}
	}
	return (uint32_t*)highest;
}