#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>

#define ROCK 1
#define CLOTH 2
#define SCISSORS 3

void print_clare();
uint32_t print_player_choice();
uint32_t print_computer_choice();
void print_choice(uint32_t choice);
void winner_choice(uint32_t player_choice, uint32_t computer_choice);

void demo_Game()
{

	srand(time(NULL));
	print_clare();

	uint32_t player_choice = print_player_choice();
	uint32_t computer_choice = print_computer_choice();

	puts("你选择了");
	print_choice(player_choice);
	puts("机器选择了");
	print_choice(computer_choice);

	winner_choice(player_choice, computer_choice);

	return 0;
}

void print_clare() {
	puts("石头剪刀布游戏现在开始 ： ");
	puts("石头是1，布是2， 剪刀是3 ：");
	puts("---------------------------");
}
uint32_t print_player_choice() {
	uint32_t choice;
	printf("请选择你要出什么： （1.石头 2.布 3.剪刀）\n");
	scanf_s("%" SCNu32, &choice);

	while (choice < ROCK || choice > SCISSORS) {
		printf("无效选择请重新输入：");
		scanf_s("%" SCNu32, &choice);
		break;
	}
	return choice;
}
uint32_t print_computer_choice() {
	return (rand() % (SCISSORS - ROCK + 1)) + ROCK;
}
void print_choice(uint32_t choice) {
	switch (choice) {
	case ROCK:puts("石头");break;
	case CLOTH:puts("布");break;
	case SCISSORS:puts("剪刀");break;
	default:break;
	}

}
void winner_choice(uint32_t player_choice, uint32_t computer_choice) {
	/*if (player_choice == computer_choice) {
		puts("平局");
	}
	else if ((player_choice == ROCK && computer_choice == CLOTH) || (player_choice == CLOTH && computer_choice == ROCK) || (player_choice == SCISSORS && computer_choice == CLOTH)) {
		puts("赢了");
	}
	else {
		puts("输了");
	}
	*/
	if (player_choice == computer_choice) {
		puts("平局");
		return;
	}
	uint32_t winner_choice[4] = { 0, SCISSORS, ROCK, CLOTH };
	if (computer_choice  == winner_choice[player_choice]) {
		puts("你赢了");
	}
	else {
		puts("你输了");
	}
}