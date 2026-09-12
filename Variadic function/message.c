#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <time.h>


typedef enum {
	LOG_INFO,
	LOG_WARNING,
	LOG_ERROR
} LOG_LEVEL;
void log_message(LOG_LEVEL level, const char* format, ...);
const char* get_current_time();

int demo_message() {

	log_message(LOG_INFO, "This message is a info with a number %d", 45);
	log_message(LOG_WARNING, "This message is a WARNING with a str %s", "Robin");
	log_message(LOG_ERROR, "This message is a ERROR related to a file %s", "Example.exe");

	return EXIT_SUCCESS;
}
const char* get_current_time() {
	static char buffer[20];
	time_t now = time(NULL);
	struct tm tm_info;
	localtime_s(&tm_info, &now);
	strftime(buffer, 20, "%Y-%m-%d %H-%M-%S", &tm_info);
	return buffer;
}
void log_message(LOG_LEVEL level, const char* format, ...) {
	const char* level_str;

	switch (level) {
	case LOG_INFO:level_str = "INFO"; break;
	case LOG_WARNING:level_str = "WARNING"; break;
	case LOG_ERROR:level_str = "ERROR"; break;
	default:level_str = "UNKNOWN"; break;
	
	}
	printf("[%s] [%s]", get_current_time(), level_str);

	va_list args;
	va_start(args, format);
	vprintf(format,args);
	va_end(args);

	printf("\n");
}