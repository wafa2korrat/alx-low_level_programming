#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: The string to be reverse.
 *
 */
void rev_string(char *s)
{
	char first = *s;

	if (*s != '\0')
	{
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
		_putchar('\n');
	}
	s--;
	while (*s != first)
	{
		_putchar(*s);
		s--;
	}
	_putchar(first);
	_putchar('\n');
}
