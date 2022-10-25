#include "lists.h"
/**
 * add_nodeint - Function that adds new node
 * at the beginning of a listint_t list.
 * @head: Pointer to listint_t Structure.
 * @n: NUmber to add to beginning.
 * Return: The address of a new element or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

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
	temp->next = *head;
	*head = temp;
	return (temp);
}
