#include "lists.h"

/**
 * the sum_listint - cal the sum of all data in a listint_t list
 * @the_head: first node in linked_list
 *
 * Return: the exact resulting sum
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
