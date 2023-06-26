#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: The string to be measured
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	if (s)
	{
		length++;
		s++;
	}

	return (length);
}
