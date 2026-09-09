#include <stdio.h>
#include <stdlib.h>

#define GOLD 10

const char* get_gold[GOLD] = {"Gold!!"};

size_t achievement_coun = 0;

void print_gola();
void add_new_chievement(const char* achievement);

int main()
{
	add_new_chievement("First Achievement");
	add_new_chievement("Second Achievement");

	print_gola();
	return 0;
}
void print_gola() {
	for (size_t i = 0; i < achievement_coun; i++) {
		printf("Achievement %zu: %s\n", i + 1, get_gold[i]);
	}
}
void add_new_chievement(const char* achievement) {
	if (achievement_coun < GOLD) {
		get_gold[achievement_coun++] = achievement;
		printf("Add achievement %s\n", achievement);
	}
}