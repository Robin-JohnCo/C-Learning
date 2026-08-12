#include <stdio.h>

int add(int a, int b);

int (*my_function_pointer)(int, int);

void demo_fun_pointer()
{

	my_function_pointer = add;

	int res = my_function_pointer(1, 2);

	printf("Res is : %d", res);

	return 0;
}
int add(int a, int b) {
	return a + b;
}