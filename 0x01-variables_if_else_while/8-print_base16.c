#include <stdio.h>
/**
 * main - Program entry point.
 * Description: This prints all the numbers of
 * base 16 in lowercase followed by a new line.
 * Return: 0 Success.
 */
int main(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
