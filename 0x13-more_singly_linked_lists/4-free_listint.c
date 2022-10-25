#include "lists.h"
/**
 * free_listint - Function that frees a listint_t list.
 * @head: Pointer to the listint_t Structure.
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
