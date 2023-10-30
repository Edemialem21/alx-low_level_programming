#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - the function that read text file
 * @filename: a pointer to memorry
 * @letters: the parameter that specifiy the number of letters to be read
 * Return: returns the letter for success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t rc, wc;
	int fp;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}

	rc = read(fp, buffer, letters);
	if (rc < 0)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	buffer[rc] = '\0';
	close(fp);

	wc = write(STDOUT_FILENO, buffer, rc);
	free(buffer);

	if (wc < 0 || wc < rc)
		return (0);

	return (wc);
}
