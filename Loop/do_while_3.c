#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>


void demo_guess_number()
{
	uint8_t secret_num, guess = 0;

	// Create random number

	srand(time(NULL));
	secret_num  = rand() * 100 + 1;

	puts("Guess a number");

	do {
		scanf_s ("%" PRIu8, &guess);
		
		if (guess < secret_num) {
			puts("its too small");
		
		}
		else if (guess > secret_num) {
			puts("its too big");
		}
	
	
	} while (guess != secret_num);

	printf("You Are Right!");

	return 0;
}