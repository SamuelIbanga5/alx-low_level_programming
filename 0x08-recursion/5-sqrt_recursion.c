#include "main.h"
/**
 * _check_sqrt - Check if the number is a square root.
 * @x: Number to multiply to get square.
 * @y: Squared number.
 * Return: Square root of the number.
 */
int _check_sqrt(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	return (_check_sqrt(x + 1, y));
}
/**
 * _sqrt_recursion - Function that returns the natural
 * square root of a number.
 * @n: Number to calculate square root
 * Return: Square root of the number.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_check_sqrt(1, n));
}
