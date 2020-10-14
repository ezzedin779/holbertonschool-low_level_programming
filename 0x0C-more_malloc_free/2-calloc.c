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
	void *p1;
	int *p2;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p1 = malloc(nmemb * size);
	if (p1 == NULL)
		return (NULL);
	p2 = p1;
	for (i = 0; i < nmemb; i++)
		*(p2 + (size * i)) = 0;
	return (p1);
}
