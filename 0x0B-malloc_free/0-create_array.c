#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - array of memoy and return a pointer
 * @size: the size of the array created
 * @c: the memory pointer
 * Return: a pointer of the array created
 */
char *create_array(unsigned int size, char c)
{
	char *ch;

	if (size == 0)
		return (NULL);
	ch = (char *)malloc(size * sizeof(c));
	if (ch == 0)
		return (NULL);
	while (*ch)
	{
		*ch = c;
		ch++;
	}
	*ch = '\0';
	return (ch);
}
