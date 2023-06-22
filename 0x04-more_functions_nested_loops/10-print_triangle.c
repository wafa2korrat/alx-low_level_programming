#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 */
void print_triangle(int size)
{
	int spc, hash;
	int n = size;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (; size > 0; size--)
		{
			for (spc = size - 1; spc > 0; spc--)
				_putchar(32);
			for (hash = size - 1; hash < n; hash++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
