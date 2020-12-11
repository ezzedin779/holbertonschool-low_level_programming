#include "lists.h"
/**
*insert_dnodeint_at_index - add a node at index
*@h: the head of the list
*@idx: the indexed place
*@n: data of the new node
*Return: the address of the new node or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nhead = *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (idx != 1)
	{
		nhead = nhead->next;
		idx--;
		if (nhead == NULL)
			return (NULL);
	}
	if (nhead->next == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new->n = n;
	new->prev = nhead;
	new->next = nhead->next;
	nhead->next = nhead->next;
	nhead->next->prev = new;
	nhead->next = new;
	return (new);
}
