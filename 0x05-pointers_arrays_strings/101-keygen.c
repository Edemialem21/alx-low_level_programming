#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - key generation
 *
 * Return: always success
 */
int main(void)
{
	int count, total, myrand;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);
	return (0);
}
