#include "lists.h"
/**
*add_dnodeint_end - add the node in the end of a doulby linked list
*@head: the head of the list
*@n: data of the new node
*Return: the address of the new node upon success
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (h->next != NULL)
		h = h->next;
	h->next = new;
	new->prev = h;
	return (new);
}
