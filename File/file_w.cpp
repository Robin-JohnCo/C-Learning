#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void clear_log(const char* filename);

void demo_file_3(void) {
	const char* filename = "C:\\Users\\the beatles\\Desktop\\log.txt";

	clear_log(filename);

	_fcloseall();

}
void clear_log(const char* filename) {
	FILE* file_ptr = NULL;

	errno_t err = fopen_s(&file_ptr, filename, "w");

	if (err != 0 || file_ptr == NULL) {
		char errno_msg[256];
		strerror_s(errno_msg, sizeof(errno_msg), errno);
		fprintf(stderr, "Failed to clear log : %s\n", errno_msg);
		exit(EXIT_FAILURE);
	}

	fclose(file_ptr);

}