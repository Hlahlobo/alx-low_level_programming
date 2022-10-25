#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of list
 * @head: A pointer to the first node
 * @index: The index of the node
 * Return: The located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
