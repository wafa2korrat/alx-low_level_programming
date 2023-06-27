#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The string to print
 *
 */
void print_rev(char *s)
{
	int i = 0;
	int n;

	if (s[i] != '\0')
	{
		while (s[i] != '\0')
			i++;
		i--;
		n = i;
		char a[n];

		while (i >= 0)
		{
			n = 0;
			a[n] = s[i];
			n++;
			i--;
		}
	}
}
