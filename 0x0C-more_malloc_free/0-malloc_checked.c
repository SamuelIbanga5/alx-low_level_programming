#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Number of bytes in memory to allocate.
 * Return: Pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
	{
		exit(98);
	}
	return (new_mem);
}
