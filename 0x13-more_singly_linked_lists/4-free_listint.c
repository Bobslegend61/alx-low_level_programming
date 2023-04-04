#include "lists.h"

/**
 * free_listint - free memory for list
 * @head: pointer to list head
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		listint_t *temp;

		while (head)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
