#include "holberton.h"
/**
*print_last_digit - hi last one
*@c: integer
*Return: integer
*/
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c * (-1);
	}
	_putchar ((c % 10) + '0');
	return (c % 10);
}
