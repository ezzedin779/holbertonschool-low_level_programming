#include "lists.h"
/**
*listint_len - length of a list
*@h: the head of the list
*Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
