#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: The digit to check
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _isdigit(int c)
{
	int re;

	if (c >= 48 && c <= 57)
		re = 1;
	else
		re = 0;
	return (re);
}
