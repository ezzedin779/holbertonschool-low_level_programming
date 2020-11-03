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
*delete_nodeint_at_index - delete a node indexed
*@head: the head of the list
*@index: the index to the node
*Return: 1 upon success -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *p;

	if (*head == NULL)
		return (-1);
	i = listint_len(*head);
	if (i < index)
		return (-1);
	tmp = *head;
	p = *head;
	if (index == 0 && i != 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	else if (index == 0)
	{
		*head = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index && tmp != NULL; i++)
		tmp = tmp->next;
	for (i = 0; i < (index - 1) && p != NULL; i++)
		p = p->next;
	p->next = tmp->next;
	free(tmp);
	return (1);
}
