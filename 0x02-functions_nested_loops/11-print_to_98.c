#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the input natural number as an input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
