#include "holberton.h"
/**
*print_to_98 - i love 98
*@n : integer
*Return: void
*/
void print_to_98(int n)
{
	int s;

	while (n > 98)
	{
		if (n > 99)
		{
			_putchar ((n / 100) + '0');
			_putchar (((n % 100) / 10) + '0');
			_putchar ((n % 10) + '0');
		}
		else
		{
			_putchar ((n / 10) + '0');
			_putchar ((n % 10) + '0');
		}
		_putchar (',');
		_putchar (' ');
		n--;
	}
	while (n < 98)
	{
		if (n < 0)
		{
			s = n * -1;
			_putchar ('-');
			if (s > 9)
			{
				_putchar ((s / 10) + '0');
				_putchar ((s % 10) + '0');
			}
			else
				_putchar (s + '0');
		}
		else
			{
				if (n > 10)
				{
					_putchar ((n / 10) + '0');
					_putchar ((n % 10) + '0');
				}
				else
				_putchar (n + '0');
			}
		_putchar (',');
		_putchar (' ');
		n++;
	}
	if (n == 98)
	{
		_putchar ((n / 10) + '0');
		_putchar ((n % 10) + '0');
		_putchar ('\n');
	}
}
