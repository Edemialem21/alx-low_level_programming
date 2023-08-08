#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free the two dimentional array
 * @grid: the allocated grid
 * @height: the height of the array
 * Return: always success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
