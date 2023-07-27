#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse array
 * @a: the array to be reversed
 * @n: the array length
 * Return: return always 0 success
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	x = n - 1;
	while (i < n / 2)
	{
		j = a[i];
		a[i] = a[x];
		a[x] = j;
		i++;
		x--;
	}
}

