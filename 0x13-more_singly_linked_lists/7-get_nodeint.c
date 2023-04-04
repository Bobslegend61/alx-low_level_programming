#include "lists.h"

/**
 * get_nodeint_at_index - get the node in index of a linked list
 * @head: list head pointer
 * @index: index of node to get
 *
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index && head)
	{
		i++;
		head = head->next;
	}

	if (!head)
		return (NULL);
	return (head);
}
