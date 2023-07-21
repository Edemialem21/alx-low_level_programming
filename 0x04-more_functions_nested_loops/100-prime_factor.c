#include <stdio.h>
/**
 * main - print the largest prime faactor of the given number
 *
 * Return: always 0
 */
int main(void)
{
	long int i;
	long int num = 612852475143;

	while (i < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}
		for (i = 3; i < (num / 2); i += 2)
		{
			if ((num % i) == 0)
				num /= i;
		}
	}
	printf("%ld\n", num);
	return (0);
}
