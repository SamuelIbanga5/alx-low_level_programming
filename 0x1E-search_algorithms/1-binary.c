#include "search_algos.h"

/**
 * binary_search - searches for a value using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 * Return: index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	else
	{
		size_t x, l, r;

		for (l = 0, r = size - 1; r >= l;)
		{
			printf("Searching in array: ");
			for (x = l; x < r; x++)
				printf("%d, ", array[x]);
			printf("%d\n", array[x]);

			x = l + (r - l) / 2;
			if (array[x] == value)
				return (x);
			if (array[x] > value)
				r = x - 1;
			else
				l = x + 1;
		}
		return (-1);
	}
}
