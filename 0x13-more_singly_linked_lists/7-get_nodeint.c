#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node of the list
 * @index: index of the node, starting at 0
 * Return: nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current_node = head;

	while (current_node && count < index)
	{
		current_node = current_node->next;
		count++;
	}

	if (count == index && current_node)
	{
		return (current_node);
	}
	else
		return (NULL);
}
