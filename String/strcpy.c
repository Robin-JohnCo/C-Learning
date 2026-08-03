#include <stdio.h>
#include <string.h>

void demo_strcpy()
{
	const char* src[] = {0};
	strcpy_s(src, sizeof(src), "Hello");

	char* dest[50];

	errno_t err = strcpy_s(dest, sizeof(dest), src);
	
	if (err == 0) {
		printf("%s\n", dest);
	}
	else {
		printf("Err");
	}
}