#include "lists.h"

/**
 * add_nodeint - will adds a new node at the Beginning in a linked list
 * @head: pointer will point to the first node in The list
 * @n: Data to be inserted in that new node
 *
 * Return: Null if it fails or Pointer to the new nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
