#include <stdio.h>
#include <string.h>

void demo_strchr()
{
	const char* str1 = "Hello, wrWorwld";

	char to_find = 'w';

	char* ptr_char = strchr(str1, to_find);
	char* ptr_char_1 = strrchr(str1, to_find);

	if (ptr_char) {
		printf("Found target %c in %td\n", to_find, ptr_char - str1 + 1);
	}

	if (ptr_char_1) {
		printf("Found target %c in %td\n", to_find, ptr_char_1 - str1 + 1);
	}
	return 0;

}