#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - functions that summ all the given parameters
 * @n: the number of count of arduments
 * Return: the sum of the numbers for success else 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, num, sum = 0;

	if (!n)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
