#include "lists.h"
/**
*sum_listint - add the data of all the list
*@head: the head of the list
*Return: the sum of all the data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
