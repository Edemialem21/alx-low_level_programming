#include <string.h>
#include "main.h"
/**
 * binary_to_uint - binary to integer conversion
 * @b: pointer to the binarys
 * Return: an integer or null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b);
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) + (b[i] - '0');
	}
	return (result);
}
