#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

void update(int* score, int point);
int32_t* compare(int* score1, int* score2);

void demo_update()
{
	int score = 50;

	int score2 = 100;

	update(&score, 50);

	uint32_t* highest = compare(&score, &score2);

	printf("Highest %d\n", *highest);

	return 0;
}
void update(int* score, int point) {
	*score += point;
	printf("Current Score : %d\n", *score);
}
int32_t* compare(int* score1, int* score2) {
	return (*score1 > *score2) ? score1 : score2;
}