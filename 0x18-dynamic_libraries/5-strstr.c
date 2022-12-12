#include "main.h"
/**
 * _strstr - Function that locates a substring in a string.
 * @haystack: Main string to search.
 * @needle: Substring to search for.
 * Return: Pointer to the beginning of the located substring or Null.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	j = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (needle[j])
		{
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (0);
}
