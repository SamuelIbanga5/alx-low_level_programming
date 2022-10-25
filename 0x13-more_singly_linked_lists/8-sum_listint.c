#include "lists.h"
/**
 * sum_listint - Function that returns the sum of all the data(n)
 * of a listint_t linked list.
 * @head: Pointer to listint_t structure.
 * Return: Sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

