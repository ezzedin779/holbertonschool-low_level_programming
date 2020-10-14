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
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i != size; i++)
		*(p + (size * i)) = 0;
	return (p);
}
