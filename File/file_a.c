#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void read_append_safe(const char* filename, const char* str);

void demo_file_a() {

	const char* filename = "C:\\Users\\the beatles\\Desktop\\log.txt";


	const char* str = "Drop Mr.rainbow";

	read_append_safe(filename, str);

	int numclosed = _fcloseall();
	printf("Number of files closed by fcloseall : %u\n", numclosed);

	return 0;
}
void read_append_safe(const char* filename, const char* str) {
	FILE* file_ptr = NULL;

	errno_t err = fopen_s(&file_ptr, filename, "a");

	if (err != 0 || file_ptr == NULL) {
		char buffer[256];
		strerror_s(buffer, sizeof(buffer), errno);
		fprintf(stderr, "Failed to config str for appending : %s\n", buffer);
		exit(EXIT_FAILURE);
	}
	puts("Successed appending");
	fprintf(file_ptr, "%s\n", str);
	fclose(file_ptr);
}