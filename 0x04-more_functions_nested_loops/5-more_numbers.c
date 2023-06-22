#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 */
void more_numbers(void)
{
	int i;
	int ones, tens;
	int rows;

	for (rows = 1; rows <= 10; rows++)
	{
		for (i = 0; i <= 14; i++)
		{
			ones = i % 10;
			tens = i / 10;

			if (i > 9)
				_putchar(tens + 48);
			_putchar(ones + 48);
		}
	}
		_putchar('\n');
}
