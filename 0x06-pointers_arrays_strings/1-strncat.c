#include "main.h"
/**
 * *_strncat - a function that concactenate two string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of caracter to be concatenated
 * Return: always return success 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (n)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}

