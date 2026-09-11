#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "compare.h"
#include "person.h"

int int_compare(const void* a, const void* b, void* contest) {
	(void)contest; 
	int num1 = *(const int*)a;
	int num2 = *(const int*)b;

	return num1 - num2;
}

int string_compare(const void* a, const void* b, void* contest) {
	(void)contest;
	const char* str1 = *(const char**)a;
	const char* str2 = *(const char**)b;

	return strncmp(str1, str2, SIZE_MAX);
 
}

int compare_person_by_age(const void* a, const void* b, void* contest) {
	(void)contest;
	const Person* person1 = (const Person*)a;
	const Person* person2 = (const Person*)b;

	return person1->age - person2->age;
}

int compare_person_by_name(const void* a, const void* b, void* contest) {
	(void)contest;
	const Person* person1 = (const Person*)a;
	const Person* person2 = (const Person*)b;

	return strncmp(person1->name, person2->name, SIZE_MAX);
}
