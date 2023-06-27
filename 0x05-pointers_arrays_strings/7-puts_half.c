#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: The string to print
 *
 */
void puts_half(char *str)
{
	int i;
	int l = 0;
	int n;

	if (*str != '\0')
	{
		while (*str != 0)
			l++;
		l--;
		if (l % 2 == 0)
		{
			n = 1 / 2;
			i = n;
			for (; n <= l; n++)
			{
				_putchar(str[i]);
				str++;
				i++;
			}
		}
		else
		{
			n = (l - 1) / 2;
			i = n;
			for (; n <= l; n++)
			{
				_putchar(str[i]);
				str++;
				i++;
			}

		}
	}
}
