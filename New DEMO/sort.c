#include <stdlib.h>

#include "sort.h"

static int compare_wrapper(void* contest, const void* a, const void* b) {
	CompareFunc compare = (CompareFunc)contest;

	return compare(a, b, NULL);
}
void generic_sort(void* array, size_t length, size_t size, CompareFunc compare, void* context) {

#ifdef _WIN32
	qsort_s(array, length, size, compare_wrapper, (void*)compare);
#elif
	qsort_r(array, length, size, compare_wrapper, contest);
#endif
}