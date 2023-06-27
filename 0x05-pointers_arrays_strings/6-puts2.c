#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: The string to print.
 *
 */
void puts2(char *str)
{
	int i = 0;

	if (*str != 0)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (i % 2 != 0)
				_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
