#include "lists.h"
/**
*delete_dnodeint_at_index - delete the desired node
*@head: head of the doubly linked list
*@index: index of the node desired
*Return: 1 upon success -1 if not succeeded
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nhead = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	for (i = index; i != 0; i--)
	{
		if (nhead == NULL)
			return (-1);
		nhead = nhead->next;
	}
	if (nhead != *head)
	{
		nhead->prev->next = nhead->next;
		if (nhead->next != NULL)
			nhead->next->prev = nhead->prev;
	}
	else
	{
		*head = nhead->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	free(nhead);
	return (1);
}
