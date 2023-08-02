#include "main.h"
/**
 * _strlen_recursion - calculates the string length
 * @s: the string pointer to be length evaluated
 * @Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (!*s)
		return (0);
	i++;
	s++;
	return (i + _strlen_recursion(s));
}
