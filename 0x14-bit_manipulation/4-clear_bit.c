include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: the given number
 * @index: given index
 * Return: value of a bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
