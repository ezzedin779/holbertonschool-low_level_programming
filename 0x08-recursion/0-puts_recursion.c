#include "holberton.h"
/**
*_puts_recursion - creating puts with recursion
*@s: string to print
*Return: void
*/
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
}
