#include "lists.h"
/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: Pointer to the linked list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
