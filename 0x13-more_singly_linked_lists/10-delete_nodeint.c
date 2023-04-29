#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p = *head;
	listint_t *an = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	if (*head == NULL)
		return (-1);
	for (i = 1; i <= index; i++)
	{
		if (i == index)
		{
			an = p->next;
			p->next = an->next;
			free(an);
		}
		else
			p = p->next;
	}
	return (1);
}
