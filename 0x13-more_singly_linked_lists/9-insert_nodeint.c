#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: address to pointer to the head
 * @idx: index to add node
 * @n: data to add
 *
 * Return: address to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (idx < 0 || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (i != (idx - 1) && *head)
	{
		i++;
		head = &(*head)->next;
	}
	if (idx != (i + 1) || *head == NULL)
		return (NULL);
	new->next = (*head)->next;
	(*head)->next = new;
	return (new);
}
