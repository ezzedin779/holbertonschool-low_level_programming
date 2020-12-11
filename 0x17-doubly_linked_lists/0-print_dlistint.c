#include "lists.h"
/**
*print_dlistint - print a doubly linked list
*@h: the head of the list
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
