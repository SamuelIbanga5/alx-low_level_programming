#include <stdio.h>
/**
 * main - Program entry point.
 * Description: This program prints the alphabets in lowercase
 * and uppercase followed by a new line.
 * Return: 0 Success.
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	alphabet = 'A';

	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
