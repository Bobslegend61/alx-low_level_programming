#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node form list
 * @head: pointer to head
 * @index: position of node to delete
 *
 * Return: 1 if success -1 is failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev_node = NULL;

	if (index < 0 || *head == NULL)
		return (-1);
	while (i < index && *head)
	{
		i++;
		prev_node = *head;
		head = &(*head)->next;
	}
	if (i == index && *head == NULL)
		return (-1);
	if (prev_node)
	{
		listint_t *tmp = *head;

		prev_node->next = (*head)->next;
		free(tmp);
		return (1);
	}
	prev_node = *head;
	*head = prev_node->next;
	free(prev_node);
	return (1);
}
