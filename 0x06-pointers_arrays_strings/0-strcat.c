#include "main.h"

/**
 * *_strcat - appends the src string to the dest string.
 * @dest: The first string.
 * @src: The second string.
 * Return: a pointer to the resulting string dest.
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	i = 0;
	n = 0;
	while (*dest != '\0')
		i++;
	i--;
	if (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
