#include "holberton.h"
/**
*puts2 - print an even string
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
