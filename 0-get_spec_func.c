#include "main.h"

/**
 * get_op - selects the correct function to perform for each specifier
 * @s: specifier
 *
 * Return: pointer to associated function
 */
int (*get_op(char *format))(char *format, va_list)
{
	op_t specs[] = {
		{"%c", print_char},
		{"%s", print_str},
		{"%%", print_percent},
		{"%d", print_dec},
		{"%i", print_dec},
		{NULL, NULL}
	};
	int i;

	if (!format[1] || format[1] == ' ')
		return (NULL);
	i = 0;
	while (specs[i].spec)
	{
		if (specs[i].spec[1] == format[1])
			return (specs[i].f);
		i++;
	}
	return (0);
}
