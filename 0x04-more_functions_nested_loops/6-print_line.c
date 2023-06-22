#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed.
 *
 */
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar(95);
	_putchar('\n');
}
