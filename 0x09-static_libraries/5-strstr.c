#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: the string to be scanned
 * @needle: the required substring
 * Return: pointer having the substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *scann, *check;

	while (*haystack)
	{
		scann = haystack;
		check = needle;
		while (*haystack && *check && *haystack == *check)
		{
			haystack++;
			check++;
		}
		if (!*check)
			return (scann);
		haystack = scann + 1;
	}
	return (NULL);
}
