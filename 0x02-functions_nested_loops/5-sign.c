#include "main.h"
/**
 * print_sign - Program that prints the sign of a number.
 * @n: Number to be checked for sign.
 *
 * Return: returns 1 and prints '+' if n is
 * greater than zero else 0 and prints 0 if n is zero
 * else -1 and prints - if n is less than zero.
 */
int print_sign(int n)
{
	int retval;

	if (n > 0)
	{
		retval = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		retval = 0;
		_putchar('0');
	}
	else
	{
		retval = -1;
		_putchar('-');
	}
	return (retval);
}
