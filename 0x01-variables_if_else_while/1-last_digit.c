#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program entry point.
 * Description: This program outputs the last digit of the number stored
 * in the variable n and checks if it is greater than 5 or equal to 0
 * or less than 6 but greater than 0.
 * Return: 0 Success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %i and is 0\n", n, n % 10);
	}
	else if (n % 10 < 6)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
