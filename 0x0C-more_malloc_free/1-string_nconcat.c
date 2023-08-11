#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - string concactination
 * @s1: string one
 * @s2: string two
 * @n: number of character
 * Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, x, tot;

	i = j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	if (n >= j)
		n = j;
	tot = n + i + 1;
	ptr = malloc(tot * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ptr[j] = s1[j];
	for (x = 0; j < tot - 1; j++)
	{
		ptr[j] = s2[x];
		x++;
	}
	ptr[j] = '\0';
	return (ptr);
}
