#include "main.h"
/**
 * _abs - Program that computes the absolute value of an integer.
 * @n: Number to convert to absolute value.
 * Return: Always 0 Success.
 */
int _abs(int n)
{
	int retval;

	if (n >= 0)
	{
		retval = n;
	}
	else
	{
		retval = n * -1;
	}
	return (retval);
}
