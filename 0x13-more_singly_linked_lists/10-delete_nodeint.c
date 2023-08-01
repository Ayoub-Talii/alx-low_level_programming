#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer to the pointer to the head node.
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		prev_node = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev_node->next = current->next;
	free(current);

	return (1);
}
