#include "main.h"
/**
 * print_error - the function that print error
 * @file_des: a pointer to memorry
 * Return: returns the letter for success
 */
void print_error(int file_des)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
	exit(100);
}
/**
 * main - the function that print error
 * @argc: a pointer to memorry
 * @argv: a vector to the variable to
 * Return: returns the letter for success
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int file_from = open(argv[1], O_RDONLY), wc;
	int file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL || file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	while ((wc = read(file_from, buffer, 1024)) > 0)
	{
		if (wc != write(file_to, buffer, wc))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (wc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) < 0)
		print_error(file_from);
	if (close(file_to) < 0)
		print_error(file_to);
	return (0);
}
