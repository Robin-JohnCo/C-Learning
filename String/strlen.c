#include <stdio.h>
#include <string.h>

void demo_strlen()
{
	const char* dest[50] = {0};

	strcpy_s(dest, sizeof(dest), "Hello,World");

	printf("Strlen : %zd\n", strlen(dest));

	return 0;
}