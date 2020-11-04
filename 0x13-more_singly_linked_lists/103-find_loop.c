#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *p;

	tmp = head->next;
	p = tmp->next;
	if (head == NULL || head->next == NULL || p->next == NULL)
		return (NULL);
	while (tmp != NULL && p != NULL && p->next != NULL)
	{
		if (tmp == p)
		{
			tmp = head;
			break;
		}
	}
	while (tmp != p)
	{
		tmp = tmp->next;
		p = p->next;
	}
	return (p);
}
