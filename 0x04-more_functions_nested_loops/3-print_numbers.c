#include "main.h"

/**
 * print_numbers - checks for digit (0 through 9)
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		_putchar(d);
	}
	_putchar("\n");
}
