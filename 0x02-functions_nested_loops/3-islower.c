#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned.
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

