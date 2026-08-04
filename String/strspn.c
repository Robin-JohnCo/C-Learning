#include <stdio.h>
#include <string.h>

void demo_strspn()
{
	const char* str1 = "12345asdfghj67890";
	const char* str2 = "1234567890";
	const char* str3 = "asdfgn";

	size_t res = strspn(str1, str2);
	size_t len = strcspn(str1, str2);
	size_t len2 = strcspn(str1, str3);

	puts("str1 = 12345asdfghj67890");
	puts("str2 = 1234567890");
	puts("tr3 = asdfgn");

	printf("(strspn)len: %zu \n", res);
	printf("(strcspn)len : %zu \n", len);
	printf("(strcspn)len2 : %zu \n", len2);

	return 0;
}