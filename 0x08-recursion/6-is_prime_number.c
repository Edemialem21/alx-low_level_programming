#include "main.h"
/**
 * is_prime - prime or not
 * @n: input number
 * @i: multiplier
 * Return: always 0 fro success
 */
int is_prime(int n, int i)
{
	if (i == n - 1)
		return (1);
	else if (n % i == 0)
		return (0);
	if (n % i != 0)
		return (is_prime(n, i + 1));
	return (0);
}
/**
 * is_prime_number - input integer is_prime
 * @n: input number
 * Return: always 1 if inpuut prime else 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime(n, i));
}
