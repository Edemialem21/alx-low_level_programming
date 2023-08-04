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
	int a, b, mul;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", mul);
	return (0);
}

