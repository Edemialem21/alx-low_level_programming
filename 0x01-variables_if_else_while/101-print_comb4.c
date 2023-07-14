#include <stdlib.h>
#include <stdio.h>

/**
 * main - print three  digits  with comma and space
 *
 * Return: return 0 success
 */

int main(void)
{
	int x = 48;
	int y;
	int z;

	while (x < 56)
	{
		y = x + 1;
		while (y < 57)
		{
			z = x + 2;
			while (z < 58)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (!((x == 55) && (y == 56) && (z == 57)))
				{
					putchar(44);
					putchar(32);
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
