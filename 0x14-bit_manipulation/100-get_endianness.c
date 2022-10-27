#include "main.h"
/**
 * get_endianness - Function that checks the endianness.
 * Return: 0 if big endian elsse 1 if little endian.
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
