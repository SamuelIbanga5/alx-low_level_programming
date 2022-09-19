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

	i = 0;
	length = 0;
	while (*(s + i) != '\0')
	{
		length += 1;
		i++;
	}
	while (0 <= length)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
