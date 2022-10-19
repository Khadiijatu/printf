#include "main.h"
/**
 * print_rev - prints the reversed string
 * @r: va_list
 *
 * Return: int
 */
int print_rev(va_list r)
{
	char *tmp;
	int i, n;
	int count;

	count = 0;
	tmp = va_arg(r, char *);

	for (i = 0; tmp[i]; i++)
		count++;
	for (n = count - 1; n >= 0; n--)
		_putchar(tmp[n]);

	return (0);
}
