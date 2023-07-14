#include <stdlib.h>
#include <stdio.h>

/**
 * main - print hexa decimal 
 *
 * Return: return 0 success
 */

int main(void)
{
	int n = 48;
	int i = 97;

	while (n < 57)
	{
		putchar(n);
		n++;
	}

	while (i < 103)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
