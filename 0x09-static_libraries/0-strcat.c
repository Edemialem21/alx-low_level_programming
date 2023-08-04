#include "main.h"
/**
 * *_strcat - a function that concactenate two string
 * @dest: the destination string
 * @src: the source string
 * Return: always return success 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
