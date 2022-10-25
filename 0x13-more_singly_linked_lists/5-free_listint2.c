#include "lists.h"
/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: Pointer to listint_t structure.
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
