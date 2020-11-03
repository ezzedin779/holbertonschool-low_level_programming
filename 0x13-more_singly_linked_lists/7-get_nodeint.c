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

/**
*get_nodeint_at_index - gets the node indexed
*@head: the head of the list
*@index: the index
*Return: the node indexed
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	i = listint_len(head);
	if (i < index)
		return (NULL);
	tmp = head;
	for (i = 0; i < index && tmp != NULL; i++)
		tmp = tmp->next;
	return (tmp);
}
