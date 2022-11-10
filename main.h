#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
int p_char(va_list char_list);
int p_string(va_list str_list);
int change_int(va_list int_list);
int p_int(va_list ap);
int _putchar(char c);
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
