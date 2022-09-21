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
	int str1, str2, i, retval;

	str1 = 0;
	str2 = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		str1 += (int)s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str2 += (int)s2[i];
		i++;
	}
	if (str1 < str2)
	{
		retval = -1;
	}
	else if (str1 == str2)
	{
		retval = 0;
	}
	else
	{
		retval = 1;
	}
	return (retval);
}
