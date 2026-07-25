#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>
#include <ctype.h>
#define LETTER_FRUQUENCY 26

void demo_frequency()
{

	uint32_t frequency[LETTER_FRUQUENCY] = { 0 };
	char text[] = "Expect Text For Frequency Letter";

	for (uint32_t i = 0; text[i] != '\0'; i++) {
		char cn = tolower(text[i]);
		frequency[cn - 'a']++;
	}
	for (uint32_t i = 0; i < LETTER_FRUQUENCY; i++) {
		if (frequency[i] > 0) {
			printf("%c : %d\n", 'a' + i, frequency[i]);

		}
	}

	return 0;
}