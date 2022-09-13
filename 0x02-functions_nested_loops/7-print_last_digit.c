#include "main.h"
/**
 * print_last_digit - Program that prints the last digit of a number.
 * @n: Number to check and print last digit.
 *
 * Return: Always 0 Success.
 */
int print_last_digit(int n)
{
	int last_digit;
	if (n < 0)
	{
		last_digit = -1 * (n % 10);
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
