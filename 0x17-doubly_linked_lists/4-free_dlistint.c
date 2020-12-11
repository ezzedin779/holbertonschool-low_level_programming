#include "lists.h"
/**
*free_dlistint - free a doubly linked list
*@head: head of the list to free
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
