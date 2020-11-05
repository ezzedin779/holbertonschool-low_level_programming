#include "holberton.h"
/**
*flip_bits - number of bits needed to flip to get the other number
*@n: the first number
*@m: the second number
*Return: the number of bits needed to be changed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		if ((xor & 1) == 1)
			i++;
		xor = xor >> 1;
	}
	return (i);
}
