#pragma once

#include <stddef.h>

typedef int (*CompareFunc)(const void* a, const void* b, void* context);

void generic_sort(void* array, size_t length, size_t size, CompareFunc compare, void* context);