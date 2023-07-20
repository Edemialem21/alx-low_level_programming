#include <stdio.h>
/**
 * main - print the largest prime faactor of the given number
 *
 * Return: always 0
 */
int main(void)
{
	long int factmax, i;
	long int num = 612852475143;

	for (i = 2; num > 1; i = i +2)
	{
		while (num % i == 0)
		{
			num /=i;
			factmax = i;
		}
		if (i == 2)
			i = 3;
	}
	printf("%ld'\n'", factmax);
	return (0);
}
