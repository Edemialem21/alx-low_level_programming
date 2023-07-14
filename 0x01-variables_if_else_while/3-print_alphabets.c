#include <stdlib.h>
#include <stdio.h>

/**
 * main - print lower alphabel letters
 *
 * Return: return 0 success
 */

int main(void)
{
	int n = 97;
	int i = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}

	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
