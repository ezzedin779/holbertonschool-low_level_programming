#include "holberton.h"
/**
*set_bit - set an indexed bit to 1
*@n: the number to se it's bit
*@index: the index to the bit
*Return: 1 upon success -1 if failed
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = index;
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | (1 << i);
	return (1);
}
