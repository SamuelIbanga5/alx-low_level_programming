#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program entry point.
 * Description - Prints name of the executable file.
 * @argc: Number of command arguments.
 * @argv: Array of strings.
 * Return: Always 0 for success.
 */
int main(int __attribute__((unused))argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
