#include "lists.h"
/**
*add_dnodeint - add a node at the begining in doubly linked lists
*@head: the head of the list
*@n: data of the new node
*Return: the address of the new element on success or a null
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
