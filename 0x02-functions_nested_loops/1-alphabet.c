#include "holberton.h"
/**
*print_alphabet - playing with alphbets
*Return: nothing in return
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar (i);
		_putchar ('\n');
	}
}
