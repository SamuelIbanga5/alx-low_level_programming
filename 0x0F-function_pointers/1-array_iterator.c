#include "function_pointers.h"
/**
 * array_iterator - Function that executes a function given as a parameter
 * on each element of an array.
 * @array: Array to check.
 * @size: Size of array.
 * @action: Pointer to the function to be used.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
