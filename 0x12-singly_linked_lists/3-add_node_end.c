#include "lists.h"

/**
 * _str_len - function to get string length
 * @str: string to operate on
 *
 * Return: length of the string
 */
size_t _str_len(const char *str)
{
	size_t i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * add_nede_end - adds a node to end of a linked list
 * @head: pointer to pointer to head of the list
 * @str: data to add
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL || str == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _str_len(str);
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		new->next = NULL;
	}
	return (new);
}
