#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: Number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 * Return: Sum of all its parameters, if n == 0 then 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
