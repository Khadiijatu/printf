#include "main.h"

/**
 * get_op - selects the correct function to perform for each specifier
 * @format: entered format specifier
 * @specs: op_t
 * @args: va_list
 *
 * Return: pointer to associated function
 */
int get_op(const char *format, op_t *specs, va_list args)
{
	int count, i, j;
	char s;

	count = 0;
	i = 0;
	j = 0;
	s = format[i];
	while (s)
	{
		if (s == '%')
		{
			j = 0;
			i++;
			s = format[i];
			while (specs[j].spec && s != *(specs[j].spec))
				j++;
			if (specs[j].spec)
				count += specs[j].f(args);
			else
			{
				if (s == '\0')
					return (-1);
				if (s != '%')
					count += _putchar('%');
				count += _putchar(s);
			}
		}
		else
			count += _putchar(s);
		i++;
		s = format[i];
	}
	return (count);
}
