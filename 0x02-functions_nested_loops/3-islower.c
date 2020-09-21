#include "holberton.h"
/**
*_islower - checking my alphabetics
*@c: integer
*Return: integer
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
