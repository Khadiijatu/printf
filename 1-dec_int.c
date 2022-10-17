#include "main.h"

/**
 * print_dec - prints a decimal
 * @d: va_list
 *
 * Return: number of decimals printed
 */

int print_dec(va_list d)
{
	int num;
	int i, j;
	int result;

	num = va_arg(d, int);
	i = 0;
	if (num >= 0)
		result = num;
	else
	{
		_putchar('-');
		result = -1 * num;
		i++;
	}
	j = 1;
	while ((result / j) > 9)
		j *= 10;
	while (j)
	{
		_putchar(result / j + '0');
		result = result % j;
		j = j / 10;
		i = i + 1;
	}
	return (i);
}
