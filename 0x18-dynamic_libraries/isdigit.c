#include "main.h"
/**
 * _isdigit - Program that checks for a digit (0 through 9).
 * @c: Character to be tested.
 *
 * Return: 1 if "c" is a digit or 0 if otherwise.
 */
int _isdigit(int c)
{
	int retval;

	if (c >= 48 && c <= 57)
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}
	return (retval);
}
