#include <stdio.h>

typedef struct {
	char name[50];
	int age;
	float score;

}Student;

void print_stu(Student George);
void Update_Score(Student* George, int new_score);

void demo_Student()
{
	Student George = {"George Harrsion", 23, 78};

	puts("Before Score:");

	print_stu(George);

	Update_Score(&George, 60);

	puts("After Score:");

	print_stu(George);

	return 0;
}
void print_stu(Student George) {
	printf("Name : %s\n", George.name);
	printf("Age : %d\n", George.age);
	printf("Score : %.2f\n", George.score);
}
void Update_Score(Student* George, int new_score) {

	George->score = new_score;
	
}