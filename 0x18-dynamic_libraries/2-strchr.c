#include "main.h"
/**
 * _strchr - Function that locates a character in a string.
 * @s: String to search.
 * @c: Character to search for.
 * Return: Pointer to the first occurence of the character in "s".
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return ((s + i));
	}
	return (0);
}
