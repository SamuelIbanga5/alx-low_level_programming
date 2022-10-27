#include "main.h"
/**
 * set_bit - Function that sets value of a bit to 1 at a given index.
 * @n: The number.
 * @index: Idex of the number.
 * Return: 1 if it works else -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
