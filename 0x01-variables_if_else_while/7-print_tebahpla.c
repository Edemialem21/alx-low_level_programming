#include <stdlib.h>
#include <stdio.h>

/**
 * main - print lower alphabel letters
 *
 * Return: return 0 success
 */

int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
