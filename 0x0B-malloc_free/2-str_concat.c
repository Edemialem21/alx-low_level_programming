#include <stddef.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concactenates two string
 * @s1: the given string
 * @s2: the second string to be concactenate
 * Return: a pointer of the array created
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ch = malloc(strlen(s1) + strlen(s2) + 1);
	if (ch == NULL)
		return (NULL);
	ch = strcat(ch, s1);
	ch = strcat(ch, s2);
	return (ch);
}
