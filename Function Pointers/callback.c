#include <stdio.h>

typedef void (*Callback)(int);

void traverse(int* array, int size, Callback callback);

void print_elements(int elements);

void print_double(int elements);

void print_odd_even(int elements);

// 回调函数 ： 是你传递给另一个函数的函数。 后者可以调用前者
// 这种机制可以在不同的时间点或者条件下， 根据需要执行特定的功能
// 回调函数让你的代码更加灵活， 复用性更强
void demo_callback()
{
	int number[4] = { 1, 2, 3, 4 };

	int size = sizeof(number) / sizeof(number[0]);

	traverse(number, size, print_elements);

	traverse(number, size, print_double);

	traverse(number, size, print_odd_even);

	return 0;
}

void traverse(int* array, int size, Callback callback) {
	for (int i = 0; i < size; i++) {
		// 只要是用到遍历的
		callback(array[i]);

		// print_elements
		// print_double
		// print_odd_even
	}
}
void print_elements(int elements) {
	printf("%d\n", elements);
}
void print_double(int elements) {
	printf("%d double is %d\n", elements, elements*2);
}
void print_odd_even(int elements) {
	if (elements % 2 == 0) {
		printf("%d is odd\n", elements);
	}
	else {
		printf("%d is even\n", elements);
	}
}