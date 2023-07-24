#include "main.h"
/**
 * puts2 - print the other string
 * @str: the input string
 * Return: always retrurn success
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
