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

	len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
		
}
