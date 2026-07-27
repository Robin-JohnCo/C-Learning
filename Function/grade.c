#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>

#define GRADE_COUNT 11

char get_leve_grade(int grade);

void demo_grade()
{
	char grade = get_leve_grade(90);

	printf("%c\n", grade);


	return 0;
}
char get_leve_grade(int grade) {
	const char level[GRADE_COUNT] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'S'
	};
	int num = grade / 10;

	return level[num];
}