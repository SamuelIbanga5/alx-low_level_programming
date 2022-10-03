#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a newly allocated
 * spacce in memory which contains a copy of the string
 * @str: String to copy.
 * Return: POinter to new string.
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
