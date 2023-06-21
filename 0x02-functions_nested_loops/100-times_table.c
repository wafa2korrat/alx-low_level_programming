#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the integer of time table.
 */
void print_times_table(int n)
{
	int row;
	int num;
	int res;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (num = 0; num < n; num++)
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
				if (num != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
