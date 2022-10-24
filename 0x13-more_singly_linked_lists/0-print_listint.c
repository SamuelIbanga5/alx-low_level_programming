#include "lists.h"
/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: Pointer to listint_t structure.
 * Return: The number of nodes in Singly linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
