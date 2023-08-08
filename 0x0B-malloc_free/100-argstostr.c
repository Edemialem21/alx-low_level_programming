#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates the arguments of a program
 * @ac: number of arguments inputed
 * @av: the argument vector
 * Return: pointer to the concatenated string for success else NULL
 */
char *argstostr(int ac, char **av)
{
	char *ar;
	int i;
	int j;
	int k = 0;
	int n;
	int m;
	int num = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			num++;
		num++;
	}
	num++;
	ar = malloc(sizeof(char) * num);
	if (ar == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			ar[k] = av[n][m];
			k++;
		}
		ar[k] = '\n';
		k++;
	}
	ar[k] = '\0';
	return (ar);
}
