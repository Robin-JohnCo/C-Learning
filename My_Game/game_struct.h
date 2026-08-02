#ifndef GAME_STRUCT_H
#define GAME_STRUCT_H

#include "game_abilities.h"
#include "game_type.h"

typedef struct {
	char name[50];
	CharacterClass characterClass;
	Abilities abilities;
	int32_t health;
	int32_t exp;
	int32_t level;
}Player;
typedef struct {
	EnemyType enemyType;
	Abilities abilities;
	int32_t health;
	int32_t exp;
	int32_t level;
}Enemy;
typedef struct {
	ItemType itemType;
	int32_t quantity;
	int32_t power;
}Item;
#endif 
