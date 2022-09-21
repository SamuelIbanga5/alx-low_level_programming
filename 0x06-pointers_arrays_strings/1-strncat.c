#include "main.h"
/**
 * _strncat - Function that concatenates two strings but will use
 * at most "n" bytes from "src".
 * @dest: Destination string to concatenate to.
 * @src: String to concatenate.
 * @n: Number of bytes from src.
 *
 * Return: Concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
