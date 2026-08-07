#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

typedef struct GameSettings{
	int volum;
	float zuobiaox;
	float zuobiaoy;
	int diffculty;
} GameSettings;

void save_game_settings(const GameSettings* settings, const char* filename);
void load_game_settings(GameSettings* settings, const char* filename);

void demo_wb_rb()
{
	GameSettings settings = { 50, 45.22, 56.23, 2 };

	//save_game_settings(&settings, "C:\\Users\\the beatles\\Desktop\\log.bin");

	GameSettings load_settings;

	load_game_settings(&settings, "C:\\Users\\the beatles\\Desktop\\log.bin");
	printf("Load successfully\n");
	printf("Volum : %d\nzuobiao : %f x %f\ndiffculty : %d\n", settings.volum, settings.zuobiaox, settings.zuobiaoy, settings.diffculty);

	return 0;
}
void save_game_settings(const GameSettings* settings, const char* filename) {
	FILE* file_ptr = NULL;
	errno_t err = fopen_s(&file_ptr, filename, "wb");

	if (err != 0 || file_ptr == NULL) {
		char error_msg[256];

		strerror_s(error_msg, sizeof(error_msg), errno);
		fprintf(stderr, "Failed to congig the file to reading : %s\n", error_msg);

		exit(EXIT_FAILURE);
	}
	fwrite(settings, sizeof(settings), 1, file_ptr);
}
void load_game_settings(GameSettings* settings, const char* filename) {
	FILE* file_ptr = NULL;
	errno_t err = fopen_s(&file_ptr, filename, "rb");

	if (err != 0 || file_ptr == NULL) {
		char error_msg[256];

		strerror_s(error_msg, sizeof(error_msg), errno);
		fprintf(stderr, "Failed to congig the file to reading : %s\n", error_msg);

		exit(EXIT_FAILURE);
	}
	fread(settings, sizeof(settings), 1, file_ptr);
}
