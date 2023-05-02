#include "lists.h"

/**
 * get_nodeint_at_index - this will returns the node at a certain index in a linked list
 * @head: this is the first node of the linked list
 * @index: that is the index of the node to be return
 *
 * Return: This pointer will point to the node we're looking for, other wise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int g = 0;
	listint_t *temp = head;

	while (temp && g < index)
	{
		temp = temp->next;
		g++;
	}

	return (temp ? temp : NULL);
}
