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
*insert_nodeint_at_index - inserting a new node at a given position
*@head: the head of the list
*@idx: position to insert in
*@n: the data of the new node
*Return: the adress of the new node or a NULL on fail
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *tmp;

	if (*head == NULL && idx != 0)
		return (NULL);
	i = listint_len(*head);
	if (i < idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1) && tmp != NULL; i++)
		tmp = tmp->next;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
