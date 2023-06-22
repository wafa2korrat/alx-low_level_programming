#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed.
 *
 */
void print_diagonal(int n)
{
	int spc, rows;

	rows = n;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (; n > 0; n--)
		{
			_putchar(92);
			_putchar('\n');
			if (n > 1)
			{
				for (spc = (n - 1); spc < rows; spc++)
					_putchar(32);
			}
		}
	}
}
