#include "lists.h"

/**
 * listint_len - print the lenght of singly list
 * @h: liked list
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
