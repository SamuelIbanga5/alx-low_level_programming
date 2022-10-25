#include "lists.h"
/**
 * add_nodeint_end - Function that adds a new node at the end
 * of a listint_t list.
 * @head: Pointer to listint_t structure.
 * @n: Numbers to put.
 * Return: Address of the new element of NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = temp;
	return (temp);
}
