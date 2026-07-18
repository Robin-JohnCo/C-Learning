#include <stdio.h>
#include <stdint.h>

void demo_size_2(void) {

	int16_t myInt16_t = INT16_MAX;
	uint16_t myUInt16_t = UINT16_MAX;

	int32_t myInt32_t = INT32_MAX;
	uint32_t myUInt32_t = UINT32_MAX;

	int64_t myInt64_t = INT64_MAX;
	uint64_t myUInt64_t = UINT64_MAX;

	printf("Size of int16_t : %zu type(s)\n", sizeof(myInt16_t));

	printf("Size of uint16_t : %zu type(s)\n", sizeof(myUInt16_t));

	printf("Size of int32_t : %zu type(s)\n", sizeof(myInt32_t));

	printf("Size of uint32_t : %zu type(s)\n", sizeof(myUInt32_t));

	printf("Size of int64_t : %zu type(s)\n", sizeof(myInt64_t));

	printf("Size of uint64_t : %zu type(s)\n", sizeof(myUInt64_t));


}

