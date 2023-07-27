#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: the first input string
 * @s2: the second string
 * Return: always return success 0
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	if (a < b)
		return (-15);
	else if (a > b)
		return (15);
	else
		return (0);
}
