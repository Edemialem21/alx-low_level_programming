#include "main.h"
/**
 * *_strncpy - a function that copy  two string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of caracter to be concatenated
 * Return: always return success 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (n > j && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (n > j)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
