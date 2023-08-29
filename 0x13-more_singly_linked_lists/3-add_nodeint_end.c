#include "lists.h"

/**
 * The_nodeint_end - add a node at the end of linked_list
 * @The_head: pointer to thefirst element in linked_list
 * @n: insert data to the new element.
 *
 * Return: pointer_to new node, or NULL when it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
