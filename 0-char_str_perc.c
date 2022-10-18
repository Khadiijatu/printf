#include "main.h"

/**
 * print_char - prints a character
 * @format: char pointer
 * @c: va_list
 *
 * Return: 1
 */
int print_char(char *format, va_list c)
{
	(void)format;
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * print_str - prints a string
 * @format: char pointer
 * @s: va_list
 *
 * Return: number of characters printed
 */
int print_str(char *format, va_list s)
{
	(void)format;
	int i;
	char *str;

	str = va_arg(s, char *);
	i = 0;

	while (str[i])
	{
		i += _putchar(str[i]);
	}
	return (i);
}

/**
 * print_percent - prints %
 * @format: char pointer
 * @perc: va_list
 *
 * Return: 1
 */
int print_percent(char *format, va_list perc)
{
	(void)perc;
	(void)format;
	_putchar('%');
	return (1);
}
