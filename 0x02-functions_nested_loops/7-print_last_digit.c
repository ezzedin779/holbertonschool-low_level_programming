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
	{
		ld = c * (-1);
	}
	_putchar ((ld % 10) + '0');
	return (ld % 10);
}
