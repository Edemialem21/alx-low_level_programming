#include "main.h"
/**
 * is_palin - check if is 0 or 1
 * @s: input string
 * @i: length of a stirng
 * Return: integer 0 or 1
 */

int is_palin(char *s, int i)
{
	if (*s != *(s + i - 1))
		return (0);
	else if (*s == '\0')
		return (1);
	return (is_palin(s + 1, i - 2));
}

/**
 * _strlen_recursion - calculates the string length
 * @s: the string pointer to be length evaluated
 * Return: the length of the string
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

/**
 * is_palindrome - checks the string is a palindrome or not.
 * @s: input char
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);
	if (i <= 1)
		return (1);
	return (is_palin(s, i));
}
