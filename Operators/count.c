#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void demo_count()
{
	uint32_t apple = 10;
	uint32_t orange = 5;

	uint32_t totalfruits = apple + orange;
	uint32_t remainingApple = apple - 2;
	uint32_t applebox = apple * 10;
	uint32_t remainingfruits = (apple + orange) % 4;
	uint32_t FruitPerFriend = apple / 2;

	printf("Total : %" PRIu32 "\n", totalfruits);
	printf("RemainingApple : %" PRIu32 "\n", remainingApple);
	printf("Applebox : %" PRIu32 "\n", applebox);
	printf("Remainingfruits : %" PRIu32 "\n", remainingfruits);
	printf("FruitPerFriend : %" PRIu32 "\n", FruitPerFriend);

	return 0;
}