#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: head of the linked list
 *
 * Return: number of element in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
