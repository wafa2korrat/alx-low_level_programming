#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	num1 = 48;

	while (num1 <= 57)
	{
		num2 = num1 + 1;
		while (num2 <= 57)
		{
		putchar(num1);
		putchar(num2);
		if (num1 != 56)
		{
		putchar(',');
		putchar(' ');
		}
		num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
