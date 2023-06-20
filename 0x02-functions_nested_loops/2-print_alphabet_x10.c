#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the lowercase alphabet to stdout
 *
 */

void print_alphabet_x10(void)
{
	int ch;
	int row_num = 1;

	for (row_num = 1; row_num <= 10; row_num++)
	{
	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar('\n');
	}
}
