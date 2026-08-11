#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TIME_STRING_SIZE 26

typedef struct {
	char name[50];
	int id;
}Player;

void uppdate_player_list(Player** players, int* currentsize, int newsize, Player newplayer);

void print_players(Player* player, int size);

void log_error(const char* message);

void log_info(const char* message);

void time_log_message(const char* level, const char* message);

void demo_exp()
{
	Player* players = NULL;
	int currentsize = 0;

	Player player1 = {"Robin", 1};

	uppdate_player_list(&players, &currentsize, currentsize + 1, player1);

	Player player2 = { "Link", 2 };

	uppdate_player_list(&players, &currentsize, currentsize + 1, player2);

	Player player3 = { "Sand", 3 };

	uppdate_player_list(&players, &currentsize, currentsize + 1, player3);

	print_players(players, currentsize);

	_fcloseall();

	return 0;
}
void uppdate_player_list(Player** players, int* currentsize, int newsize, Player newplayer) {
	Player* temp = realloc(*players, newsize * sizeof(Player));

	if (newsize < *currentsize) {
		log_error("Error : newsize smaller currentsizr\n");
	}

	if (newsize == *currentsize) {
		log_info("Error : newsize equal to currentsize. Newsize must be greater than currentszie to add a new player\n");
	}

	if (temp == NULL) {

		// 分配失败时，保持原列表不变， 避免数据丢失
		log_error("Error reallocing memory\n");

		// 考虑添加日志系统，记录运行日志和逻辑处理
	}
	else {
		*players = temp;
		if (*currentsize < newsize) {
			(*players)[*currentsize] = newplayer;
		}
		*currentsize = newsize;
	}
	log_info("Add player Success");
	char info_message[100];
	snprintf(info_message, sizeof(info_message), "Current Players count : %d\n", *currentsize);
	log_info(info_message);
}
void print_players(Player* player, int size) {
	printf("Current players list is \n");
	for (int i = 0; i < size; i++) {
		printf("ID : %d, Name : %s\n", player[i].id, player[i].name);
	}
}
void log_error(const char* message) {
	time_log_message("ERROR", message);
}

void log_info(const char* message) {
	time_log_message("INFO", message);
}
void time_log_message(const char* level, const char* message) {
	time_t now = time(NULL);
	char time_str[TIME_STRING_SIZE];

	if (ctime_s(time_str, sizeof(time_str), &now) == 0) {
		time_str[24] = '\0';

		FILE* file_ptr = NULL;
		errno_t err = fopen_s(&file_ptr, "C:\\Users\\the beatles\\Desktop\\log.txt", "a");

		if (err != 0 || file_ptr == NULL) {
			perror("Erroo opening file");
			return EXIT_FAILURE;
		}

		fprintf(file_ptr, "[%s] %s : %s", time_str, level, message);

		fclose(file_ptr);
	}
	else {
		printf("[ERROR], Failed to get time\n");
	}
}

