#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the head node
 *
 * Return: the data of the deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);
	return (n);
}
