#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *t = *head;

	p = malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		*head = p;
		return (NULL);
	}
	p->n = n;
	p->next = NULL;
	while (t->next)
		t = t->next;
	t->next = p;
	return (p);
}
