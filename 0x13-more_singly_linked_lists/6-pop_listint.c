#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to a pointer to the head node of the list
 * Return: data (n) of the deleted node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int node_data;

	if (head == NULL || *head == NULL)
		return (0);

	current_node = *head;
	node_data = current_node->n;
	*head = current_node->next;
	free(current_node);

	return (node_data);
}
