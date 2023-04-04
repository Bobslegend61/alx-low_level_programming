#include "lists.h"

/**
 * free_listint2 - frees list in memory
 * @head: pointer to head of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (head && *head)
	{
		listint_t *temp;

		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
}
