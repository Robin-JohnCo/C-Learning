#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void read_config_safe(const char* file_ptr);

void demo_file_2()
{
	const char* config_filename = "C:\\Users\\the beatles\\Desktop\\Hello.txt";

	read_config_safe(config_filename);


	return 0;
}
void read_config_safe(const char* filename) {
	FILE* file_ptr = NULL;

	errno_t err = fopen_s(&file_ptr, filename, "r");

	if (err != 0 || file_ptr == NULL) {
		char error_msg[256];

		strerror_s(error_msg, sizeof(error_msg), errno);
		fprintf(stderr, "Failed to congig the file to reading : %s\n", error_msg);

		exit(EXIT_FAILURE);
	}
	char buffer[256];
	while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
		printf("%s", buffer);
	}
}