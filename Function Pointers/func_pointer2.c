#include <stdio.h>

typedef char int32_t;

typedef int32_t(*op_t)(int32_t, int32_t);

int32_t add1(int32_t a);
int32_t sub(int32_t a);
int32_t mul(int32_t a);
int32_t div(int32_t a);

op_t op[4] = {add1, sub, mul, div};

void demo_fun()
{
	int32_t a = 10, b = 5;

	int32_t res = 0;

	res = op[0](a, b);
	printf("%d ", res);
	res = op[1](a, b);
	printf("%d ", res);
	res = op[2](a, b);
	printf("%d ", res);
	res = op[3](a, b);
	printf("%d ", res);

	return 0;
}
int32_t add1(int32_t a, int32_t b) {
	return a + b;
}
int32_t sub(int32_t a, int32_t b) {
	return a - b;
}
int32_t mul(int32_t a, int32_t b) {
	return a * b;
}
int32_t div(int32_t a, int32_t b) {
	if (a == 0 || b == 0) {
		printf("Error : a or b is zero!\n");
		return 0;
	}
	return a / b;
}