#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: the destination pointer
 * @src: the source where in the copy taken
 * @n: the number of byte to be copyed
 * Return: retuurn the pointer containing the resultant
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		*(dest + i) = *(src + i);
		i++;
		n--;
	}
	return (dest);
}

