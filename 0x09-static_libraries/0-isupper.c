#include "main.h"

/**
 * _isupper - checking for the letter is capital or not
 *
 * @c: input parameter
 * Return: return 1 if uppercase or 0 else
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
