#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_string(char*** array, int* size, char* str);

void print_str(char** array, int size);

void demo_pointers()
{
	char** str_array = NULL;
	int size = 0;

	add_string(&str_array, &size, "Hello");
	add_string(&str_array, &size, ",");
	add_string(&str_array, &size, "World");

	print_str(str_array, size);

	return 0;
}
void add_string(char*** array, int* size, char* str) {
	char** temp = realloc(*array, (*size + 1) * sizeof(char*));

	if (temp == NULL) {
		printf("Error reallocing memory\n");
		return;
	}
	*array = temp;

	(*array)[*size] = (char*)malloc(strlen(str) + 1);
	if ((*array)[*size] != NULL) {
		strcpy_s((*array)[*size], strlen(str) + 1, str);
		(*size)++;
	}
	else {
		fprintf(stderr, "Failed Mallocing memory\n");
	}

}
void print_str(char** array, int size) {
	for (size_t i = 0; i < size; i++) {
		printf("%s", array[i]);
	}
}