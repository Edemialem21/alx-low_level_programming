#include <stdio.h>
/**
 * main - the entry function
 * @argc: the number of arguement
 * @argv: the vector containing the input parameter
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc && argv[i] != NULL)
		i++;
	printf("%d\n", --i);
	return (0);
}

