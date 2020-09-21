#include "holberton.h"
/**
*print_last_digit - hi last one
*@c: integer
*Return: integer
*/
int print_last_digit(int c)
{
	int ld;

	if (c < 0)
		c = c * (-1);
	ld = c % 10;
	_putchar (ld + '0');
	return (ld);
}
