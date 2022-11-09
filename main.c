#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	int len, len2;

	len = _printf("%c", 'S');
	len2 = printf("%c", 'S');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		 printf("len 1 :%i, len 2:%i", len,len2);
		return (1);
	}
	return (0);
		
}
