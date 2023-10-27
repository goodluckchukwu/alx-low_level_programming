#include "main.h"

/**
 * prime_a - calculates if its a prime
 * @a: input
 * @b: divisor
 * return (0)
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
/**
 * is _prime_number - detect if it is a prime no
 * @n: the input number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}