#include "holberton.h"
/**
*puts2 - print an even string
*@str: string to print
*/
void puts2(char *str)
{
	int i, j;

	j = _strlen(str);
	for (i = 0; i < j ; i = i + 2)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
