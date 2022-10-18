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
	int i = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			i++;
			format++;
			continue;
		}
		format++;
		if (*format == '\0')
			return (-1);
		if (*format != 'c' && *format != 's' && *format != '%'
		     && *format != 'd' && *format != 'i')
		{
			_putchar('%');
			_putchar(*format);
			i += 2;
			format++;
			continue;
		}
		if (*format == '%')
		{
			_putchar(*format);
			i++;
			format++;
			continue;
		}
			i += (get_op(format))(args);
		format++;
	}
	va_end(args);
	return (i);
}
