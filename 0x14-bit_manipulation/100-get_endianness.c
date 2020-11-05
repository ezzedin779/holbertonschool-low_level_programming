#include "holberton.h"
/**
*get_endianness - little or big ?
*Return: 0 if BE 1 if LE
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if ((int)*c == 1)
		return (1);
	return (0);
}
