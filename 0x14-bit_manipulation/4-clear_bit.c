#include "holberton.h"
/**
*clear_bit - set the value of the indexed bit to 0
*@n: the number to change
*@index: the index to the bit
*Return: 1 on success -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = index;
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << i);
	return (1);
}
