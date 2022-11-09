#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int p_char(va_list char_list);
int p_string(va_list str_list);
/**
 * struct new_struct - Structure
 *
 * @type: The character
 * @f: The function associated
 */
typedef struct new_struct
{
	char *type;
	int (*f)(va_list arg);
} my_struct;
#endif
