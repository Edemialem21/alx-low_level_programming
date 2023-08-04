#include "main.h"
/**
 * _strlen - returns the string length
 * @s: the input string
 * Return: return with success
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
