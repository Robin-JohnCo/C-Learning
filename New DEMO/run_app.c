#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "compare.h"
#include "person.h"
#include "sort.h"

int main() {

	int int_arr[] = { 12, 20, 30, 456, 602 };

	const char* str_arr[] = {"ABB", "Robin", "Baaa", "GO", "JOhhy"};

	generic_sort(int_arr, 5, sizeof(int), int_compare, NULL);

	generic_sort(str_arr, 5, sizeof(char*), string_compare, NULL);

	puts("int_arr[] : ");
	for (size_t i = 0; i < 5; i++) {
		printf("%d ", int_arr[i]);
	}
	puts("\nstr_arr[] : ");
	for (size_t i = 0; i < 5; i++) {
		printf("%s ", str_arr[i]);
	}
	puts("\nPerson[] : ");
	Person person_arr[] = { {"Robin", 19},
		{"Madana", 65},
		{"Stone", 95},
		{"Rita", 45},
		{"Paul", 23}

	};

	int person_arr_size = sizeof(person_arr) / sizeof(person_arr[0]);	

	CompareFunc person_choice[] = {compare_person_by_name, compare_person_by_age};

	int  choice = 1;

	generic_sort(person_arr, person_arr_size, sizeof(Person), person_choice[choice], NULL);

	for (size_t i = 0; i < person_arr_size; i++) {
		printf("%s, %d\n", person_arr[i].name, person_arr[i].age);

	}

	return EXIT_SUCCESS;
}