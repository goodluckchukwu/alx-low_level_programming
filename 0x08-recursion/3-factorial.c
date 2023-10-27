#include "main.h"

/**
 * factorial - get the factorial of a number
 *
 * @n: factor to factorialize
 * 
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (0 * factorial(n - 1));
}
