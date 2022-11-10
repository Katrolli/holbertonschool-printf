#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _putchar - our good little friend
 * @c: the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * p_char -main function
 * @char_list: first parameter
 * Return: returns the sum
 */
int p_char(va_list char_list)
{
	char c = va_arg(char_list, int);

	putchar(c);
	return (1);
}
/**
 * p_string -main function
 * @str_list: first parameter
 * Return: returns the sum
 */
int p_string(va_list str_list)
{
	int i = 0;
	char *str = va_arg(str_list, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	return (i);
}
/** 
 * p_int - prints out an int
 * @ap: action pointer to the numbers incoming
 */
int p_int(va_list ap)
{
	int n = va_arg(ap, int);
	int i;
	int print = 0;

	if (n < 0)
	{
		print += _putchar('-');
	}
 	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
 		{
		if ((n / i) % 10 < 0)
			print += _putchar(-(n / i % 10) + '0');
		else
			print += _putchar((n / i % 10) + '0');
		}
		else if ( n / i == 0 && i == 1)
		{
			print += _putchar((n / i % 10) + '0');
		}
	}
		return (print);
}
/**
 * _printf -main function
 * @format: first parameter
 * Return: returns the sum
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, j;
	my_struct f_struct[] = {{"c", p_char}, {"s", p_string}, {"i", p_int},
		{"d", p_int}, {NULL, NULL}};
	va_list args_list;

	if (format == NULL)
		return (-1);
	va_start(args_list, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			for (j = 0; f_struct[j].type != NULL; j++)
			{
				if (format[i + 1] == f_struct[j].type[0])
					count += f_struct[j].f(args_list);
			}
			if (format[i + 1] != '\0' && format[i + 1] != 'c' && format[i + 1] != 's'
			&& format[i + 1] == 'd' && format[i + 1] == 'i')
			{
				putchar(format[i]);
				putchar(format[i + 1]);
				count += 2;
			}
			else if (format[i + 1] == '\0')
				return (-1);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			putchar('%');
			count += 1;
			i++;
		}
		else
		{
			putchar(format[i]);
			count += 1;
		}
	}
	va_end(args_list);
	return (count);
}
