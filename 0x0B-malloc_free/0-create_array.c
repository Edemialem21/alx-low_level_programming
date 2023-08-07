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
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ch = (char *)malloc(size * sizeof(c));
	if (ch == 0)
		return (NULL);
	while (i < size)
	{
		ch[i] = c;
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
