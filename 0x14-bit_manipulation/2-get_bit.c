#include "holberton.h"
/**
*get_bit - get the value of a bit at a given index
*@n: the number to get from the bit
*@index: the index of the bit
*Return: the value of the bit indexed
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = index;
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << i)) == 0)
		return (0);
	return (1);
}
