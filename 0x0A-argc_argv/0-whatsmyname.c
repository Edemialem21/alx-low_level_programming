#include <stdio.h>
/**
 * main - the entry function
 * @argc: the number of arguement
 * @argv: the vector containing the input parameter
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
