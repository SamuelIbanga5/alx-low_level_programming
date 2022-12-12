#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte.
 * @s: Pointer to memory area.
 * @b: Constant byte.
 * @n: Number of bytes.
 * Return: Pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
