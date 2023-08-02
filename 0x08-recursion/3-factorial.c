#include "main.h"
/**
 * factorial - calculate factorial of the number
 * @n: the input number
 * Return: the factoral of @n
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
