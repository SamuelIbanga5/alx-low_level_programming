#include <stdio.h>
/**
 * main - Program entry point.
 * Decription: This program prints all possible different
 * combinations of two digits.
 * Return: 0 Success.
 */
int main(void)
{
	int i,  single, doubled;

	i = 0;

	while (i < 100)
	{
		single = i % 10;
		doubled = i / 10;

		if (doubled < single)
		{
			putchar(doubled + '0');
			putchar(single + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
