#include "lists.h"

/**
 * listint_len - Will returns the number of all  elements in a linked list
 * @h: type listint_t to traverse for linked list
 *
 * Return: It return numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
