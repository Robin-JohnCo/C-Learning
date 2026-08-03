#include <stdio.h>
#include <string.h>

void demo_strcat()
{
	char dest1[50] = { 0 };
	strcpy_s(dest1, sizeof(dest1), "Hello");

	const char* src = {", World"};

	rsize_t size = sizeof(dest1);

	strcat_s(dest1, size, src);

	printf("%s", dest1);

	return 0;
}