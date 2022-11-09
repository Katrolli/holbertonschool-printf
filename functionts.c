#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int p_char(va_list char_list)
{
	char c = va_arg(char_list, int);
	putchar(c);
	return (1);
}

int p_string(va_list str_list)
{
	int i = 0, j = 0;
	char *str = va_arg(str_list, char *);
	char *nill = va_arg(str_list, char *);

	while (str == NULL)
	{
		for (j = 0; nill[j] != '\0'; j++)
		{
			putchar(nill[j]);
		}
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	return (i);
}

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	int j;

	my_struct f_struct[] =
	{
		{"c", p_char},
		{"s", p_string},
		{NULL, NULL}
	};

	va_list args_list;
	va_start(args_list, format);

	while(format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			while (f_struct[j].type != NULL)
			{
				if (format [i + 1] == f_struct[j].type[0])
				{
					count += f_struct[j].f(args_list);
					i++;
				}
				j++;
			}
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
		i++;
	}
	va_end(args_list);
	return (count);
}
