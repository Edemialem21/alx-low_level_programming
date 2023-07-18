#include "main.h"
/**
 * print_last_digit - unction that prints the last digit of a number.
 *
 * @a: parameters used in
 * Return: Always 0 (Success)
 */
int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (a < 0)
		i = -1 * i;
	_putchar(i + '0');
	return (i);
}
