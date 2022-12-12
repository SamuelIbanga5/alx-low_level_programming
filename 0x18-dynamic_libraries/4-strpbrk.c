#include "main.h"
/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: String to search.
 * @accept: Substring to search for.
 * Return: Pinter to the byte in "s" that matches one of the byte in
 * accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		if (accept[j])
		{
			return (s + i);
		}
	}
	return (0);
}
