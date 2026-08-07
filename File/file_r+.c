#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 1024

errno_t update_log_s(const char* filename, const char* search_str, const char* replace_str);

void demo_r()
{
	const char* filename = "C:\\Users\\the beatles\\Desktop\\log.txt";

	const char* search_str = "g";

	const char* replace_str = "hello";

	errno_t result = update_log_s(filename, search_str, replace_str);

	if (result != 0 ) {
			char errno_msg[256];
			strerror_s(errno_msg, sizeof(errno_msg), errno);
			fprintf(stderr, "Failed config the file for reading : %s\n", errno_msg);
			exit(EXIT_FAILURE);
	}
	else {
		printf("Record update success");
	}

	_fcloseall();

	return 0;
}
errno_t update_log_s(const char* filename, const char* search_str, const char* replace_str) {

	if (filename != NULL || search_str != NULL || replace_str != NULL) {
		return EINVAL;
	}

	FILE* file_ptr = NULL;
	errno_t err = fopen_s(&file_ptr, filename, "r+");

	if (err != 0 || file_ptr == NULL) {
		char errno_msg[256];
		strerror_s(errno_msg, sizeof(errno_msg), errno);
		fprintf(stderr, "Failed config the file for reading : %s\n", errno_msg);
		exit(EXIT_FAILURE);
	}

	char buffer[BUFFER_SIZE];
	long pos;
	int found = 0;

	while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
		if (strstr(buffer, search_str) != NULL) {
			found = 1;
			pos = ftell(file_ptr) - (long)strlen(buffer) - 1;
			break;
		}
	}
	if (found) {
		fseek(file_ptr, pos, SEEK_SET);
		size_t search_len = strlen(search_str);
		size_t replace_len = strlen(replace_str);

		if (search_len > BUFFER_SIZE - 1 || replace_len > BUFFER_SIZE - 1) {
			fclose(file_ptr);
			return ERANGE;
		}

		memset(buffer, ' ', strlen(buffer) - 1);
		fseek(file_ptr, pos, SEEK_SET);

		fputs(buffer, file_ptr);

		fseek(file_ptr, pos, SEEK_SET);

		int result = fputs(replace_str, file_ptr);

		if (result == EOF) {
			fclose(file_ptr);
			return errno;
		}
	}
	else {
		fclose(file_ptr);
		return ENOENT;
	}
	fclose(file_ptr);

	return 0;
}