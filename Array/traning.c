#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>
#include <Windows.h>
#include <locale.h>
#include <wchar.h>

#define boundsize 15


void demo_traning()
{
	SetConsoleOutputCP(56001);

	setlocale(LC_ALL, "");
	
	wchar_t board[boundsize][boundsize] ;
	int8_t x, y;

	wchar_t current_player = 0x25CF;

	//初始化棋盘

	for (uint8_t i = 0; i < boundsize; i++) {
		for (uint8_t j = 0; j < boundsize; j++) {
			board[i][j] = 0x00B7;
		}
	}

	wchar_t control = L'y';

	while (control == L'y' || control == L'Y') {
		system("cls"); // 清屏
		for (uint8_t i = 0; i < boundsize; i++) {
			for (uint8_t j = 0; j < boundsize; j++) {
				wprintf(L"%lc ", board[i][j]);
			}
			printf("\n");
		}
		while (1) {
			printf("玩家 %lc, 请输入坐标(0 - %d), 中间用空格隔开\n", current_player, boundsize - 1);
			if (scanf_s("%" SCNu8 " %" SCNu8, &x, &y) != 2) {
				while (getchar() != '\n');
				printf("输入无效");
				continue;
			}
			if (x < boundsize && y < boundsize && board[x][y] == 0x00B7) {
				board[x][y] = current_player;
				current_player = (current_player == 0x25CF) ? 0x25CB : 0x25CF;
				break;
			}
			else {
				printf("无效的输出");
				while (getchar() != "\n");
				
			}
		}
		system("cls");
		for (uint8_t i = 0; i < boundsize; i++) {
			for (uint8_t j = 0; j < boundsize; j++) {
				wprintf(L"%lc ", board[i][j]);
			}
			printf("\n");
		}
		printf("是否继续(y / n):\n");
		while (getchar() != '\n');
		wscanf_s(L" %lc", &control, 1);
	}
	printf("游戏结束了");
	return 0;
}