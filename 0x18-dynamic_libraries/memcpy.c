#include "main.h"
/**
 * _memcpy - Function that copies memory area.
 * @dest: Memory area destination.
 * @src: Memory area source.
 * @n: Number of bytes.
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
