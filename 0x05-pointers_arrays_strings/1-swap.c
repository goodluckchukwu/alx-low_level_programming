#include "main.h"

/**
 * swap_int - takes two variable integers and swaps them
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*b = *a;
	*a = temp;
}
