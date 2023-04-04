#include "lists.h"

/**
 * sum_listint - Sums all data in the list
 * @head: pointer to the head list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
