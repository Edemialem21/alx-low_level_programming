#include "main.h"

/**
 * _islower - checking lower case or not
 *
 * @c: the parameter
 *
 * Return: 1 if c is lowercase or 0 if not
 */
int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	return (0);
}
