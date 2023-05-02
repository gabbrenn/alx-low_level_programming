#include "lists.h"

/**
 * sum_listint - It will calculates the sum of all the data in a listint_t list
 * @head: This is the First node in linked list
 *
 * Return: This will return the result of sum
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
