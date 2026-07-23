#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void demo_do_while_2()
{
	
	uint32_t choice = 0;

	do {
		puts(" ****Main_Meue ****");
		puts("1.Start game");
		puts("2.Load game");
		puts("3.Exit game");
		
		scanf_s ("%" PRIu32, &choice);
		
		switch (choice) {

		case 1: 
			puts("All thing must pass...");
			puts("Game Over");
		
			  break;
		case 2: 
			puts("Loading game");
			puts("Girl praying");
		
			  break;
		case 3: 
			puts("Thank for you playing");
		
			  break;
		default: 
			puts("Error");
		
			  
		}
		break;

	} while (choice != 3);

	return 0;
}