#include <stdio.h>
/**
 * main - Program entry point.
 * Description: This program prints all single
 * digit numbers of base 10 starting from 0 followed by a new line.
 * Return: 0 Success.
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d\n", numbers);
	}
	return (0);
}
