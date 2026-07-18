#include <stdio.h>
#include <stdint.h>

void demo_define(void)
{
	//单精度
	//双精度


	double temperature = 36.5f;

	float speed = 299792458.5e2f;

	float length = 12.34f, width = 53.23f, height =  46.36f;


	printf("temperature is : %lf\n", temperature);

	printf("speed is : %.2f\n", speed);

	printf("Dimensions (L x W x H) : %f x %f x %f\n", length,width,height);

	return 0;

	//丢失精度

}
