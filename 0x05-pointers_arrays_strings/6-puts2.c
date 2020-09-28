#include "holberton.h"
/**
*puts2 - print a even characters
*@str: string to print
*/
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar (*str);
		str++;
		str++;
	}
	_putchar ('\n');
}
