# include "lists.h"
/**
 * print_dlistint - prints all elements in the list
 * @h: first node
 * Return: number of printed nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int printed;

	for (printed = 0; h; printed++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (printed);
}
