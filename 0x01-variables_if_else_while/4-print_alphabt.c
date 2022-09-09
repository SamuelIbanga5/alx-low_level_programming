#include <stdio.h>
/**
 * main - Program Entry point.
 * Description: This program prints the alphabet in lowercase
 * except letters 'q' and 'e' and followed by a new line.
 * Return: 0 Success.
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');

	return (0);
}
