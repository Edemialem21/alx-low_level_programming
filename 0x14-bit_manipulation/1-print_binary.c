#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: a number to be represented in binary
 * Return: always 0
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int current = n;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if (current & mask)
			break;

		mask >>= 1;
	}

	if (mask == 0)
		_putchar('0');

	while (mask > 0)
	{
		if (current & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
