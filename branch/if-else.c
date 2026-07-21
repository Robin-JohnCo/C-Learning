#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void demo_if_else()
{
	double total_car;

	bool is_vip;

	double discount_rate = 0.00;

	// set

	is_vip = false;
	total_car = 70;

	// judge
	
	if (is_vip) {
		if (total_car >= 100) {
			discount_rate = 0.20;
		}
		else {
			discount_rate = 0.05;
		}
	}
	else {
		if (total_car >= 100) {
			discount_rate = 0.10;
		}
		else {
			discount_rate = 0.00;
		}
	
	}

	printf("Your Discount rate : %.2f%%\n", discount_rate * 100);
	return 0;
}