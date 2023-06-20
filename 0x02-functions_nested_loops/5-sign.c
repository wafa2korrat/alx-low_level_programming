#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if n is greater than zero.
 * 0 if n is zero.
 * -1 if n is less than zero.
 */

int print_sign(int n)
{
	int rez;

	if (n > 0)
	{
		rez = 1;
			_putchar('+');
	}
	else if (n == 0)
	{
		rez = 0;
			_putchar(48);
	}
	else
	{
		rez = -1;
			_putchar('-');
	}
	return (0);
}
