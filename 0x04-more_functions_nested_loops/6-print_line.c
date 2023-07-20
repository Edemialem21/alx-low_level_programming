#include "main.h"

/**
 * print_line - print the line
 *
 * @n: the number of lines inputed
 * Return: no return
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

