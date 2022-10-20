#include "lists.h"
/**
 * free_list - Function that frees a list_t list.
 * @head: First node of linked list.
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
