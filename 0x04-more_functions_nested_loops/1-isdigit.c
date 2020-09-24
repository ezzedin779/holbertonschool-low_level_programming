#include "holberton.h"

/**
*_isdigit - number or not ?
*@c: the object to check
*Return: integer
*/
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	return (1);
	else
	return (0);
}
