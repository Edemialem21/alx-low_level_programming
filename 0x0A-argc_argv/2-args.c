#include <stdio.h>
/**
 * main - the entry function
 * @argc: the number of arguement
 * @argv: the vector containing the input parameter
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
