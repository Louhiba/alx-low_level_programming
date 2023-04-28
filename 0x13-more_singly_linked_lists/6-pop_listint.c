#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *p;
	i = (*head)->n;
	p = (*head)->next;
	free(*head);
	(*head) = p;
	return (i);
	(*head) = NULL;
}
