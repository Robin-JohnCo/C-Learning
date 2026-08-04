#include <stdio.h>
#include <string.h>

void demo_strstr()
{
	const char* str1 = "This is a example for test";
	const char* sub = "example";

	char* res = strstr(str1, sub);

	if (res != NULL) {
		printf("'%s' is in the \"%s\" , position in the %td\n", sub, str1, sub - str1 + 1);
	}
	else {
		printf("'%s' is not in the \"%s\" position in the %td\n", sub, str1, sub - str1 + 1);
	}
	return 0;
}