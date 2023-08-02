#include "main.h"
/**
 * _sqr - square root of a number
 * @n: input number
 * @i: root
 * Return: always 0
 */
int _sqr(int n, int i)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_sqr(n, i + 1));
	else if  (i * i == n)
		return (i);
	return (-1);
}
/**
 * _sqrt_recursion - natural square root of number
 * @n: the input number
 * Return: the square root of a number
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (n < 0)
		return (-1);
	else
		return (_sqr(n, i));
}
