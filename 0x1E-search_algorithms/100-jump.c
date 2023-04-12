#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump
 * search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: The first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	else
	{
		size_t x, jumper, move;

		move = sqrt(size);
		for (x = jumper = 0; jumper < size && array[jumper] < value;)
		{
			printf("Value checked array[%ld] = [%d]\n", jumper, array[jumper]);
			x = jumper;
			jumper += move;
		}

		printf("Value found between indexes [%ld] and [%ld]\n", x, jumper);
		jumper = jumper < size - 1 ? jumper : size - 1;
		for (; x < jumper && array[x] < value; x++)
		{
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		}
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);

		return (array[x] == value ? (int)x : -1);
	}
}
