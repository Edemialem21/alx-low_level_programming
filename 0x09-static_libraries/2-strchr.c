#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate a character in string
 * @s: the string to be scanned
 * @c: the character to be located
 * Return: pointer of a string where in c located
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}

