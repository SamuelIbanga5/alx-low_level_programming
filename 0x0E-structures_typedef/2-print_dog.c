#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function that prints a struct dog.
 * @d: Pointer to type struct dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
