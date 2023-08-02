#include "main.h"
/**
 * _puts_recursion - prints string followed by new line
 * @s: the sreing to be printed
 * Return: always success
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
