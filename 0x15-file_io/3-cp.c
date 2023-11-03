#include "main.h"
/**
 * print_error - the function that print error
 * @message: a pointer to memorry
 * Return: returns the letter for success
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}
/**
 * main - the function that print error
 * @argc: a pointer to memorry
 * @argv: a vector to the variable to
 * Return: returns the letter for success
 */
int main(int argc, char *argv[])
{
	char *file_from = argv[1], *file_to = argv[2];
	int fd_from = open(file_from, O_RDONLY);
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}
	if (fd_from == -1 || fd_to == -1)
	{
		print_error(fd_from == -1 ? "Can't read from file" : "Can't write to file");
		print_error(fd_from == -1 ? file_from : file_to);
		exit(fd_from == -1 ? 98 : 99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Can't write to file");
			print_error(file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		print_error("Can't read from file");
		print_error(file_from);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		print_error("Can't close fd");
		dprintf(STDERR_FILENO, "%d\n", fd_from);
		exit(100);
	}
	return (0);
}
