#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * p_percent - prints a percent
 * @ap: unnessecary
 * Return: 1 success
 */
int p_percent(va_list __attribute__((unused)) ap)
{
	_putchar('%');
	return (1);
}
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
int p_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
/**
 * p_string -main function
 * @str_list: first parameter
 * Return: returns the sum
 */
int p_string(va_list ap)
{
	int i = 0;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
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

