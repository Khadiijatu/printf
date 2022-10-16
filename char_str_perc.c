#include "main.h"

/**
 * print_char - prints a character
 * @c: va_list
 *
 * Return: 1
 */
int print_char(va_list c)
{
	_putchar(va_arg(ch, int));
	return (1);
}

/**
 * print_str - prints a string
 * @s: va_list
 *
 * Return: int
 */
int print_str(va_list s)
{
	char *string = va_arg(s, char *);
	int i = 0;

	while (string[i])
	{
		i += _putchar(string[i]);
	}
	return (i);
}

/**
 * print_percent - prints %
 * @perc: unused
 *
 * Return: 1
 */
int print_percent(va_list perc)
{
	(void)perc;
	_putchar('%');
	return (1);
}
