#include "lists.h"

/**
*dlistint_len - length of a doubly linked lists
*@h: head of the list
*Return: the length
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
		h = h->next;
	return (i);
}

/**
*get_dnodeint_at_index - gets the node at index
*@head: the head of the doubly linked list
*@index: the indexed node
*Return: the adress of the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	i = dlistint_len(head);
	if (head == NULL || i < index)
		return (NULL);
	tmp = head;
	for (i = 0; i < index && tmp != NULL; i++)
		tmp = tmp->next;
	return (tmp);
}
