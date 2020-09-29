#include "holberton.h"
/**
*print_rev - reverse printing
*@s: string
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	for (; i >= 0; i--)
	{
	_putchar (*s);
	s--;
	}
	_putchar ('\n');
}
