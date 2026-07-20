#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void demo_increment()
{
	uint8_t value = 5;
	//uint8_t result = value + 1;

	uint8_t result = value++;
	printf("After Postfix increment, result = %" PRIu8 ", value = %" PRIu8 "\n", result,value);

	value = 5;
	result = ++value;

	printf("After Postfix increment, result = %" PRIu8 ", value = %" PRIu8 "\n",result,value);

	value = 5;
	result = value--; // result = value - 1;

	printf("After Posifix increment, result = %" PRIu8 ", value = %" PRIu8 "\n", result,value);

	value = 5;
	result = --value;

	printf("After Posifix increment, result = %" PRIu8 ", value = %" PRIu8 "\n", result,value);



	return 0;
}