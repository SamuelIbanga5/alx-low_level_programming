#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns nth node of a
 * listint_t linked list.
 * @head: Pointer to listint_t structure.
 * @index: Index of elements.
 * Return: Nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
