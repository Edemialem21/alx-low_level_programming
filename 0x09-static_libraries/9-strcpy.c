#include "main.h"
/**
 * *_strcpy - pointer function that copy from src to dest
 * @dest: the destination buffer
 * @src: the string to be printed
 * Return: always success
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
