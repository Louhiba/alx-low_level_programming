#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node
 * @index: index
 * Return: pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r;
	listint_t *t = head;

	for (r = 0; r < index; r++)
	{
		t = t->next;
	}
	return (t ? t : NULL);
}
