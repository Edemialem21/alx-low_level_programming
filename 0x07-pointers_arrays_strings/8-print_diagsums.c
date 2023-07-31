#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals
 * @a: the axa multidimentional square matrix
 * @size: the size of the matrix
 * Return: always 0 success
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1, s2;

	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				s1 += *((a + i * size) + j);
			if ((i + j) == (size - 1))
				s2 += *((a + i * size) + j);
		}
	}
	printf("%i, %i\n", s1, s2);
}
