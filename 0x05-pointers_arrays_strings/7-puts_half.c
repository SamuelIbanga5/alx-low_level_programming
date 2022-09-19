#include "main.h"
/**
 * puts_half - Program that prints half of a string
 * followed by a string.
 * @str: String to check
 *
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	i = (i / 2) + 1;
	while (str[i] > '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
