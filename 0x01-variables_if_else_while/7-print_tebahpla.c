#include <stdio.h>
/**
 * main - Program entry point
 * Description: This program prints the lowercase alphabet
 * in reverse and followed by a new line.
 * Return: 0 Success.
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
