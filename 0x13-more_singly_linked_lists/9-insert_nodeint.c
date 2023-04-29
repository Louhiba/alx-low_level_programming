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
	if (!p || !an)
		return (NULL);
	an->n = n;
	an->next = NULL;
	if (idx == 0)
	{
		an->next = *head;
		*head = an;
		return (an);
	}
	for (i = 0; i < idx; i++)
	{
		if (i == idx - 1)
		{
			an->next = p->next;
			p->next = an;
			return (an);
		}
		else
			p = p->next;
	}
	return (NULL);
}

