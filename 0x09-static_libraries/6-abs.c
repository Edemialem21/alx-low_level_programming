#include "main.h"

/**
 * _abs - absolute value function
 *
 * @a: the integer
 * Return: the absolute value of integer
 */
int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}
