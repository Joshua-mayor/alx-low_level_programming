#include <stdio.h>

/**
 * main - Program entry
 * Return: 0 (Success)
 */

int main(void)
{
	char x;

	x = 'a';
	while
		(x <= 'z') {
			if ((x != 'q' && x != 'e') && x <= 'z')
				putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}
