#include "main.h"
/**
 * puts_half - it prints the second half part of the string
 * @str: the input parametr
 * Return: return always success
 */
void puts_half(char *str)
{
	int i = 0;
	int n;
	
	while (str[i] != '\0')
		i++;
	n = (i - 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n + 1]);
		n++;
	}
	_putchar('\n');
}

