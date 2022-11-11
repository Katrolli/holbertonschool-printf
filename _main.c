#include <stdio.h>
#include "main.h"
/**
 * counts - counts and returns the ammount of imputs
 * @format: a string of imputs
 * @argument: Specifiers being checked
 * @ap: action pointer to the inputs
 * Return: how many are outputed
 */
int counts(const char *format, p_struct argument[], va_list ap)
{
	int i, j;
	int count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		for (j = 0; argument[j].parameter; j++)
		{
			if (*argument[j].parameter == format[i + 1])
			{
				count += argument[j].f(ap);
				break;
			}
		}
		i++;
		if (!argument[j].parameter)
		{
			count += _putchar('%');
			count += _putchar(format[i]);
		}
	}
	return (count);
}
