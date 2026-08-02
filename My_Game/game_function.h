#ifndef GAME_FUNCTION_H
#define GAME_FUNCTION_H

#include "game_struct.h"

void get_player(Player* player, const char* name[50], CharacterClass characterclass);

Enemy generate_enmey(EnemyType enemytype, int32_t health);

void attack_enemy(Player* player, Enemy* enemy);

void print_player_info(const Player* player);

void print_enemy_info(const Enemy* enemy);





#endif // !GAME_FUNCTION_H
