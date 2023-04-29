#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a linked list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
