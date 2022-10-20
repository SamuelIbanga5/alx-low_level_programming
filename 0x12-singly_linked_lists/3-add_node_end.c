#include "lists.h"
#include <string.h>
/**
 * length - Calculates length of string.
 * @str: Pointer to strin.
 * Return: Length of string or number of characters.
 */
unsigned int length(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - FUnction that adds a new node at the end of a list_t list.
 * @head: First node of linked list.
 * @str: Pointer to string.
 * Return: Address to the new element of NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		return (NULL);
	}
	new->len = length(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
