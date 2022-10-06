#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Function that allocates memory for an array, using malloc.
 * @nmemb: Number of elements.
 * @size: Length in byte of each element.
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	new_array = malloc(size * nmemb);
	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		new_array[i] = 0;
	}
	return (new_array);
}
