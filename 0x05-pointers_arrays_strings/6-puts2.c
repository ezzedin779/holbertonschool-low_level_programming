#include "holberton.h"
/**
*_puts - print a string
*@str: string to print
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar (str[i]);
		i++;
	}
	_putchar ('\n');
}
