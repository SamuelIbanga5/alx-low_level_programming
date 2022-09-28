#include "main.h"
/**
 * check_prime - Function that checks if number is prime number.
 * @x: Lower values to divide.
 * @y: Number to check.
 * Return: 1 if number is prime and 0 if not.
 */
int check_prime(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
		return (check_prime(x + 1, y));
}
/**
 * is_prime_number - Function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: Number to check if prime.
 * Return: 1 if number is prime else 0.
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (check_prime(2, n));
}
