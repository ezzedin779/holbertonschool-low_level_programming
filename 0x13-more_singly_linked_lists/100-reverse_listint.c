#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: the head of the list
 * Return: the head of the reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	p = NULL;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = p;
		p = (*head);
		(*head) = tmp;
	}
	(*head) = p;
	return (*head);
}
