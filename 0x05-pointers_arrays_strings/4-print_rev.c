#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The string to print
 *
 */
void print_rev(char *s)
{
	char first = *s;

	if (*s != '\0')
	{
		while (*s != '\0')
			s++;
		s--;
		for (; *s != first; s--)
			_putchar(*s);
		_putchar(first);
	}
	_putchar('\n');
}
