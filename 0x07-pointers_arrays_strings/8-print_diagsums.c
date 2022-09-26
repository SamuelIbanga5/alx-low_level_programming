#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Funtion that prints the sum of the two diagonals
 * of a square matrx of integers.
 * @a: Array.
 * @size: Size of array.
 */
void print_diagsums(int *a, int size)
{
	int i, j, move, diagsum, diagsum2;
	
	diagsum = 0;
	diagsum2 = 0;
	for (i = 0; i < size; i++)
	{
		move = (i * size) + i;
		diagsum += *(a + move);
	}
	for (j = 0; j < size; j++)
	{
		move = (j * size) + (size - 1 - j);
		diagsum2 += *(a + move);
	}
	printf("%d, %d\n", diagsum, diagsum2);
}
