#include <stdio.h>
#include <string.h>

void demo_sprintf()
{
	char* dest2[50] = { 0 };
	int number = 10;
	double pi = 3.14159;

	int res = sprintf_s(dest2, sizeof(dest2), "Integer : %d, Float : %.2lf", number, pi);

	if (res > 0) {
		printf("%s\n", dest2);
	}
	else {
		printf("Err");
	}

	return 0;
}