#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>
#define STUDENT_GRADE 5

void demo_grade()
{
	int32_t grades[STUDENT_GRADE] = { 89, 68, 89, 76, 98 };

	int32_t sum = 0;

	int32_t max_grade = grades[0];

	int32_t min_grade = grades[0];

	for (int32_t index = 0; index < STUDENT_GRADE; index++) {
		printf("student : %" PRId32 ", grade : %" PRId32 "\n", index + 1, grades[index]);

		sum += grades[index];
		
		if (grades[index] > grades[0]) {
			max_grade = grades[index];
		}
		if (grades[index] < grades[0]) {
			min_grade = grades[index];
		}
	}
	double revarge = sum / STUDENT_GRADE;
	printf("Sum : %d\n", sum);
	printf("Reverge : %.2lf\n", revarge);
	printf("Max_grade : %d\n", max_grade);
	printf("Min_grade : %d\n", min_grade);

	return 0;
}