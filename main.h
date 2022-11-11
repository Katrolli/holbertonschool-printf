#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/*
 * structies - struct
 * @parameter: the parameters
 * @f: the found function
 */
typedef struct structies
{
	char *parameter;
	int (*f)(va_list ap);
} p_struct;

int print_rev(va_list ap);
int print_binary(va_list ap);
char *convert(unsigned int num, int base);
int p_percent(va_list __attribute__((unused)) va);
int _printf(const char *format, ...);
int p_char(va_list ap);
int p_string(va_list ap);
int p_int(va_list ap);
int _putchar(char c);
int print_unsigned(va_list ap);
int _printf(const char *format, ...);
int counts(const char *format, p_struct argument[], va_list ap);

#endif
