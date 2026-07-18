#include <stdio.h>
#include <stdint.h>


void demo_float_printf(void)
{

	float num = 315.44f;
	
	// %f  
	
	printf("Using %%f : %f\n", num);

	// %e 科学计数法

	printf("Using %%e : %e\n", num);
	printf("Using %%E : %E\n", num);

	// %a 十六进制浮点数表示法 P表示法

	printf("Using %%a : %A\n", num);
	printf("Using %%A : %A\n", num);

	return 0;

}
