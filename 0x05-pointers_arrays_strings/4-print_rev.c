#include "holberton.h"
/**
*print_rev - reverse printing
*@s: string
*/
void print_rev(char *s)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
		s++;
	for (j = i; j >= 0; j--)
	{
	_putchar (*s);
	s--;
	}
	_putchar ('\n');
}
