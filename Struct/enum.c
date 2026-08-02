#include <stdio.h>

typedef enum {
	MON,
	TUE,
	WED,
	FOR,
	FRI,
	SAT,
	SUN
}Weekend;

void demo_enum()
{
	Weekend weekend = FRI;
	printf("%d\n",weekend );

	return 0;
}