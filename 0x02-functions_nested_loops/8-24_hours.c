#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int min_ones, min_tens, hour_ones, hour_tens;

	for (hour_tens = 0; hour_tens <= 2; hour_tens++)
	{
		if (hour_tens < 2)
		{
			for (hour_ones = 0; hour_ones <= 9; hour_ones++)
			{
				for (min_tens = 0; min_tens <= 5; min_tens++)
				{
					for (min_ones = 0; min_ones <= 9; min_ones++)
					{
						_putchar(hour_tens + 48);
						_putchar(hour_ones + 48);
						_putchar(':');
						_putchar(min_tens + 48);
						_putchar(min_ones + 48);
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (hour_ones = 0; hour_ones <= 3; hour_ones++)
			{
				for (min_tens = 0; min_tens <= 5; min_tens++)
				{
					for (min_ones = 0; min_ones <= 9; min_ones++)
					{
						_putchar(hour_tens + 48);
						_putchar(hour_ones + 48);
						_putchar(':');
						_putchar(min_tens + 48);
						_putchar(min_ones + 48);
						_putchar('\n');
					}
				}
			}
		}
	}
}
