#include <stdlib.h>
/**
*_calloc - allocate memory for an array using malloc
*@nmemb: number of members
*@size: size of each member
*Return: pointer upon success
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i != size; i++)
		*(s + (size * i)) = 0;
	return (s);
}
