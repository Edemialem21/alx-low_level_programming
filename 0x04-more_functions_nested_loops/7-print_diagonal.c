#include "main.h"
/**
 * print_diagonal - prining diiagonal
 *
 * @n: the size of the diagonal
 * Return: return 1 success
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i != j)
				_putchar(32);
			else
			{
				_putchar(92);
				_putchar('\n');
				break;
			}
		}
	}
}
