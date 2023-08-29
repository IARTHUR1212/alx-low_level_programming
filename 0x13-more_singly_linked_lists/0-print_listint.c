#include "lists.h"

/**
 * The print_listint - prints_all elements of the linked list
 * @h: The exact linked list of the type listint_t to print
 *
 * Return: The number_nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (number);
}
