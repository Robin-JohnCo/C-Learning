#define _USE_MATH_DEFINES

#include <stdio.h>
#include <inttypes.h>
#include <math.h>
#include <errno.h>
#include <string.h>
#include <float.h>
#include <time.h>

int main() {

	time_t now = time(NULL);

	struct tm local_time;
	localtime_s(&local_time, &now);

	struct tm utc_time;
	localtime_s(&utc_time, &now);

	char localtime_str[80];
	char utctime_str[80];

	strftime(localtime_str, sizeof(localtime_str), "%Y-%m-%d %H:%M:%S", &local_time);
	strftime(utctime_str, sizeof(utctime_str), "%Y-%m-%d %H:%M:%S", &utc_time);

	printf("当前的时间戳是 %td\n", (intmax_t)now);
	printf("当下的时间是 : %s\n", localtime_str);
	printf("当下的UTC时间是 : %s\n", utctime_str);

	return 0;
}