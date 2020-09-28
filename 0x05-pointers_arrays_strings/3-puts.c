#include "holberton.h"
/**
*_puts - print a string
*@str: string to print
*/
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');
}
