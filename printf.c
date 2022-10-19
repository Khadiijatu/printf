#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: input
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;

	op_t specs[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_dec},
		{"i", print_dec},
		{"r", print_rev},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);

	va_start(args, format);
	count = get_op(format, specs, args);
	va_end(args);
	return (count);
}
