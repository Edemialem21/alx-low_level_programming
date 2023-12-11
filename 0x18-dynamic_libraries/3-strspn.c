#include "main.h"
/**
 * _strspn - function gets the length of bytes in s
 * @s: the iniitil segment
 * @accept: points to the domain of caracter to be find
 * Return: pointers of the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}
	return (i);
}
