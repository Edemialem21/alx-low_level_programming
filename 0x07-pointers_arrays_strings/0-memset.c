#include "main.h"
/**
 * _memset - fillls memory with constant bytes
 * @s: the variable pointer to be filled
 * @b: the memory filled with
 * @n: n numbers of bytes
 * Return: rteurn the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		*(s + i) = b;
		i++;
		n--;
	}
	return (s);
}
