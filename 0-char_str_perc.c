#include "main.h"

/**
 * print_char - prints a character
 * @c: va_list
 *
 * Return: 1
 */
int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * print_str - prints a string
 * @s: va_list
 *
 * Return: number of characters printed
 */
int print_str(va_list s)
{
	int i;
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - prints %
 * @perc: va_list
 *
 * Return: 1
 */
int print_percent(va_list perc)
{
	(void)perc;
	_putchar('%');
	return (1);
}
