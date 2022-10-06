#include "main.h"
#include <stdlib.h>
/**
 * array_string - Function that creates an array of integers.
 * @min: Minimum value.
 * @max: Maximum value.
 * Return: Pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *new_array;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	new_array = malloc(sizeof(int) * ((max - min) + 1));
	if (new_array == NULL)
	{
		return (NULL);
	}
	for (j = 0; min <= max; min++, j++)
	{
		new_array[j] = min;
	}
	return (new_array);
}
