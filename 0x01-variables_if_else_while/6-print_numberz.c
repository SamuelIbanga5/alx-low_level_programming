#include <stdio.h>
/**
 * main - Program Entry point.
 * Description: Prints all single digit numbers of base 10
 * starting from 0 and followed by a new line.
 * Return: 0 Success.
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar('0' + numbers);
	}
	putchar('\n');

	return (0);
}
