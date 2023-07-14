#include <stdlib.h>
#include <stdio.h>

/**
 * main - print lower alphabel letters
 *
 * Return: return 0 success
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
