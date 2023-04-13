#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 * Return: A pointer to the first node where value is located.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	if (list == NULL)
	{
		return (NULL);
	}
	else
	{
		skiplist_t *nd, *jump;

		for (nd = jump = list; jump->next != NULL && jump->n < value;)
		{
			nd = jump;
			if (jump->express != NULL)
			{
				jump = jump->express;
				printf("Value checked at index [%ld] = [%d]\n",
						jump->index, jump->n);
			}
			else
			{
				while (jump->next != NULL)
				{
					jump = jump->next;
				}
			}
		}

		printf("Value found between indexes [%ld] and [%ld]\n",
				nd->index, jump->index);

		for (; nd->index < jump->index && nd->n < value; nd = nd->next)
		{
			printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
		}
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);

		return (nd->n == value ? nd : NULL);
	}
}
