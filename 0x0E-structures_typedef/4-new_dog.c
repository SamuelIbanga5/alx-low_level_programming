#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Function that creates a new dog.
 * @name: Pointer to name of dog in struct type.
 * @age: Age of dog in struct type.
 * @owner: Owner of dog in struct type.
 * Return: Info of new dog in dog_t type or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;
	i++;
	new_dog->name = malloc(sizeof(char) * i);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		new_dog->name[k] = name[k];
	}
	new_dog->age = age;
	for (j = 0; owner[j]; j++)
		;
	j++;
	new_dog->owner = malloc(sizeof(char) * j);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
	{
		new_dog->owner[k] = owner[k];
	}
	return (new_dog);
}
