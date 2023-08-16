#ifndef _function_pointers_H_
#define _function_pointers_H_
#include<stdlib.h>
#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
