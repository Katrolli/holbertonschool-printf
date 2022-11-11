#include "main.h"

/**
 * rot13 - encrypts rot 13
 * @ap: a pointer
 * Return: length
 */
int rot13(va_list ap)
{
	int i, j;

	char alphabet[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rotphabet[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *s;

	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		for (j = 0; alphabet[j]; j++)
		{
			if (alphabet[j] == s[i])
			{
				_putchar (rotphabet[j]);
				break;
			}
		}
		if (!alphabet[j])
			_putchar(s[i]);
	}
	return (i);
}
