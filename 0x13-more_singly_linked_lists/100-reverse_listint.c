#include "lists.h"

/**
 * reverse_listint - This will make reverse to linked list
 * @head: This is pointer to The First node in the list
 *
 * Return: It will return pointer to the first node in The new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
