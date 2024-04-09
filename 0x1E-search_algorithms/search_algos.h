#ifndef __MAIN_H__
#define __MAIN_H__
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
