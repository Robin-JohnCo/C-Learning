#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void demo_logic_if()
{
	// set

	bool is_discount = true;
	bool is_special_event = false;

	if (is_discount|| is_special_event) {
		printf("GO!");
	}
	else {
		printf("No!");
	}

	return 0;



}