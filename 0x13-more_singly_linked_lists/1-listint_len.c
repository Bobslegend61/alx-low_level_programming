#include "lists.h"

/**
 * listint_len - get the number of nodes
 * @h: pointer to the list head
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
