#include "main.h"
/**
 * puts2 - Program that prints every other character or a string
 * starting with the first character followed by a new line.
 * @str: String to print characters
 *
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
