#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer
 * @idx: index
 * @n: data to insert
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head;
	listint_t *an;
	unsigned int i = 0;

	an = malloc(sizeof(listint_t));
	if (!an)
		return (NULL);
	an->n = n;
	if (idx == 0)
	{
		an->next = p;
		*head = an;
		return (an);
	}
	while (p && i < (idx - 1))
	{
		if (p == NULL || p->next == NULL)
			return (NULL);
		p = p->next;
		i++;
	}
	an->next = p->next;
	p->next = an;
	return (an);
}

