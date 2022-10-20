#include "lists.h"
#include <string.h>
/**
 * length - Checks for length of string.
 * @str: String to find length.
 * Return: Length of string.
 */
unsigned int length(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node - Function that adds a new node
 * at the beginning of a list_t list.
 * @head: Start of linked list.
 * @str: Pointer to string.
 * Return: The address of the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
		free(new);
		return (NULL);
	}
	new->len = length(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
