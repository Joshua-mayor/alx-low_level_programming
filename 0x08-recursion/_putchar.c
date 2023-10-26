#include <unistd.h>

/**
 * _putchar - function writes the character c to stdoit
 * @c: character to print
 * return: on success 1
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
