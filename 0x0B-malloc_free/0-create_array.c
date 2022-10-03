#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of the array.
 * @c: array.
 * Return: Pointer to array of chars.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

