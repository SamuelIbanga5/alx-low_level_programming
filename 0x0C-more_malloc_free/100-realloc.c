#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Function that reallocates a memory block using
 * malloc and free.
 * @ptr: Pointer to the memory previously allocated with a call
 * to malloc.
 * @old_size: Size in bytes of the allocated space for ptr.
 * @new_size: New size in bytes of the new memory block.
 * Return: Pointer to the new allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem;
	unsigned int i, max = new_size;
	char *old_mem = ptr;

	if (ptr == NULL)
	{
		new_mem = malloc(new_size);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new_mem = malloc(new_size);
	if (new_mem == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		max = old_size;
	}
	for (i = 0; i < max; i++)
	{
		new_mem[i] = old_mem[i];
	}
	free(ptr);
	return (new_mem);
}
