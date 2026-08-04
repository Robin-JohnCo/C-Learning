#include <stdio.h>
#include <string.h>

void demo_strcmp()
{
	const char* str1 = "Hello, World";
	const char* str2 = "Hello, World";
	const char* str3 = "Hello, Goodbay";

	size_t max_cmp = 7;

	if (strcmp(str1, str2) == 0) {
		printf("Str1 and Str2 equal\n");
	}
	else {
		printf("Str1 and Str2 not equal\n");
	}
	if (strcmp(str1, str3) == 0) {
		printf("Str1 and Str3 equal\n");
	}
	else {
		printf("Str1 and Str3 not equal\n");
	}
	if (strncmp(str1, str3, max_cmp) == 0) {
		printf("Str1 and Str3 equal\n");
	}
	else {
		printf("Str1 and Str3 not equal\n");
	}


	return 0;
}