#include "main.h"

/**
 * _isdigit - checks for digit
 *
 * @c: the input parameter
 * Return: return 1 if c is digit else 00
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
