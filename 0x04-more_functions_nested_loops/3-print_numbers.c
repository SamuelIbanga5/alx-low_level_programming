#include "main.h"
/**
 * print_numbers - Program that prints numbers from 0 to 9.
 */
void print_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		_putchar(numbers + '0');
	}
	_putchar('\n');
}
