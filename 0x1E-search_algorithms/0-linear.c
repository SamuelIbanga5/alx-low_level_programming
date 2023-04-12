#include "search_algos.h"

/**
 * linear_search - searches for a value using the linear search algorithm.
 * @array: a pointer to te first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the first index where value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	if (!array)
	{
		return (-1);
	}
	else
	{
		size_t x;

		x = 0;
		while (x < size)
		{
			printf("Value checked array[%lu] = [%d]\n", x, array[x]);
			if (array[x] == value)
				return (x);
			x++;
		}
		return (-1);
	}
}
