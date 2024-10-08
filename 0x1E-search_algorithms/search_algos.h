#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/*
 * File: search_algos.h
 * Desc: This header file contains all the prototypes required for
 * the 0x1E-search_algorithms project.
 *
 */

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
