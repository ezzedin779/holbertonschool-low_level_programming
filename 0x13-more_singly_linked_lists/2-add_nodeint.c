#include "lists.h"
/**
*add_nodeint - add a node to a list at the begining
*@head: the head of the list
*@n: the content of the new element
*Return: the adress of the new element or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
