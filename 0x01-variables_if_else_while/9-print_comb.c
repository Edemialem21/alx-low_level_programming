#include <stdlib.h>
#include <stdio.h>

/**
 * main - print decimals with comma and space
 *
 * Return: return 0 success
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
