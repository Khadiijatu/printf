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
	char *spec;
	int (*f)(char *format, va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_op(const char *format))(char *format, va_list);
int print_char(char *format, va_list c);
int print_str(char *format, va_list s);
int print_percent(char *format, va_list perc);
int print_dec(char *format, va_list d);
#endif
