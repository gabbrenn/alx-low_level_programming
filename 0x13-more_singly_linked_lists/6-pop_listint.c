#include "lists.h"

/**
 * pop_listint - pop used to deletes the head node of a linked list
 * @head: That pointer will point to the first element in the linked list
 *
 * Return: that will return the data inside the elements that was deleted,
 * other wise 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
