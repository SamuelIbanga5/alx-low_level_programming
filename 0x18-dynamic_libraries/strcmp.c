#include "main.h"
/**
 * _strcmp - Function that compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: "<0" if "s1" is less than "s2" else
 * "0" if "s1" is equal to "s2" else ">0" if "s1"
 * is greater than "s2".
 */
int _strcmp(char *s1, char *s2)
{
	int i, retval;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			retval = s1[i] - s2[i];
			return (retval);
		}
		i++;
	}
	return (0);
}
