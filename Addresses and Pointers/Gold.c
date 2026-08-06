#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#define GOLD 10

const char* achievements[GOLD] = {"Suck!"};

size_t achievement_count = 0;

void add_new_achievement(const char* achievement);
void print_achievements();

void demo_gold()
{
	add_new_achievement("First Blood");
	add_new_achievement("Sharp Shooter");

	//printf("Achievements : %s\n", achievements[0]);

	print_achievements();

	return 0;
}
void add_new_achievement(const char* achievement) {
	if (achievement_count < GOLD) {
		achievements[achievement_count++] = achievement;
		printf("Add achievement %s\n", achievement);
	}
	else {
		printf("NO!");
	}
}
void print_achievements() {
	for (size_t i = 0; i < achievement_count; ++i) {
		printf("Achievement %zu: %s\n", i + 1, achievements[i]);
	}
}