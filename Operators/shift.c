#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void demo_shift()
{

	uint8_t num = 22;

	uint8_t Left_num = num << 2;
	
	printf("Original num : %" PRIu8 "(binary : 00010110)\n", num);
	printf("Left shifted by 2 : %" PRIu8 "(binary : 00101100)\n", Left_num);

	uint8_t Right_num = num >> 2;

	printf("Original num : %" PRIu8 "(binary : 00010110)\n", num);
	printf("Right shifted by 2 : %" PRIu8 "(binary : 00000101)\n", Right_num);

	uint32_t num2 = 25;
	//uint32_t resut = num2 * 1024;
	
	uint32_t result = num2 << 10;

	printf("Original num : %" PRIu32 "\n", num2);
	printf("Result num : %" PRIu32 "\n", result);
	
	return 0;
}