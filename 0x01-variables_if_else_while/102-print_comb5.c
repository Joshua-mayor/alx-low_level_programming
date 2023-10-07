#include <stdio.h>

/**
 * main - Program entry
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
				putchar((a / 100) + 48);
				putchar((a % 100) + 48);
				putchar(' ');
				putchar((b / 100) + 48);
				putchar((b % 100) + 48);
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
