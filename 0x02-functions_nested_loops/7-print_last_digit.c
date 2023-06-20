#include "main.h"

/**
 * print_last_digit - prints the last digit of a number to stdout
 * @n: The number that print its last digit.
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int rez;

	if (n >= 0)
		rez = (n % 10) + 48;
	else
		rez = ((-1 * n) % 10) + 48;

	_putchar(rez);
	return (rez);
}
