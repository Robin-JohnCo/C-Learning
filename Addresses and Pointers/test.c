#include <stdio.h>

int main()
{
	int arr[] = { 10, 20, 30 };

	int* p = arr;

	printf("ARR [0] : %d\nARR [0] address : %p", *p, p + 1);

	for (int i = 0; i < 3; ++i) {
		printf("Adress Arr[i] : %p\n", p + i);
	}
	for (int i = 0; i < 3; ++i) {
		printf("Number Arr[i] : %d\n", *(p + i));
	}
	printf("寻找付子玉的家庭地址 %p\n", p);

	return 0;
}