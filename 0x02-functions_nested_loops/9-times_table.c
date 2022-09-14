#include "main.h"
/**
 * times_table - Program to priont the 9 times table starting with 0.
 */
void times_table(void)
{
	int x, y, z;

	x = 0;
	y = 0;
	z = 0;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;
			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 1= + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}

