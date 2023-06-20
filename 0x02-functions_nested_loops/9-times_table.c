#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int row;
	int num;
	int rez;

	for (row = 0; row < 10; row++)
	{
		for (num = 0; num <= 9; num++)
		{
			rez = num * row;
			_putchar((rez / 10) + 48);
			_putchar((rez % 10) + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
