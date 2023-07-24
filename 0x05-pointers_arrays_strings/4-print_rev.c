#include "main.h"
/**
 * print_rev - print the reverse order of a string
 * @s: the given string
 * Return: return always success
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
