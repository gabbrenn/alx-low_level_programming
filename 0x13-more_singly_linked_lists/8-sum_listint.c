#include "lists.h"

/**
 * sum_listint - this prototype will calculates the sum of all the data in a listint_t list
 * @head:This is the First node in the linked list
 *
 * Return: This will return sum of all element
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
