#include "main.h"
/**
 * print_most_numbers - Program that prints numbers 0 throught 9
 * except number 2 and 4.
 */
void print_most_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		if (numbers != 2 && numbers != 4)
		{
			_putchar(numbers + '0');
		}
	}
	_putchar('\n');
}
