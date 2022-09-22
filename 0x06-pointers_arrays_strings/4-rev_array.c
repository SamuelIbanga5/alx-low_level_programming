#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array
 * of integers.
 * @a: Array to reverse.
 * @n: Nmber of elements in the array.
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int value;

	for (i = 0; i <= (n / 2); i++)
	{
		value = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = value;
	}
}
