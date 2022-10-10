#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * Function that frees dogs.
 * @d: Pointer to dog type.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
