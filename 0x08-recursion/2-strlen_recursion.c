#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function returns the lenght of a string
 * @s: string to br measured
 * Return: The lenght of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
