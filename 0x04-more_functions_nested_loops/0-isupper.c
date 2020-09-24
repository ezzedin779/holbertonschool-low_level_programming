#include "holberton.h"

/**
*_isupper - Majus or not
*@c: the object to check
*Return: integer
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	return (1);
	else
	return (0);
}
