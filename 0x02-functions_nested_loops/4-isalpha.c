#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */

int _isalpha(int c)
{
	int rez;

	if ((c <= 122 && c >= 97) || (c <= 90 && c > 65))
		rez = 1;
	else
		rez = 0;
	return (rez);
}

