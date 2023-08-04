#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry function
 * @argc: the number of arguement
 * @argv: the vector containing the input parameter
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}

