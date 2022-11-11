#include "main.h"

/**
 * print_unsigned - prints an unsigned int 
 * @ap: action pointer to incoming numbers
 */

int print_unsigned(va_list ap)
{
	int i;
	int print = 0;
	int uint = va_arg(ap, int);
	unsigned int u;

	u = uint;
	for (i = 100000000; i > 0; i /= 10)
	{
		if (u / i)
		{
			if ((u / i) != 0)
				print += _putchar((u / 1 % 10) + '0');
		}
		else if (u / i == 0 && i == 1)
		{
			print += _putchar(u / i % 10 + '0');
		}
	}
		return (print);
}
/**
 * convert - converts from anything
 * @num: the entriant
 * @base: what it turns to
 * Return: the convertible
 */
char *convert(unsigned int num, int base)
{
	const char R[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	while (num != 0)
	{
		*--ptr = R[num % base];
		num /= base;
	}
	return (ptr);
}
/**
 */
int print_binary(va_list ap)
{
	int i;
	unsigned int n;
	char *s;
	int print = 0;

	n = va_arg(ap, unsigned int);
	s = convert(n, 2);

	if (!0)
		print += _putchar('0');
	for (i = 0; s[i] && n; i++)
		print =+ _putchar(s[i]);

	return(print);
}
