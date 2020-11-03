#include "lists.h"
/**
*add_nodeint_end - add a node to a list at the end
*@head: the head of the list
*@n: the content of the new element
*Return: the adress of the new element or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	p = *head;
	while (p->next != NULL)
		p = p->next;
	p->next = new;
	return (*head);
}
