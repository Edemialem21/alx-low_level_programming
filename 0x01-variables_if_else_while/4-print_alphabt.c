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

	while (n < 123)
	{
		if ((n != 113) && (n != 101))
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
