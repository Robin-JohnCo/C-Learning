#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void demo_fopen()
{
	FILE* file_stream = NULL;

	char buffer[256];

	errno_t err = fopen_s(&file_stream, "C:\\Users\\the beatles\\Desktop\\Hello.txt", "r");
	// 判断错误的类型
	if (err != 0 || file_stream == NULL) {
		perror("Error opening file");
		return EXIT_FAILURE;
	}
	while (fgets(buffer, sizeof(buffer), file_stream) != NULL) {  // 循环读取文件的内容
		printf("%s", buffer);
	}

	printf("\n");

	memset(buffer, 0, sizeof(buffer));

	rewind(file_stream);

	int ch;

	while ((ch = fgetc(file_stream)) != EOF) {
		putchar(ch);
	}

	if (fclose(file_stream) != 0) {
		perror("Error closing file");
		return EXIT_FAILURE;
	}


	return 0;
}