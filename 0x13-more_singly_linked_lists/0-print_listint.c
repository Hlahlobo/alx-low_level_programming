#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function to pint a linked list elements
 * @h : A pointer
 *
 * Return: Nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);

		h = h->next;
	}
	return (nodes);
}
