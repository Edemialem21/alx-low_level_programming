#include "main.h"
/**
 * rev_string - print the reverse order of a string
 * @s: the given string
 * Return: return always success
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int z = 0;
	char tem;

	while (s[i] != '\0')
		i++;
	z = i;
	i--;
	while (j < z / 2)
	{
		tem = s[j];
		s[j] = s[i];
		s[i] = tem;
		i--;
		j++;
	}
}
