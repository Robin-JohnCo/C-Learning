#include <stdio.h>
#include <stdint.h>

void demo_status_machine()
{

	uint8_t light = 0;

	switch (light) {
	case 0: {
		puts("Red");
		light = 1;
	}
		break;
	case 1: {
		puts("Green");
		light = 2;
	}
		break;
	case 2: {
		puts("Yellow");
	}
		break;
	default : {
		puts("???");
	}
	}	return 0;
}