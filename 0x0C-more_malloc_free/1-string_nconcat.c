#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes of s2 string.
 * Return: Pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j, k;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (j > n)
	{
		j = n;
	}
	new_str = malloc(sizeof(char) * (n + i + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		new_str[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		new_str[k + i] = s2[k];
	}
	new_str[i + n] = '\0';
	return (new_str);
}
