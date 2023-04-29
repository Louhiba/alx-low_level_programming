#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the element
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *p;

	if (!(*head) || !head)
		return (0);
	i = (*head)->n;
	p = (*head)->next;
	free(*head);
	(*head) = p;
	return (i);
	(*head) = NULL;
}
