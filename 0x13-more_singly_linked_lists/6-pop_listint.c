#include "lists.h"

/**
 * The pop_listint - delete head node of a linked_list
 * @The_head: pointer to first element in linked list
 *
 * Return: data inside the element that was deleted,
 * or 0 when the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
