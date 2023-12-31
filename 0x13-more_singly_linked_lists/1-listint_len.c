#include "lists.h"

/**
 * listint_len - returns the number of elements linke_lists
 * @h: linked_list of_type listint_t to the traverse
 *
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
