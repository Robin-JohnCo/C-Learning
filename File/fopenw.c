#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void demo_fopenw()
{
	FILE* file_stream = NULL;

	errno_t err = fopen_s(&file_stream, "C:\\Users\\the beatles\\Desktop\\Hello.txt", "w");

	if (err != 0 || file_stream == NULL) {
		perror("Erroo opening file");
		return EXIT_FAILURE;
	}
	fputc('H', file_stream);
	fputc('i', file_stream);
	fputc('\n', file_stream);

	fputs("This is a example", file_stream);

	float pi = 2.00f;

	fprintf_s(file_stream, "%d, %s, %f", 10, "dudu", pi);

	fclose(file_stream);

	puts("Success!");

	return 0;
}