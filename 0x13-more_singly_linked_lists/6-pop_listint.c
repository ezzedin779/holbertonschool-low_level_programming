#include "lists.h"
/**
*pop_listint - delete the head node
*@head: the head of the list
*Return: the date of the head
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t  *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
