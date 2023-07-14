#include <stdlib.h>
#include <stdio.h>

/**
 * main - print two decimals with comma and space
 *
 * Return: return 0 success
 */

int main(void)
{
	int x = 48;
	int y = 49;

	while (x < 57)
	{
		y = x + 1;
		while (y < 58)
		{
			putchar(x);
			putchar(y);
			if (!((x == 56) && (y == 57)))
			{
				putchar(44);
				putchar(32);
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
