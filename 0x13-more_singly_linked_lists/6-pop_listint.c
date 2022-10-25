#include "lists.h"
/**
 * pop_listint - Function that deletes the head node of a listint_t
 * linked list.
 * @head: Pointer to listint_t structure linked list.
 * Return: The head nodes data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
