#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - two dimentional array of int
 * @width: the given width of the array
 * @height: the height of the array
 * Return: dynamically allocated pointer of the array created
 */
int **alloc_grid(int width, int height)
{
	int **arry, i, j, x;

	if (width <= 0 || height <= 0)
		return (NULL);
	arry = malloc(sizeof(int *) * height);
	if (arry == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arry[i] = malloc(sizeof(int) * width);
		if (arry[i] == NULL)
		{
			while (i >= 0)
			{
				free(arry[i]);
				i--;
			}
			free(arry);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (x = 0; x < width; x++)
			arry[j][x] = 0;
	}
	return (arry);
}
