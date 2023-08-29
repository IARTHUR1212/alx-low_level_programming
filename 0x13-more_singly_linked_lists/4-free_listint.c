#include "lists.h"

/**
 * The_free_listint - free the linked list
 * @The_head: listint_t list be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
