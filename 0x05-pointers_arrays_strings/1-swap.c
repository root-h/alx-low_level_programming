#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: points to the first value
 * @b: points to the second value
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
