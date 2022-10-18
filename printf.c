#include "main.h"
/**
 * _printf -  produces output according to a format
 * @format: char pointer
 *
 * Return: numbers of characters printed
 */
int _printf(char *format, ...)
{
	va_list args;
	int count;
	char s0, s1, s[3];

	if (format == NULL)
		return (-1);
	s0 = format[0];
	s1 = format[1];
	s[2] = '\0'; 
	va_start(args, format);
	while (s0)
	{
		if (s0 != '%')
		{
			count += _putchar(s0);
			format++;
		}
		else
		{
			if (get_op(format))
			{
				s[0] = '%';
				s[1] = s1;
				count += (get_op(format))(s, args);
			}
			else if (s1)
			{
				count += _putchar('%');
				count += _putchar(s1);
			}
			else
			{
				count += _putchar('%');
				break;
			}
			format += 2;
		}
	}
	va_end(args);
	return (count);
}
