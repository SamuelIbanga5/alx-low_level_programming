#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: String to check.
 * @accept: String with characters to match.
 * Return: Number of bytes in the initial segment "s".
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}
