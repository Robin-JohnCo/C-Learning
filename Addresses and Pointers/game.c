#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#define EXP 100
#define LEVEL 10
#define AWARD 10

void increase_level(int* exp, int amount);
bool check_levela_up(int32_t* player_exp, int32_t* player_level);
const char* get_tresure(int player_level);

void demo_game()
{
	int player_exp = 0;
	int player_level = 1;

	increase_level(&player_exp, 50);
	increase_level(&player_exp, 175);

	if (check_levela_up(&player_exp, &player_level)) {
		printf("%s\n", get_tresure(player_level));
	}
	else {
		printf("请继续获得经验");
	}

	return 0;
}
void increase_level(int* exp, int amount) {
	*exp += amount;
}
bool check_levela_up(int32_t* player_exp, int32_t* player_level) {
	while (*player_exp > EXP && *player_level < LEVEL) {
		*player_exp -= EXP;
		(*player_level)++;
		printf("你的等级升到了%d\n", *player_level);
		return true;
	}
	return false;
}
const char* get_tresure(int player_level) {
	static const char* treasures[AWARD] = {
		"你获得了一个小宝箱",
		"你获得了一个中宝箱",

	};
	if (player_level > 0 && (size_t)player_level < AWARD) {
		
		return treasures[(size_t)player_level - 1];
	}
	return "你没有获得任何宝箱";
}