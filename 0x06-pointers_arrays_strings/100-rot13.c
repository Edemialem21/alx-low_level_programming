#include "main.h"
/**
 * rot13 - ror13 encoder
 * @s: given string
 * Return: return the string pointer which points to a string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char check[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cyberrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == check[j])
			{
				s[i] = cyberrot[j];
				break;
			}
		}
	}
	return (s);
}
