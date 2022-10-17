#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifiers - selects the corresponding function for each specifier
 * @spec: format specifier
 * @f: pointer to associated function
 */

typedef struct specifiers
{
	char spec;
	int (*f)(va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_op(char s))(va_list);
int print_char(va_list c);
int print_str(va_list s);
int print_percent(va_list perc);
int print_dec(va_list d);
#endif
