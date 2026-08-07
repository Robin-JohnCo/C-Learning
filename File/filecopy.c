#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void demo_copy() {
	FILE* source_file;
	FILE* target_file;

	char source_path[] = "C:\\Users\\the beatles\\Desktop\\Hello.txt";
	
	char target_path[] = "C:\\Users\\the beatles\\Desktop\\log.txt";

	char buffer[1024];

	size_t byets_read;

	errno_t err = fopen_s(&source_file, source_path, "rb");

	if (err != 0 || source_file == NULL) {
		perror("无法打开源文件");
		return EXIT_FAILURE;
	}
	err = fopen_s(&target_file, target_path, "wb");
	if (err != 0 || target_file == NULL) {
		fclose(source_file);
		perror("无法打开目标文件");
		return EXIT_FAILURE;
	}
	while ((byets_read = fread(buffer, 1, sizeof(buffer), source_file)) > 0) {
		fwrite(buffer, 1, sizeof(buffer), target_file);	
	}

	_fcloseall();

	puts("文件复制完成");

	return 0;
}