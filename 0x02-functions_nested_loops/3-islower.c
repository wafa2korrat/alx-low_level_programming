#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */

int _islower(int c)
{
	int rez;

	if (c <= 122 && c >= 97)
		rez = 1;
	else
		rez = 0;
	return (rez);
}

