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
 * add_node - add a node to a linked list
 * @head: head of the linked list
 * @str: data to add to the linked list
 *
 * Return: pointer to the new element (new head)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL || str == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _str_len(str);
	new->next = *head;
	*head = new;
	return (*head);
}
