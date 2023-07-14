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
	int y, i, j;

	while (x < 58)
	{
		y = 48;
		while (y < 57)
		{
			i = x;
			while (i < 58)
			{
				j = y + 1;
				while (j < 58)
				{
					putchar(x);
					putchar(y);
					putchar(32);
					putchar(i);
					putchar(j);
					if (!((x == 57) && (y == 56) && (j == 57) && (i == 57)))
						putchar(44);
					j++;
				}
				i++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
