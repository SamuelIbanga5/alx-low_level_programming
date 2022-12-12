#include "main.h"
/**
 * _strncpy - Function that copies a string.
 * @dest: Destination to copy string into.
 * @src: String to copy.
 * @n: Numbe of bytes to copy.
 *
 * Return: Copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
