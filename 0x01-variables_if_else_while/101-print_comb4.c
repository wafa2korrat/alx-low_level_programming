#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	num1 = 48;

	while (num1 <= 57)
	{
		num2 = num1 + 1;
		while (num2 <= 57)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
			putchar(num1);
			putchar(num2);
			putchar(num3);
			if (num1 != 55)
			{
			putchar(',');
			putchar(' ');
			}
			num3++;
			}
		num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
