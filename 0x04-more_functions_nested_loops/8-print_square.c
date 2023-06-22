#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square
 *
 */
void print_square(int size)
{
	int length, width;

	width = size;
	length = size;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (; length > 0; length--)
		{
			width = size;
			for (; width > 0; width--)
				_putchar(35);
			_putchar('\n');
		}
	}
}
