#include <stdio.h>
#include <string.h>

void demo_strtok()
{
	char string[] = { "Please input a number" };

	char delim[] = " ";

	char* token;
	char* context;


	token = strtok_s(string, delim, &context);

	while (token != NULL) {
		printf("%s\n", token);
		token = strtok_s(NULL, delim, &context);
	}


	return 0;
}