#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return 1 and print + if n is greater than zero
 * and print 0 if n is zero
 * -1 and - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}else if (n == 0)
	{
		return (-1);
	}
}
