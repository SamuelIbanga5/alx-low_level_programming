#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	char ch;
	int counter;

	ch = 'a';
	counter = 0;

	while (counter < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		ch = 'a';
		counter++;
	}
}
