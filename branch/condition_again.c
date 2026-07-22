#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void demo_condition()
{
	uint32_t  score = 90;

	char level;

	level = (score >= 90) ? 'A' :
		(score >= 80) ? 'B' :
		(score >= 70) ? 'C' : 'D';

	printf("Score = %u Level = %c\n", score,level);




	return 0;
}

