#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: Pointer to the first node
 * Return: A pointer to the reverse
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	behind = NULL;

	while ((*head->next) != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		*head = ahead;
	}
	(*head)->next = behind;

	return (*head);
}
