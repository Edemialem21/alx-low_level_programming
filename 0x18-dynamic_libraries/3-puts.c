#include "main.h"
/**
 * _puts -prints a string
 * @str: input string
 * Return: rteuurn always success
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
