#include <stdio.h>
#include "game_function.h"
#include "game_struct.h"

int main() {
	Player player;
	Enemy enemy;
	// Create a player
	create_player(&player, "Hero", Warrior);
	print_player_info(&player);
	return 0;
}