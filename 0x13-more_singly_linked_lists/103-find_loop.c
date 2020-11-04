#include "lists.h"
/**
*find_listint_loop - find the loop
*@head: the head of the list
*Return: the adress of the begining of the loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *p;

	tmp = head->next;
	p = tmp->next;
	while (tmp != NULL && p != NULL && p->next != NULL)
	{
		if (tmp == p)
		{
			tmp = head;
			break;
		}
	}
	if (tmp == NULL || p == NULL || p->next == NULL)
		return (NULL);
	while (tmp != p)
	{
		tmp = tmp->next;
		p = p->next;
	}
	return (p);
}
