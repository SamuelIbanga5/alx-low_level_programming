#include "main.h"
/**
 * _strlen - Program that returns the length of a string.
 * @s: String to count.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int counter;
	int i;

	i = 0;
	counter = 0;
	while (*(s + i) != '\0')
	{
		counter += 1;
		i++;
	}
	return (counter);
}
