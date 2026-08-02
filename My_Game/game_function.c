#include <stdio.h>
#include <string.h>
#include "game_function.h"
#include <errno.h>

void create_player(Player* player, const char* name, CharacterClass characterclass) {
	errno_t err;
	err = strncpy_s(player->name, sizeof(player->name), name, _TRUNCATE);

	if (err != 0) {
		printf("Err Name %d", err);
	}


	player->characterClass = characterclass;
	player->health = 100;
	player->level = 1;

	switch (characterclass) {
	case Warrior:
		player->abilities.strength = 10;
		break;
	case Mage:
		player->abilities.magicPower = 10.0f;
		break;
	case Archer:
		player->abilities.panci = 10;
		break;

	}
}
	void attack_enemy(Player * player, Enemy * enemy) {
		printf("%s encounter a %d %d ", player->name, enemy->enemyType, enemy->level);
		player->exp += 50;
		printf("Win, and you gain 50exp\n");
}
	void print_player_info(const Player* player) {
		printf("Player info %s\n", player->name);
		printf("Name : %s, Class: %d, Level : %d\n", player->name, player->characterClass, player->level);
	}
	void print_enemy_info(const Enemy* enemy) {
		printf("Enemy info %s\n", enemy->enemyType);
		printf("Exp : %d, Level : %d\n", enemy->exp, enemy->level);
	}



