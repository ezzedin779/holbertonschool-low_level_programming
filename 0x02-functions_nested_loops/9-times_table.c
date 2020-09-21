#include "holberton.h"
/**
*times_table - 2 + 2 is 4
*Return: void
*/
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 9)
			{
			if ((i * j) >= 10)
			{
				_putchar (((i * j) / 10) + '0');
				_putchar (((i * j) % 10) + '0');
				_putchar (',');
			}
			else
			{
				_putchar (' ');
				_putchar ((i * j) + '0');
				_putchar (',');
			}
			_putchar (' ');
			}
			else
			{
				if ((i * j) >= 10)
			{
				_putchar (((i * j) / 10) + '0');
				_putchar (((i * j) % 10) + '0');
			}
			else
			{
				_putchar (' ');
				_putchar ((i * j) + '0');
			}
			}
		}
		_putchar ('\n');
	}
}
