#include "main.h"

/**
 * _putchar - prints a character
 * @c: character to print
 *
 * Return: 1, or -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
