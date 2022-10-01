#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints all arguments it receives.
 * @argc: Number of command line arguments.
 * @argv: Array of string command line arguments.
 * Return: Always 0 Success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
