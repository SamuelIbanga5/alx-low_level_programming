#include "3-calc.h"
/**
 * op_add - Function that calculates the sum of a and b
 * @a: First number to add.
 * @b: Second number to add.
 * Return: Sum of numbers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that subtracts two numbers.
 * @a: First number to subtract from.
 * @b: Number to subtract.
 * Return: Difference of two numbers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies two numbers.
 * @a: FIrst number.
 * @b: Second number.
 * Return: Product of two numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divides two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Divided numbers.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function that modulus of a number.
 * @a: First number.
 * @b: Second number.
 * Return: Modulus of a  number.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
