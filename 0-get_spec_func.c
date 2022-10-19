#include "main.h"

/**
 * get_op - selects the correct function to perform for each specifier
 * @format: specifier
 *
 * Return: pointer to associated function
 */
int (*get_op(const char *format))(va_list)
{
	op_t specs[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_dec},
		{"i", print_dec},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (specs[i].spec)
	{
		if (*specs[i].spec == *format)
			break;
		i++;
	}
	return (specs[i].f);
}
