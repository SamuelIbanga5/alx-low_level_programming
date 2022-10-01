#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: Number of command line arguments.
 * @argv: Array of string command line arguments.
 * Return: Always 0 Success.
 */
int main(int argc, char *argv[])
{
	int cents;
	int c[5];

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[argc + 1]);
		if (cents < 0)
		{
			printf("0\n");
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				cents = a / c[i];
				a -= t * c[i];
				n += t;
				if (a == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", n");
		return (0);
	}
