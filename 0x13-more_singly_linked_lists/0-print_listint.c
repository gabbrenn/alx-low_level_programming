#include "lists.h"

/**
 * print_listint - Print or Display  all of  the elements of a linked list
 * @h: Linked list of type Listint_t to Display
 *
 * Return: Will Return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
