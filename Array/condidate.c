#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>
#define CONDIDATE_COUNT 5

void demo_condidate()
{
	uint32_t vote[CONDIDATE_COUNT] = { 0 };
	uint32_t total_vote = 0;
	uint32_t max_vote = vote[0];
	uint32_t winner = 0;

	vote[0] += 230;
	vote[1] += 100;
	vote[2] += 250;
	vote[3] += 65;
	vote[4] += 325;

	for (uint32_t i = 0; i < CONDIDATE_COUNT; i++) {
		printf("condidate%" PRIu32 " vote %" PRIu32 "\n", i + 1, vote[i]);
		total_vote += vote[i];
		if (vote[i] > vote[0]) {
			max_vote = vote[i];
			winner = i + 1;
		}
	}
	printf("Total vote : %u\n", total_vote);
	printf("Winner : %u vote : %u", winner, max_vote);

	return 0;
}