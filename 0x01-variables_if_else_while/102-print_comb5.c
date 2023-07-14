#include <stdlib.h>
#include <stdio.h>

/**
 * main - print three  digits  with comma and space
 *
 * Return: return 0 success
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
		
			if (x == 98 && y == 99)
				continue;

			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
