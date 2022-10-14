#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer.
 * @array: Array to search inside for.
 * @size: Size of array.
 * @cmp: Pointer to the function used to compare values.
 * Return: Index of the first element for which the cmp function
 * does not return 0, if no element matches, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
