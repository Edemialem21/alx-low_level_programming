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

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		b = s1[a] - s2[a];
		if (b < 0)
			return (-15);
		if (b > 0)
			return (15);
		a++;
	}
		return (0);
}
