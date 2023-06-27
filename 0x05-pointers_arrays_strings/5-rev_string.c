#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The string to print
 *
 */
void print_rev(char *s)
{
	char first = *s;
	int i = 0;

	if (*s != '\0')
	{
		while (*s != '\0')
			s++;
	s--;
	while (*s != first)
	{
		a[i] = *s;
		s--;
		i++;
	}
	a[i] = first;
}
