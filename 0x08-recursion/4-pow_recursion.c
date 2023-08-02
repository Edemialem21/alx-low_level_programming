#include "main.h"
/**
 * _pow_recursion - calculates the power of an integer
 * @x: the integer which is the base
 * @y: the power number
 * Return: @x the power of @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
