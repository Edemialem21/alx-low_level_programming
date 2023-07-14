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
	int y = 48;
	int i = 48;
	int j = 49;

	while (x < 58)
	{
		while (y < 57)
		{
			while (i < 58)
			{
				while (j < 58)
				{
					putchar(x);
					putchar(y);
					putchar(32);
					putchar(i);
					putchar(j);
					if (!((x == 57) && (y == 56) && (j == 57) && (i == 57)))
					{
						putchar(44);
						putchar(32);
					}
					j++;
				}
				i++;
				j = 48;
			}
			y++;
			i = x;
			j = y + 1;
		}
		x++;
		j = 48;
		i = x;
	}
	putchar('\n');
	return (0);
}
