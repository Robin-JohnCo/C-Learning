#include <stdio.h>
#include <string.h>

void demo_strncpy()
{
	char dest3[20] = { 0 };
	const char* src = { "Hello, World\n" };

	size_t max_copy = 10;

	errno_t result = strncpy_s(dest3, sizeof(dest3), src, max_copy);

	if (result == 0)
	{
		printf("%s\n", dest3);
	}
	else {
		printf("Err");
	
	}

	return 0;
}