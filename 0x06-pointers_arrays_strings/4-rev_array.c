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
	int j = 0;

	while (i <= n / 2)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
		i++;
		n--;
	}
}

