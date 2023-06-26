#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The string to print
 *
 */
void print_rev(char *s)
{
	char first = *s;

	while (*s != '\0')
		s++;
	for (; *s != first; s--)
		_putchar(*s);
	_putchar(first);
	_putchar('\n');
}
