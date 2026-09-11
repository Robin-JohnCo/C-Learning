#include <stdio.h>
#include <stdlib.h>

int compare_value(const void* a, const void* b);
void generic_sort_1(void* array, size_t arr_count, size_t arr_size, int (*compare)(const void*, const void*));

/*int main(void) {

	int arr[] = {10, 20, -4, 899, 5};
	size_t arr_count = sizeof(arr) / sizeof(arr[0]);

	int num1 = 10;
	int num2 = 20;

	printf("%d\n", compare_value(&num1, &num2));

	generic_sort(arr, arr_count, sizeof(arr[0]), compare_value);

	for (size_t i = 0; i < arr_count; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}*/
int compare_value(const void* a, const void* b) {
	int arg1 = *(const int*)a;
	int arg2 = *(const int*)b;
	if (arg1 < arg2) return -1;
	if (arg1 > arg2) return 1;

	return 0;

}
void generic_sort_1(void* array, size_t arr_count, size_t arr_size, int (*compare)(const void*, const void*)) {
	qsort(array, arr_count, arr_size, compare);
}