#include <stdio.h>
/**
 * main - Program Entry point.
 * Description: This program prints the alphabets in lowercase and
 * then in uppercase followed by a new line.
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
	putchar('\n');
	return (0);
}
