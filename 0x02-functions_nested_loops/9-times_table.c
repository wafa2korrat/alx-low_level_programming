#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int row;
	int num;
	int res;

	for (row = 0; row < 10; row++)
	{
		for (num = 0; num < 10; num++)
		{
			res = num * row;
			if (num == 0)
			_putchar(res + 48);
			else
				if (res <= 9)
				{
				_putchar(' ');
				_putchar(res + 48);
				}
				else
				{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
				}
			if (num != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
