#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op - selects the correct function to perform for each specifier
 * @s: specifier
 *
 * Return: pointer to associated function
 */
int (*get_op(char *s))(va_list)
{
	op_t format[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_dec},
		{"i", print_int},
		{NULL, NULL}
	};
	int i = 0;

	while (format[i].spec)
	{
		if (*format[i].spec == *s)
			break;
		i++;
	}
	return (format[i].f);
}
