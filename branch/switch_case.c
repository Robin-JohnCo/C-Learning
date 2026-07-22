#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void demo_switch_case()
{

	uint8_t  role = 1;
	uint8_t  completed = 5;

	bool is_manager_approved = true;
	bool allowed_access = false;

	switch (role) {
	
	case 1:
		allowed_access = true;
		break;
	case 2:
		if (completed > 5) {
			allowed_access = true;
		}
		break;
	case 3:
		if (completed > 10 && is_manager_approved) {
			allowed_access = true;
		}
		break;
	default: 
		allowed_access = false;
		break;
	}

	if (allowed_access) {
		puts("Access!");
	}
	else {
		puts("Reject!");
	}

	return 0;
}