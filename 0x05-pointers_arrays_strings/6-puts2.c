#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: The string to print
 *
 */
void puts2(char *str)
{
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str = str + 2;
		}
	}
	_putchar('\n');
}
