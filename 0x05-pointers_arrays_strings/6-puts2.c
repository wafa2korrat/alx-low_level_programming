#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: The string to print.
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}