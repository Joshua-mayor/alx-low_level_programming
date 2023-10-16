#include "main.h"
/**
 * swap_int - function swaps the value of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
