#include "holberton.h"
/**
*print_alphabet - playing with alphbets
*/
void print_alphabet(void)
{
	char i;
	char j = '\n';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar (i);
	}
	_putchar (j);
}
