#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print element
 * @h: listin to be print
 *
 * Return: number of element
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}

