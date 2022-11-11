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


