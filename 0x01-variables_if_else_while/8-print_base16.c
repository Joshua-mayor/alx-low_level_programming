#include <stdio.h>

/**
 * main - Program entry
 * Return: 0 (Success)
 */

int main(void)
{
	char m;

	int n;

	m = 'a';
	n = 0;
	while
		(n < 10) {
			putchar(n + '0');
			n++;
		}
	while
		(m <= 'z') {
			putchar(m);
			m++;
		}
	putchar('\n');
	return (0);
}
