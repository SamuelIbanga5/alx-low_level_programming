#include "lists.h"
/**
 * list_len - Function that returns the number of elements in
 * a linked list_t list.
 * @h: Pointer to linked list.
 * Return: Number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
	{
		temp = temp->next;
	}
	return (i);
}
