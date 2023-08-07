#include <stddef.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - contains a copy of a string in the given paraeter
 * @str: the given string to be copied
 * Return: a pointer of the array created
 */
char *_strdup(char *str)
{
	char *ch;

	if (str == NULL)
		return (NULL);
	ch = malloc(strlen(str) + 1);
	if (ch == NULL)
		return NULL;
	strcpy(ch, str);
	return (ch);
}
