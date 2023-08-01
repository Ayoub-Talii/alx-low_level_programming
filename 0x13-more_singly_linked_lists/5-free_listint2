#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to a pointer to the head node of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (*head)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = NULL;
}
