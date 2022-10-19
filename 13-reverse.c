#include "main.h"
/**
 * print_rev - prints the reversed string
 * @r: va_list
 *
 * Return: int
 */
int print_rev(va_list r)
{
	char *str;
	int i, n;

	str = va_arg(r, char *);
	if (str == NULL)
		str = "(null)";
	i = 0;
	while (str[i])
		i++;
	n = 0;
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		n++;
	}
	return (n);
}
