#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Program to print all natural numbers from n to 98
 * Followed by a new line.
 * @n: Beginning of number printing.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
		else if (n > 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
		else
		{
			printf("%d", 98);
		}
	}
	printf("98\n");
}

