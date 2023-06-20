#include "main.h"

/**
 * _abs - omputes the absolute value of an integer.
 * @n: the numper to print the absolute value of.
 *
 * Return: the absolute value of an integer.
 */

int _abs(int n)
{
	int rez;

	if (n >= 0)
	{
		rez = n;
			_putchar(rez);
	}
	else
	{
		rez = -1 * n;
			_putchar(rez);
	}
	return (rez);
}
