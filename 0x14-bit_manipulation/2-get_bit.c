#include "main.h"
/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Number to convert.
 * @index: Number index.
 * Return: The value of the bit index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
