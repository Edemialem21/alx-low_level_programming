#include <stdlib.h>
#include "main.h"
/**
 * array_range - creats an arry of integers
 * @min: the input minimun integers
 * @max: the input maxiumum integers
 * Return: always 0
 */
int *array_range(int min, int max)
{
	unsigned int i, x;
	int *ptr;

	if (min > max)
		return (NULL);
	x = max - min + 1;
	ptr = malloc(x * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < x; i++, min++)
		ptr[i] = min;
	return (ptr);
}
