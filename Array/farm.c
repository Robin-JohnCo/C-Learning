#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define CLOS 10
#define EMPTY 0
#define PLANTED 1
#define MATURED 2

void plant_farm(int farm[][CLOS]);

void demo_farm()
{
	int farm[ROW][CLOS];
	srand((unsigned int)time(NULL));

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < CLOS; j++) {
			farm[i][j] = (rand() % 2 == 0) ? PLANTED : EMPTY;
		}
	}
	plant_farm(farm);
	Sleep(1000);
	for (int time = 0; time < 5; time++) {
		system("cls");
		for (int i = 0; i < ROW; i++) {
			for (int j = 0; j < CLOS; j++) {
				if (farm[i][j] == PLANTED) {
					if (rand() % 10 < 3) {
						farm[i][j] = MATURED;
					}
				}
			}
		}

	}
	plant_farm(farm);
	Sleep(1000);

	return 0;
}


void plant_farm(int farm[][CLOS]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < CLOS; j++) {
			switch (farm[i][j]) {
			case EMPTY: printf(". ");break;
			case PLANTED: printf("* ");break;
			case MATURED: printf("# ");break;
			
			
			}
		}
		printf("\n");
	}

}