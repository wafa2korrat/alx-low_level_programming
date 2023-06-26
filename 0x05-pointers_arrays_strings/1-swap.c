#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 */
void swap_int(int *a, int *b)
{
	int value_of_a;

	value_of_a = *a;
	*a = *b;
	*b = value_of_a;
}
