#include "main.h"
/**
 * _printf -  produces output according to a format
 * @format: char pointer
 *
 * Return: numbers of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	i = 0;
	j = 0;
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			j++;
			i++;
		}
		if (*format == '\0')
			return (j);
		if (get_op(&format[i + 1]))
		{
			j += (get_op(&format[i + 1]))(args);
			i += 2;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		_putchar(format[i]);
		j++;
		if (format[i + 1] == '%')
			i = i + 2;
		else
			i = i + 1;
	}
	va_end(args);
	return (j);
}
