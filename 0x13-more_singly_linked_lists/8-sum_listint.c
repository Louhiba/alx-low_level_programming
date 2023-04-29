#include "lists.h"
/**
 * sum_listint - sum of node
 * @head: listint to be tasted
 * Return: number of element
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *p = head;

	if (head == NULL)
		return (0);
	while (p)
	{
		s += p->n;
		p = p->next;
	}
	return (s);
}
