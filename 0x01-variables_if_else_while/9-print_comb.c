#include <stdio.h>
/**
 * main - Program entry point.
 * Description: This program prints all possible
 * combinations of single-digit numbers.
 * Return: 0 Success.
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
