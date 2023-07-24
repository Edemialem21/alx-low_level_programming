#include "main.h"

/**
 * swap_int - swap the values
 * @a: the pointer
 * @b: the second pointer
 * Return: return always success
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
