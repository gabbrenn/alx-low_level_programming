#include "lists.h"

/**
 * insert_nodeint_at_index - This will inserts a new node in
 *  linked list, at given position
 * @head: This pointer to The first node in the list
 * @idx: The Index where the new node is added
 * @n: data to be inserted in New node
 *
 * Return: Return pointer to that to the new node, Otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int g;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (g = 0; temp && g < idx; g++)
	{
		if (g == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
