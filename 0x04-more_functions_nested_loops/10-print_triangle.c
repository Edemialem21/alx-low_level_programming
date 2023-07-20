#include "main.h"
/**
 * print_triangle - printing triiangle
 * @size: the siize of thetriangle
 * Return: it return 0
 */
void print_triangle(int size)
{
	int i, j, x;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
				_putchar(32);
			for (x = 1; x <= i; x++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
