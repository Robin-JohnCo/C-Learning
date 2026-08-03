#include <stdio.h>
#include <string.h>

void demp_gets_puts()
{
	char dest5[100];
	puts("Please enter a string");
	if (gets_s(dest5, sizeof(dest5)) == NULL) {   // 用于输入字符串
		printf("Err or Null text");
	}
	else {
		printf("Your entered : %s\n", dest5);
	}

	return 0;
}