#include "main.h"

/**
 * create_file - the function that creat text file
 * @filename: a pointer to memorry
 * @text_content: the parameter that specifiy the number of letters to be write
 * Return: returns the letter for success
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
