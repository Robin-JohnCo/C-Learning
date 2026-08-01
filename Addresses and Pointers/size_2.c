#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool find_target_number(int32_t* array, size_t size, int32_t target_number, size_t* index);

void demo_size_2()
{
	int number[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	int* start_ptr = number;

	int target_number = 30;
	//int* target_ptr = NULL;

	int size = sizeof(number) / sizeof(number[0]);

	//bool found = false;

	size_t index = 0;

	/*for (int i = 0; i < size; ++i) {
		if (*(start_ptr + i) == target_number) {
			target_ptr = start_ptr + i;
			index = i;
			found = true;
			break;
			
		}
	}
	*/
	bool found = find_target_number(number, size, target_number, &index);

	if (found) {
		printf("Find target number %d, index %zu\n", target_number, index);
	}
	else {
		puts("No Found!");
	}
	return 0;
}
bool find_target_number(const int32_t* array, size_t size, int32_t target_number, size_t* index) {
	for (int i = 0; i < size; ++i) {
		if (*(array + i) == target_number) {
			*index = i;
			return true;
		}
	}
	return false;
}