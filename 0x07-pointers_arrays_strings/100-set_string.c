#include "main.h"
#include <stdio.h>
/**
 * set_string - set the value of a pointer to char
 * @s: the char pointer to pointer
 * @to: the char pointer
 * Return: no return with
 */
void set_string(char **s, char *to)
{
	*s = to;
}
