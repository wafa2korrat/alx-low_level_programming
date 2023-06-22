#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _isupper(int c)
{
	int re;

	if (c >= 65 && c <= 90)
		re = 1;
	else
		re = 0;
	return (re);
}
