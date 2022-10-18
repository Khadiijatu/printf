#include "main.h"

/**
 * get_op - selects the correct function to perform for each specifier
 * @s: specifier
 *
 * Return: pointer to associated function
 */
int (*get_op(const char *s))(va_list)
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

	if (!s[1] || s[1] == ' ')
		return (NULL);
	i = 0;
	while (specs[i].spec)
	{
		if (specs[i].spec[1] == s[1])
			return (specs[i].f);
		i++;
	}
	return (0);
}
