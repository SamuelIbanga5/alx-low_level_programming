#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Program that adds positive numbers.
 * @argc: Number of command line arguments.
 * @argv: Array of command line strings.
 * Return: Always 0 Success.
 */
int main(int argc, char *argv[])
{
	int i, add, j;

	add = 0;
	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error");
					return (1);
				}
			}
		}
		for (i = 0; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
