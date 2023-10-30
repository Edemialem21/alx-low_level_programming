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
	char *buffer = malloc((letters + 1) * sizeof(char));

	if (filename == NULL)
		return (0);
	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (0);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	ssize_t read_bytes = fread(buffer, sizeof(char), letters, file);

	if (read_bytes <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	ssize_t write_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);

	if (write_bytes <= 0 || (size_t)write_bytes < read_bytes)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (read_bytes);
}
