#include "holberton.h"
/**
*_print_rev_recursion - print in reverse
*@s: string to print in reverse
*Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
