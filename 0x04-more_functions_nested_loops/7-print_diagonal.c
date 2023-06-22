#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed.
 *
 */
void print_diagonal(int n)
{
	for (; n > 0; n--)
	{
		for (; n > 0; n--)
			_putchar(32);
		_putchar(92);
	}
	_putchar('\n');
}
