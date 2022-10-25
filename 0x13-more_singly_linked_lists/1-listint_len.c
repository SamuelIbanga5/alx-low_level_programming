#include "lists.h"
/**
 * listint_len - Function that returns the number of elements in a linked list.
 * @h: Pointer to listint_t structure.
 * Return: Number of elements in Linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
