#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabets to stdout
 *
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar('\n');
}
