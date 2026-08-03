#include <stdio.h>
#include <string.h>

void demo_strncat()
{
	char* butter[20] = { 0 };
	strcpy_s(butter, sizeof(butter), "Hello");

	const char* src = { ", World.World is mine" };

	size_t max_append = 7;

	int res = strncat_s(butter,sizeof(butter), src, max_append);

	if (res == 0) {
		printf("%s", butter);
	}
	else {
		printf("Err");
	}

	return 0;
}