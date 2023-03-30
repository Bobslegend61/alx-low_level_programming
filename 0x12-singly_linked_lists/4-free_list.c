#include "lists.h"

/**
 * free_list - frees the linked list on heap
 * @head: head of the linked list
 *
 * Return: Nothing to return
 */
void free_list(list_t *head)
{
	list_t *lst_head;

	while (head != NULL)
	{
		lst_head = head;
		head = head->next;
		free(lst_head->str);
		free(lst_head);
	}
}
