#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void demo_f()
{
	FILE* file_stream = NULL;

	errno_t err = fopen_s(&file_stream, "C:\\Users\\the beatles\\Desktop\\Hello.txt", "r+");

	if (err != 0 || file_stream ==NULL) {
		perror("Error opening file");
		return EXIT_FAILURE;
	}
	// 获取当前文件位置fteel
	long position = ftell(file_stream);
	printf("当前的位置是 %ld\n", position);
	// 开始读取
	char buffer[256];

	if ((fgets(buffer, sizeof(buffer), file_stream)) != NULL) {
		printf("从当前读取 %s\n", buffer);
		position = ftell(file_stream);   // 使用ftell获取指针的位置
		printf("读取后的位置 %ld\n", position);
	}
	fseek(file_stream, 0, SEEK_SET);	// 使用fseek回到开始
	printf("用fseek后读取的位置 %ld\n", ftell(file_stream));

	rewind(file_stream);				// 使用rewind回到开始，清除缓冲区
	printf("使用rewind后读取的位置 %ld\n", ftell(file_stream));

	fclose(file_stream);
	return 0;
}