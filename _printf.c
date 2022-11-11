#include "main.h"
/**
 * _printf - basically printf
 * @format: a string of inputs
 * Return: how many inputs there is
 */
int _printf(const char *format, ...)
{
	p_struct argument[] = {
		{"c", p_char},
		{"%", p_percent},
		{"s", p_string},
		{"d", p_int},
		{"i", p_int},
		{"u", print_unsigned},
		{NULL, NULL}
	};
	va_list(ap);
	int count = 0;

	va_start(ap, format);
	count = counts(format, argument, ap);
	va_end(ap);
	return (count);
}
