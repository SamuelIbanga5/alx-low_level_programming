#include "main.h"
/**
 * print_rev - Program that prints a string in reverse.
 * @s: String to reverse.
 *
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		length += 1;
		i++;
	}
	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
