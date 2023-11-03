#include "main.h"

/**
 * append_text_to_file - the function that append the file
 * @filename: a pointer to memorry
 * @text_content: the parameter that specifiy the number of letters to be read
 * Return: returns the letter for success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);

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
