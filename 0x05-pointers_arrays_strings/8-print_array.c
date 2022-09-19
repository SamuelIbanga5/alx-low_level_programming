#include "main.h"
#include <stdio.h>
/**
 * print_array - Program that prints "n" elements of an integer
 * followed by a new line.
 * @a: Integer
 * @n: Number of elements of the array to be printed.
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
