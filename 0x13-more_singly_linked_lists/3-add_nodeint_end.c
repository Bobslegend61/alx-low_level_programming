#include "lists.h"

/**
 * add_nodeint_end - Add a new noed to the end of the list
 * @head: pointer to the address of the head
 * @n: new node to add
 *
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while ((*head)->next)
		{
			head = &(*head)->next;
		}
		(*head)->next = new;
	}
	return (new);
}
