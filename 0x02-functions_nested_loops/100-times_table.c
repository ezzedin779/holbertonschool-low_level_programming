#include "holberton.h"
/**
*print_times_table - time table 15
*@n : integer
*Return: void
*/
void print_times_table(int n)
{
	int i;
	int j;

if ((n > 0) && (n < 15))
{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != 0)
			_putchar (' ');
			if (i * j < 10)
			{
				if (j != 0)
				{
				_putchar (' ');
				_putchar(' ');
				}
				_putchar(i * j  + '0');
			}
			else if (i * j >= 100)
			{
				_putchar ((i * j) / 100 + '0');
				_putchar (((i * j) % 100) / 10 + '0');
				_putchar ((i * j) % 10 + '0');
			}
			else
			{
				_putchar (' ');
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
			if (j < n)
			{
				_putchar(',');
			}
			}
		_putchar('\n');
}
}
}
