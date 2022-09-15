#include "main.h"
/**
 * more_numbers - Program that prints numbers 0 through 14 10 times.
 */
void more_numbers(void)
{
	long int numbers;
	int i;

	i = 0;
	while (i < 10)
	{
		for (numbers = 0; numbers < 15; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar((numbers / 10) + '0');
			}
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
