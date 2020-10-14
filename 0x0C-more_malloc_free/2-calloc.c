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
	char *p = NULL;

	if (nmemb == 0 || size == 0)
		return (p);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (p);
	for (i = 0; i < nmemb; i++)
		p[i * size] = 0;
	return (p);
}
