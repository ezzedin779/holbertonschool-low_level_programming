#include "lists.h"
/**
*free_listint2 - free the list and set head to null
*@head: the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *n, *tmp;

	if (head == NULL || *head == NULL)
		return;
	tmp = *head;
	while (head != NULL && tmp != NULL)
	{
		n = tmp;
		tmp = tmp->next;
		free(n);
	}
	*head = NULL;
}
