#include <stdio.h>
#include <unistd.h>

/**
 * main - print the texts
 *
 * Return: Always 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	putchar('\n');
	return (1);
}
